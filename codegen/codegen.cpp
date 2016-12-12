#include <cassert>
#include <typeinfo>
#include <string.h>
#include <fstream>

#include "ast.hpp"
#include "symtab.hpp"
#include "primitive.hpp"


class Codegen : public Visitor
{
  private:
    FILE* m_outputfile;
    SymTab *m_st;

    // Basic size of a word (integers and booleans) in bytes
    static const int wordsize = 4;

    int label_count; // Access with new_label

    // Helpers
    // This is used to get new unique labels (cleverly names label1, label2, ...)
    int new_label()
    {
        return label_count++;
    }

    void set_text_mode()
    {
        fprintf(m_outputfile, ".text\n\n");
    }

    void set_data_mode()
    {
        fprintf(m_outputfile, ".data\n\n");
    }

  const char* lhs_to_id(Lhs* lhs)
  {
    Variable *v = dynamic_cast<Variable*>(lhs);
    if(v) {
      return v->m_symname->spelling();
    }
  }

    // PART 1:
    // 1) get arithmetic expressions on integers working:
    //  you wont really be able to run your code,
    //  but you can visually inspect it to see that the correct
    //  chains of opcodes are being generated.
    // 2) get procedure calls working:
    //  if you want to see at least a very simple program compile
    //  and link successfully against gcc-produced code, you
    //  need to get at least this far
    // 3) get boolean operation working
    //  before we can implement any of the conditional control flow
    //  stuff, we need to have booleans worked out.
    // 4) control flow:
    //  we need a way to have if-elses and while loops in our language.
    // 5) arrays: just like variables, but with an index

    // Hint: the symbol table has been augmented to track an offset
    //  with all of the symbols.  That offset can be used to figure
    //  out where in the activation record you should look for a particuar
    //  variable


    ///////////////////////////////////////////////////////////////////////////////
    //
    //  function_prologue
    //  function_epilogue
    //
    //  Together these two functions implement the callee-side of the calling
    //  convention.  A stack frame has the following layout:
    //
    //                         <- SP (before pre-call / after epilogue)
    //  high -----------------
    //       | actual arg 1  |
    //       |    ...        |
    //       | actual arg n  |
    //       -----------------
    //       |  Return Addr  |
    //       =================
    //       | temporary 1   | <- SP (when starting prologue)
    //       |    ...        |
    //       | temporary n   |
    //   low ----------------- <- SP (when done prologue)
    //
    //
    //              ||
    //              ||
    //             \  /
    //              \/
    //
    //
    //  The caller is responsible for placing the actual arguments
    //  and the return address on the stack. Actually, the return address
    //  is put automatically on the stack as part of the x86 call instruction.
    //
    //  On function entry, the callee
    //
    //  (1) allocates space for the callee's temporaries on the stack
    //
    //  (2) saves callee-saved registers (see below) - including the previous activation record pointer (%ebp)
    //
    //  (3) makes the activation record pointer (frmae pointer - %ebp) point to the start of the temporary region
    //
    //  (4) possibly copies the actual arguments into the temporary variables to allow easier access
    //
    //  On function exit, the callee:
    //
    //  (1) pops the callee's activation record (temporay area) off the stack
    //
    //  (2) restores the callee-saved registers, including the activation record of the caller (%ebp)
    //
    //  (3) jumps to the return address (using the x86 "ret" instruction, this automatically pops the
    //      return address off the stack
    //
    //////////////////////////////////////////////////////////////////////////////
    //
    // Since we are interfacing with code produced by GCC, we have to respect the
    // calling convention that GCC demands:
    //
    // Contract between caller and callee on x86:
    //    * after call instruction:
    //           o %eip points at first instruction of function
    //           o %esp+4 points at first argument
    //           o %esp points at return address
    //    * after ret instruction:
    //           o %eip contains return address
    //           o %esp points at arguments pushed by caller
    //           o called function may have trashed arguments
    //           o %eax contains return value (or trash if function is void)
    //           o %ecx, %edx may be trashed
    //           o %ebp, %ebx, %esi, %edi must contain contents from time of call
    //    * Terminology:
    //           o %eax, %ecx, %edx are "caller save" registers
    //           o %ebp, %ebx, %esi, %edi are "callee save" registers
    ////////////////////////////////////////////////////////////////////////////////


    void emit_prologue(SymName *name, unsigned int size_locals, unsigned int num_args)
    {
      char *symName = strdup(name->spelling());
      std::string s = "";
      /*for(char* c = symName; *c != '\0'; c++){
	s = s + *c;
	}*/
      fprintf(m_outputfile, "%s: \n", symName);
      fprintf(m_outputfile, "pushl %%ebp \n");
      fprintf(m_outputfile, "movl %%esp, %%ebp \n");
      if(num_args > 0){
	fprintf(m_outputfile, "subl $%d, %%esp \n", (num_args*4)); //Make space for all params
      }
	for (int i = 1; i<=num_args; i++){
	fprintf( m_outputfile, "movl %d(%%ebp), %%eax\n", (i * 4 + 4));
	fprintf(m_outputfile, "movl %%eax, -%d(%%ebp)\n", i * 4);
      }   
    }

    void emit_epilogue()
    {
      fprintf(m_outputfile, "movl %%ebp, %%esp \n");
      fprintf(m_outputfile, "popl %%ebp \n");
      fprintf(m_outputfile, "retl \n");
    }

  // WRITEME: more functions to emit code

  public:

    Codegen(FILE* outputfile, SymTab* st)
    {
        m_outputfile = outputfile;
        m_st = st;
        label_count = 0;
    }

    void visitProgramImpl(ProgramImpl* p)
    {
      this->set_text_mode();
      //fprintf(m_outputfile, ".text \n\n");
      std::list<Proc_ptr>::iterator i;
      for (i = p->m_proc_list->begin(); i != p->m_proc_list->end(); i++)
	{
	  ProcImpl* proc = static_cast<ProcImpl*>(*i);
	  char *ident = strdup(proc->m_symname->spelling());
	  //Add all function names to the assembly file
	  fprintf(m_outputfile, ".globl %s\n", ident);
	  }

      p->visit_children(this);
      fprintf(m_outputfile, "\n");
    }

    void visitProcImpl(ProcImpl* p)
    {
      SymName *sym = p->m_symname;
      int scope = m_st->scopesize(p->m_attribute.m_scope);
      //Put all params on the stack
      std::list<Decl_ptr>::iterator i;
      unsigned int argCount = 0;
      for (i = p->m_decl_list->begin(); i != p->m_decl_list->end(); i++){
	argCount += 1;
      }
      emit_prologue(sym, scope, argCount);
      //Visit the procedure block. Should add all local vars to stack
      p->m_procedure_block->accept(this);
      emit_epilogue();
    }

    void visitProcedure_blockImpl(Procedure_blockImpl* p)
    {
      p->visit_children(this);
    }

    void visitNested_blockImpl(Nested_blockImpl* p)
    {
      p->visit_children(this);
    }

    //WORKS
    void visitAssignment(Assignment* p)
    {
      p->visit_children(this);
      const char* ident =  lhs_to_id(p->m_lhs);
      fprintf(m_outputfile, "popl %%eax \n");
      Symbol *s = m_st->lookup(p->m_attribute.m_scope, ident);
      fprintf(m_outputfile, "movl %%eax, %d(%%ebp) \n", -(wordsize+s->get_offset()) ); 

    }

    void visitCall(Call* p)
    {
      //Traverse the params in reverse so they are pushed in order
      std::list<Expr_ptr>::reverse_iterator i;
      for(i = p->m_expr_list->rbegin(); i != p->m_expr_list->rend(); i++){
	//Visit the param (which will put it on the stack)
	(*i)->accept(this);
      }
      char* procName = strdup(p->m_symname->spelling()); //Name of procedure
      fprintf(m_outputfile, "call %s \n", procName);
      const char* lhsName = lhs_to_id(p->m_lhs);
      Symbol *s = m_st->lookup(p->m_attribute.m_scope, lhsName);
      int offset = -(s->get_offset() + 4);
      fprintf(m_outputfile, "movl %%eax, %d(%%ebp)", offset);
    }

    //WORKS
    void visitReturn(Return* p)
    {
      p->visit_children(this);
      fprintf(m_outputfile, "popl %%eax \n");
    }

    // Control flow
    void visitIfWithElse(IfWithElse* p)
    {
      int elselabel = new_label(); //Label for the else statement
      int endlabel = new_label();
      p->m_expr->visit_children(this);
      //fprintf( m_outputfile, "popl %%eax \n"); //Holds result of condition inside the if()
      fprintf( m_outputfile, "movl $0, %%ebx \n");
      fprintf( m_outputfile, "cmp %%eax, %%ebx \n"); //See if the condition was true or false
      fprintf( m_outputfile, "je label%d \n", elselabel); //Jump if condition was false
      p->m_nested_block_1->visit_children(this);
      fprintf(m_outputfile, "jmp label%d \n", endlabel); //Skip the else
      fprintf(m_outputfile, "label%d: \n", elselabel);
      p->m_nested_block_2->accept(this);
      fprintf(m_outputfile, "label%d: \n", endlabel); //After the if/else
    }

    //WORKS
    void visitIfNoElse(IfNoElse* p)
    {
      int l = new_label();
      p->m_expr->visit_children(this);
      fprintf( m_outputfile, "popl %%eax \n"); //Holds result of condition inside the if()
      fprintf( m_outputfile, "movl $0, %%ebx \n");
      fprintf( m_outputfile, "cmp %%eax, %%ebx \n"); //See if the condition was true or false
      fprintf( m_outputfile, "je label%d \n",l); //Jump if condition was false
      p->m_nested_block->visit_children(this);
      fprintf(m_outputfile, "label%d: \n", l);
    }

    void visitWhileLoop(WhileLoop* p)
    {
      int l = new_label();
      p->m_expr->visit_children(this);
      fprintf( m_outputfile, "popl %%eax \n"); //Holds result of condition inside the while()
      fprintf( m_outputfile, "movl $0, %%ebx \n");
      fprintf( m_outputfile, "cmp %%eax, %%ebx \n"); //See if the condition was true or false
      fprintf( m_outputfile, "je label%d \n",l); //Jump if condition was false
      p->m_nested_block->visit_children(this);
      fprintf(m_outputfile, "label%d: \n", l);
    }

    void visitCodeBlock(CodeBlock *p) 
    {
      p->visit_children(this);
    }

    // Variable declarations (no code generation needed)
    void visitDeclImpl(DeclImpl* p)
    {
      p->visit_children(this);
    }

    void visitTInteger(TInteger* p)
    {
      p->visit_children(this);
    }

    void visitTIntPtr(TIntPtr* p)
    {
      p->visit_children(this);
    }

    void visitTBoolean(TBoolean* p)
    {
      p->visit_children(this);
    }

    void visitTCharacter(TCharacter* p)
    {
      p->visit_children(this);
    }

    void visitTCharPtr(TCharPtr* p)
    {
      p->visit_children(this);
    }

    void visitTString(TString* p)
    {
      p->visit_children(this);
    }

    // Comparison operations

    //WORKS
    void visitCompare(Compare* p)
    {
      p->visit_children(this);
      int l = new_label();
      int ne = new_label();      //Label to jump to if they're not equal
      fprintf( m_outputfile, "popl %%eax \n");
      fprintf( m_outputfile, "popl %%ebx \n");
      fprintf( m_outputfile, "cmpl %%ebx,%%eax \n");
      fprintf(m_outputfile, "je label%d \n", l);
      //Push the result of the comparison (0 means they weren't equal)
      fprintf(m_outputfile, "pushl $0 \n");     
      fprintf(m_outputfile, "jmp label%d \n", ne);
      fprintf(m_outputfile, "label%d: \n", l);
      //1 means they were equal
      fprintf(m_outputfile, "pushl $1 \n");
      fprintf(m_outputfile, "label%d: \n", ne);
    }

    //WORKS
    void visitNoteq(Noteq* p)
    {
      p->visit_children(this);
      int l = new_label();
      int eq = new_label();    //Label to jump to if they're equal
      fprintf( m_outputfile, "popl %%eax \n");
      fprintf( m_outputfile, "popl %%ebx \n");
      fprintf( m_outputfile, "cmpl %%ebx, %%eax \n");
      fprintf(m_outputfile, "jne label%d \n", l);
      fprintf(m_outputfile, "pushl $0 \n");
      fprintf(m_outputfile, "jmp label%d \n", eq);
      fprintf(m_outputfile, "label%d: \n", l);
      fprintf(m_outputfile, "pushl $1 \n");
      fprintf(m_outputfile, "label%d: \n", eq);
    }

    //WORKS
    void visitGt(Gt* p)
    {
      p->visit_children(this);
      int l = new_label();
      int leq = new_label();    //Label to jump to if less than or equal 
      fprintf( m_outputfile, "popl %%eax \n");
      fprintf( m_outputfile, "popl %%ebx \n");
      fprintf( m_outputfile, "cmpl %%eax, %%ebx \n");
      fprintf(m_outputfile, "jg label%d \n", l);
      fprintf(m_outputfile, "pushl $0 \n");
      fprintf(m_outputfile, "jmp label%d \n", leq);
      fprintf(m_outputfile, "label%d: \n", l);
      fprintf(m_outputfile, "pushl $1 \n");
      fprintf(m_outputfile, "label%d: \n", leq);
    }

    //WORKS
    void visitGteq(Gteq* p)
    {
      p->visit_children(this);
      int l = new_label();
      int lt = new_label();    //Label to jump to if less than
      fprintf( m_outputfile, "popl %%eax \n");
      fprintf( m_outputfile, "popl %%ebx \n");
      fprintf( m_outputfile, "cmpl %%eax, %%ebx \n");
      fprintf(m_outputfile, "jge label%d \n", l);
      fprintf(m_outputfile, "pushl $0 \n");
      fprintf(m_outputfile, "jmp label%d \n", lt);
      fprintf(m_outputfile, "label%d: \n", l);
      fprintf(m_outputfile, "pushl $1 \n");
      fprintf(m_outputfile, "label%d: \n", lt);
    }

    //WORKS
    void visitLt(Lt* p)
    {
      p->visit_children(this);
      int l = new_label();
      int geq = new_label();    //Label to jump to if greater than or equal 
      fprintf(m_outputfile, "popl %%eax \n");
      fprintf(m_outputfile, "popl %%ebx \n");
      fprintf(m_outputfile, "cmpl %%eax, %%ebx \n");
      fprintf(m_outputfile, "jl label%d \n", l);
      fprintf(m_outputfile, "pushl $0 \n");
      fprintf(m_outputfile, "jmp label%d \n", geq);
      fprintf(m_outputfile, "label%d: \n", l);
      fprintf(m_outputfile, "pushl $1 \n");
      fprintf(m_outputfile, "label%d: \n", geq);
    }

    //WORKS
    void visitLteq(Lteq* p)
    {
      p->visit_children(this);
      int l = new_label();
      int gt = new_label();    //Label to jump to if greater than
      fprintf(m_outputfile, "popl %%eax \n");
      fprintf(m_outputfile, "popl %%ebx \n");
      fprintf(m_outputfile, "cmpl %%eax, %%ebx \n");
      fprintf(m_outputfile, "jle label%d \n", l);
      fprintf(m_outputfile, "pushl $0 \n");
      fprintf(m_outputfile, "jmp label%d \n", gt);
      fprintf(m_outputfile, "label%d: \n", l);
      fprintf(m_outputfile, "pushl $1 \n");
      fprintf(m_outputfile, "label%d: \n", gt);
    }

    // Arithmetic and logic operations

    //WORKS
    void visitAnd(And* p)
    {
      p->visit_children(this);
      fprintf(m_outputfile, "popl %%ebx \n");
      fprintf(m_outputfile, "popl %%eax \n"); 
      fprintf(m_outputfile, "andl %%ebx , %%eax \n");
      fprintf(m_outputfile, "pushl %%eax \n"); 
    }

    //WORKS
    void visitOr(Or* p)
    {
      p->visit_children(this);
      fprintf(m_outputfile, "popl %%ebx \n");
      fprintf(m_outputfile, "popl %%eax \n"); 
      fprintf(m_outputfile, "orl %%ebx , %%eax \n");
      fprintf(m_outputfile, "pushl %%eax \n"); 
    }

    //WORKS
    void visitMinus(Minus* p)
    {
      p->visit_children(this);
      fprintf(m_outputfile, "popl %%ebx \n");
      fprintf(m_outputfile, "popl %%eax \n"); 
      fprintf(m_outputfile, "subl %%ebx , %%eax \n");
      fprintf(m_outputfile, "pushl %%eax \n");
    }
  
    //WORKS
    void visitPlus(Plus* p)
    {
      p->visit_children(this);
      fprintf(m_outputfile, "popl %%ebx \n");
      fprintf(m_outputfile, "popl %%eax \n"); 
      fprintf(m_outputfile, "addl %%ebx , %%eax \n");
      fprintf(m_outputfile, "pushl %%eax \n");
    }

    //WORKS
    void visitTimes(Times* p)
    {
      p->visit_children(this);
      fprintf(m_outputfile, "popl %%ebx \n"); 
      fprintf(m_outputfile, "popl %%eax \n");
      fprintf(m_outputfile, "imull %%ebx , %%eax \n");
      fprintf(m_outputfile, "pushl %%eax \n");
    }

    //WORKS
    void visitDiv(Div* p)
    {
      p->visit_children(this);
      fprintf(m_outputfile, "popl %%ebx \n"); //l allows us to work with 32-bit
      fprintf(m_outputfile, "popl %%eax \n");
      fprintf(m_outputfile, "cdq \n");        //sign-extend eax 
      fprintf(m_outputfile, "idivl %%ebx \n");
      fprintf(m_outputfile, "pushl %%eax \n");
    }

    //WORKS
    void visitNot(Not* p)
    {
      p->visit_children(this);
      fprintf(m_outputfile, "popl %%eax \n");
      fprintf(m_outputfile, "notl %%eax \n");
      fprintf(m_outputfile, "addl $2 , %%eax \n");
      fprintf(m_outputfile, "pushl %%eax \n");
    }

    //WORKS
    void visitUminus(Uminus* p)
    {
      p->visit_children(this);
      fprintf(m_outputfile, "popl %%eax \n");
      fprintf(m_outputfile, "negl %%eax \n");
      fprintf(m_outputfile, "pushl %%eax \n");
    }

    // Variable and constant access
    void visitIdent(Ident* p)
    {
      p->visit_children(this);
      Symbol *s = m_st->lookup(p->m_attribute.m_scope, p->m_symname->spelling());
      fprintf(m_outputfile, "pushl %d(%%ebp) \n" , -(wordsize + s->get_offset()));
    }

    void visitBoolLit(BoolLit* p)
    {
      int value = p->m_primitive->m_data;
      fprintf(m_outputfile, "pushl $%d \n", value);
    }

    void visitCharLit(CharLit* p)
    {
      int value = p->m_primitive->m_data;
      fprintf(m_outputfile, "pushl $%d \n", value);
    }

    void visitIntLit(IntLit* p)
    {
      int value = p->m_primitive->m_data;
      fprintf(m_outputfile, "pushl $%d \n", value);
    }

    void visitNullLit(NullLit* p)
    {
      fprintf(m_outputfile, "pushl $0 \n");
    }

    void visitArrayAccess(ArrayAccess* p)
    {
      p->m_expr->accept(this); //Array index
    }

    // LHS
    void visitVariable(Variable* p)
    {
      Symbol *s = m_st->lookup(p->m_symname->spelling());
      /*int offset = -(s->get_offset() + 4);
      fprintf(m_outputfile, "popl %%eax \n");
      fprintf(m_outputfile, "movl %%eax, %d(%%ebp) \n", offset);*/
      
    }

    void visitDerefVariable(DerefVariable* p)
    {
    }

    void visitArrayElement(ArrayElement* p)
    {
    }

    // Special cases
    void visitSymName(SymName* p)
    {
    }

    void visitPrimitive(Primitive* p)
    {
    }

    // Strings
    void visitStringAssignment(StringAssignment* p)
    {
    }

    void visitStringPrimitive(StringPrimitive* p)
    {
      fprintf(m_outputfile, "pushl $%d \n", p->m_string);
    }

    void visitAbsoluteValue(AbsoluteValue* p)
    {
    }

    // Pointer
    void visitAddressOf(AddressOf* p)
    {
    }

    void visitDeref(Deref* p)
    {
    }
};


void dopass_codegen(Program_ptr ast, SymTab* st)
{
    Codegen* codegen = new Codegen(stdout, st);
    ast->accept(codegen);
    delete codegen;
}
