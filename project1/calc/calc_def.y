
%{
	#include <stdio.h>
	int yylex(void);
	void yyerror(char *);
%}


%%

/*List : Expr ListP {printf("parsed expression\n");}
     ;

ListP : '.' Expr ListP  {printf("parsed expression\n");}
      | '.'
      ;*/

List : Expr '.' ListP {printf("parsed expression\n");}
     ;

ListP : Expr '.' ListP {printf("parsed expression\n");}
      |
      ;

Expr : Term ExprP
     ;

ExprP : '+' Term ExprP
      | '-' Term ExprP
      | 
      ;

Term : Fact TermP
     ;

TermP : '*' Fact TermP
      | '%' Fact TermP
      |
      ;

Fact : 'n'
     | '(' Expr ')'
     ;

 /*List    : List Expr '.' {printf("parsed expresion\n");}
	| Expr '.' {printf("parsed expresion\n");}
        ;

Expr    : Expr '*' Expr 
        | Expr '+' Expr 
        | Expr '-' Expr
        | Expr '%' Expr
        | 'n'
        | '(' Expr ')'
        ;
 */
%%

void yyerror(char *s) {
	fprintf(stderr, "%s\n", s);
	return;
}

int main(void) {
	yyparse();
	return 0;
}
