/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.ypp" /* yacc.c:339  */

    #include <cstdio>
    #include <cstdlib>

    #include "ast.hpp"
    #include "primitive.hpp"
    #include "symtab.hpp"

    #define YYDEBUG 1

    extern Program_ptr ast;
    int yylex(void);
    void yyerror(const char *);

#line 81 "parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_Bool = 258,
    T_Char = 259,
    T_Int = 260,
    T_Str = 261,
    T_String = 262,
    T_Intptr = 263,
    T_Charptr = 264,
    T_If = 265,
    T_Else = 266,
    T_While = 267,
    T_Var = 268,
    T_Proc = 269,
    T_Return = 270,
    T_True = 271,
    T_False = 272,
    T_Null = 273,
    T_Semicolon = 274,
    T_Colon = 275,
    T_Lcurly = 276,
    T_Rcurly = 277,
    T_Lparen = 278,
    T_Rparen = 279,
    T_Lbracket = 280,
    T_Rbracket = 281,
    T_Num = 282,
    T_Stringtype = 283,
    T_Chartype = 284,
    T_Identifier = 285,
    T_Comma = 286,
    T_Assignment = 287,
    T_Or = 288,
    T_And = 289,
    T_Equals = 290,
    T_NE = 291,
    T_GT = 292,
    T_GTE = 293,
    T_LT = 294,
    T_LTE = 295,
    T_Plus = 296,
    T_Minus = 297,
    T_Times = 298,
    T_Divide = 299,
    T_Not = 300,
    T_Address = 301,
    T_Dereference = 302
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 180 "parser.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   349

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  156

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    48,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    99,    99,   103,   105,   108,   111,   115,   116,   119,
     120,   123,   124,   125,   126,   127,   131,   132,   133,   134,
     135,   136,   141,   146,   152,   155,   159,   161,   165,   166,
     167,   168,   170,   173,   175,   179,   181,   192,   196,   198,
     201,   203,   218,   220,   224,   228,   234,   236,   238,   244,
     245,   246,   247,   248,   249,   250,   251,   253,   254,   256,
     257,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   277
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Bool", "T_Char", "T_Int", "T_Str",
  "T_String", "T_Intptr", "T_Charptr", "T_If", "T_Else", "T_While",
  "T_Var", "T_Proc", "T_Return", "T_True", "T_False", "T_Null",
  "T_Semicolon", "T_Colon", "T_Lcurly", "T_Rcurly", "T_Lparen", "T_Rparen",
  "T_Lbracket", "T_Rbracket", "T_Num", "T_Stringtype", "T_Chartype",
  "T_Identifier", "T_Comma", "T_Assignment", "T_Or", "T_And", "T_Equals",
  "T_NE", "T_GT", "T_GTE", "T_LT", "T_LTE", "T_Plus", "T_Minus", "T_Times",
  "T_Divide", "T_Not", "T_Address", "T_Dereference", "'|'", "$accept",
  "Start", "Procedure", "ParamList", "MoreParams", "MoreTypes",
  "returnType", "Type", "BodyReturn", "Return", "VarDec", "MoreVars",
  "StatementP", "Statement", "Assignment", "FuncCall", "FuncExpr",
  "MoreExpr", "IfWithElse", "While", "CodeBlock", "LHS", "UnaryExpr",
  "Expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   124
};
# endif

#define YYPACT_NINF -91

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-91)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      14,     0,    42,   -91,    20,   -91,    27,    13,    35,    30,
      41,    64,    13,   210,    28,   -91,   -91,   -91,   -91,    56,
     -91,   -91,   -10,   -91,   -91,   -91,   -91,   -91,    62,    59,
      27,   -91,   -91,    14,    61,   -91,    78,    76,   -91,    69,
      -6,    14,    77,    84,    86,    78,    85,    89,    -6,   101,
     -91,   -91,   -91,   -91,   -91,    90,   -91,    91,   100,    55,
      55,    -6,    55,   -91,   -91,    55,   -91,    47,    77,   210,
     -91,   -91,   -91,    55,   -91,   -91,    99,    55,    55,    88,
     -22,    55,    55,   -91,   146,   167,   105,   228,   112,   109,
     -13,   125,   -91,   113,   188,    55,    -4,    -4,    55,    96,
     -91,   -91,   -91,   259,   115,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,   115,   -91,   -91,
     -91,   -91,    55,   -91,    78,   -91,   247,   209,   -91,   128,
     286,   296,   305,   134,   154,   195,   215,    25,    -4,    -4,
     -91,   -91,   -91,   116,   275,   -91,   -91,   -91,   115,   138,
      55,   -91,   -91,   -91,   275,   -91
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     2,     0,     1,     6,     8,     0,     0,
       0,     0,     8,     0,     0,     7,    20,    17,    16,     0,
      19,    18,     6,    15,    12,    11,    14,    13,     0,     0,
       6,    10,     5,     4,     0,     9,    25,     0,    21,     0,
      34,     4,    27,     0,     0,    25,    46,     0,    34,     0,
      28,    29,    32,    30,    31,     0,     3,     0,     0,     0,
       0,    34,     0,    48,    33,     0,    22,     0,    27,     0,
      52,    53,    60,     0,    51,    54,    55,     0,     0,     0,
       0,     0,     0,    76,     0,     0,     0,     0,     0,     0,
      55,     0,    26,     0,     0,     0,    50,    49,     0,     0,
      57,    59,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    45,    47,
      23,    36,    39,    35,    25,    73,     0,     0,    75,    42,
      71,    72,    65,    70,    68,    69,    66,    67,    61,    62,
      63,    64,    44,     0,    41,    24,    56,    74,     0,     0,
       0,    38,    43,    37,    41,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -91,   -91,    -7,   -11,   187,   -91,   -91,   148,   -91,   -91,
     -44,   152,   -91,   -32,   -91,   -91,   -91,    87,   -91,   -91,
     -90,   160,   -76,   -60
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,    10,    32,    28,    22,    37,    66,
      40,    58,    48,    49,    50,    51,   143,   151,    52,    53,
      54,    55,    83,    84
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      85,    61,    87,   100,    43,    88,    44,    91,    46,    30,
     122,    31,    95,    94,   129,    45,    64,    96,    97,    35,
       7,   102,   103,   100,    46,    47,    36,   142,     1,    86,
       4,    23,    24,    25,    56,   126,    26,    27,   127,   115,
     116,    47,     5,     6,     9,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,     7,   152,    11,
      12,    13,   144,    70,    71,    72,   113,   114,   115,   116,
      73,    70,    71,    72,    74,    89,    75,    90,    73,    14,
     145,    29,    74,    33,    75,    76,    34,    38,    77,    78,
     154,    39,    79,    80,    81,    82,    77,    78,    41,    42,
      79,    80,    81,    82,    70,    71,    72,    59,    57,    60,
      62,    98,    70,    71,    72,    74,    65,    75,    76,    63,
      69,    68,    67,    74,    95,    75,    76,   118,   121,    77,
      78,   120,   124,    99,    80,    81,    45,    77,    78,   148,
     149,    99,    80,    81,   123,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   153,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     104,   109,   110,   111,   112,   113,   114,   115,   116,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   110,   111,   112,   113,   114,   115,   116,    15,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   125,    16,    17,    18,    19,    93,    20,    21,
      92,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   147,   111,   112,   113,   114,   115,   116,
     101,   155,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   119,   112,   113,   114,   115,   116,
       0,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   146,     0,     0,     0,     0,     0,     0,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,     0,     0,   150,   128,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   108,   109,   110,   111,   112,   113,   114,   115,   116
};

static const yytype_int16 yycheck[] =
{
      60,    45,    62,    79,    10,    65,    12,    67,    30,    19,
      23,    22,    25,    73,   104,    21,    48,    77,    78,    30,
      30,    81,    82,    99,    30,    47,    33,   117,    14,    61,
      30,     3,     4,     5,    41,    95,     8,     9,    98,    43,
      44,    47,     0,    23,    31,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    30,   148,    24,
      30,    20,   122,    16,    17,    18,    41,    42,    43,    44,
      23,    16,    17,    18,    27,    28,    29,    30,    23,    15,
     124,    25,    27,    21,    29,    30,    27,    26,    41,    42,
     150,    13,    45,    46,    47,    48,    41,    42,    22,    30,
      45,    46,    47,    48,    16,    17,    18,    23,    31,    23,
      25,    23,    16,    17,    18,    27,    15,    29,    30,    30,
      20,    30,    32,    27,    25,    29,    30,    22,    19,    41,
      42,    19,    19,    45,    46,    47,    21,    41,    42,    11,
      24,    45,    46,    47,    19,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    19,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      24,    37,    38,    39,    40,    41,    42,    43,    44,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    24,    38,    39,    40,    41,    42,    43,    44,    12,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    24,     3,     4,     5,     6,    69,     8,     9,
      68,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    24,    39,    40,    41,    42,    43,    44,
      80,   154,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    26,    40,    41,    42,    43,    44,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    31,    48,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    50,    51,    30,     0,    23,    30,    52,    31,
      53,    24,    30,    20,    15,    53,     3,     4,     5,     6,
       8,     9,    56,     3,     4,     5,     8,     9,    55,    25,
      19,    52,    54,    21,    27,    52,    51,    57,    26,    13,
      59,    22,    30,    10,    12,    21,    30,    47,    61,    62,
      63,    64,    67,    68,    69,    70,    51,    31,    60,    23,
      23,    59,    25,    30,    62,    15,    58,    32,    30,    20,
      16,    17,    18,    23,    27,    29,    30,    41,    42,    45,
      46,    47,    48,    71,    72,    72,    62,    72,    72,    28,
      30,    72,    60,    56,    72,    25,    72,    72,    23,    45,
      71,    70,    72,    72,    24,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    24,    22,    26,
      19,    19,    23,    19,    19,    24,    72,    72,    48,    69,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    69,    65,    72,    59,    26,    24,    11,    24,
      31,    66,    69,    19,    72,    66
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    53,    53,    54,
      54,    55,    55,    55,    55,    55,    56,    56,    56,    56,
      56,    56,    57,    58,    59,    59,    60,    60,    61,    61,
      61,    61,    61,    62,    62,    63,    63,    64,    65,    65,
      66,    66,    67,    67,    68,    69,    70,    70,    70,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,    11,     0,     5,     0,     3,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     3,     7,     0,     3,     0,     1,     1,
       1,     1,     1,     2,     0,     4,     4,     7,     2,     0,
       3,     0,     5,     7,     5,     4,     1,     4,     2,     2,
       2,     1,     1,     1,     1,     1,     4,     2,     2,     2,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 100 "parser.ypp" /* yacc.c:1646  */
    { ast = new ProgramImpl((yyvsp[0]).u_proc_list);}
#line 1403 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 104 "parser.ypp" /* yacc.c:1646  */
    {(yyvsp[0]).u_proc_list->push_front(new ProcImpl(new SymName((yyvsp[-9]).u_base_charptr), (yyvsp[-7]).u_decl_list, (yyvsp[-4]).u_type, (yyvsp[-2]).u_procedure_block)); (yyval) = (yyvsp[0]);}
#line 1409 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 105 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_proc_list = new std::list<Proc_ptr>();}
#line 1415 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 109 "parser.ypp" /* yacc.c:1646  */
    {(yyvsp[-3]).u_symname_list->push_front(new SymName((yyvsp[-4]).u_base_charptr));
	      (yyvsp[0]).u_decl_list->push_front(new DeclImpl((yyvsp[-3]).u_symname_list, (yyvsp[-1]).u_type)); (yyval) = (yyvsp[0]);}
#line 1422 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 111 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_decl_list = new std::list<Decl_ptr> ();}
#line 1428 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 115 "parser.ypp" /* yacc.c:1646  */
    {(yyvsp[0]).u_symname_list->push_front(new SymName((yyvsp[-1]).u_base_charptr)); (yyval)=(yyvsp[0]);}
#line 1434 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 116 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_symname_list = new std::list<SymName_ptr> ();}
#line 1440 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 119 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1446 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 120 "parser.ypp" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1452 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 123 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_type = new TInteger();}
#line 1458 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 124 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_type = new TCharacter();}
#line 1464 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 125 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_type = new TCharPtr();}
#line 1470 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 126 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_type = new TIntPtr();}
#line 1476 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 127 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_type = new TBoolean();}
#line 1482 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 131 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_type = new TInteger();}
#line 1488 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 132 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_type = new TCharacter();}
#line 1494 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 133 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_type = new TCharPtr();}
#line 1500 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 134 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_type = new TIntPtr();}
#line 1506 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 135 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_type = new TBoolean();}
#line 1512 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 137 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_type = new TString(new Primitive((yyvsp[-1]).u_base_int));}
#line 1518 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 142 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_procedure_block = new Procedure_blockImpl((yyvsp[-3]).u_proc_list, (yyvsp[-2]).u_decl_list, (yyvsp[-1]).u_stat_list, (yyvsp[0]).u_return_stat);}
#line 1524 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 147 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_return_stat = new Return((yyvsp[-1]).u_expr);}
#line 1530 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 153 "parser.ypp" /* yacc.c:1646  */
    {(yyvsp[-4]).u_symname_list->push_front(new SymName((yyvsp[-5]).u_base_charptr));
 	    (yyvsp[0]).u_decl_list->push_front(new DeclImpl((yyvsp[-4]).u_symname_list, (yyvsp[-2]).u_type)); (yyval) = (yyvsp[0]);}
#line 1537 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 155 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_decl_list = new std::list<Decl_ptr> ();}
#line 1543 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 160 "parser.ypp" /* yacc.c:1646  */
    {(yyvsp[0]).u_symname_list->push_front(new SymName((yyvsp[-1]).u_base_charptr)); (yyval)=(yyvsp[0]); }
#line 1549 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 161 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_symname_list = new std::list<SymName_ptr> ();}
#line 1555 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 165 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_stat = (yyvsp[0]).u_stat;}
#line 1561 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 166 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_stat = (yyvsp[0]).u_stat;}
#line 1567 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 167 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_stat = (yyvsp[0]).u_stat;}
#line 1573 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 168 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_stat = (yyvsp[0]).u_stat;}
#line 1579 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 170 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_stat = (yyvsp[0]).u_stat;}
#line 1585 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 174 "parser.ypp" /* yacc.c:1646  */
    {(yyvsp[0]).u_stat_list->push_front((yyvsp[-1]).u_stat); (yyval).u_stat_list = (yyvsp[0]).u_stat_list;}
#line 1591 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 175 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_stat_list = new std::list<Stat_ptr> ();}
#line 1597 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 180 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_stat = new Assignment((yyvsp[-3]).u_lhs, (yyvsp[-1]).u_expr);}
#line 1603 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 182 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_stat = new StringAssignment((yyvsp[-3]).u_lhs, new StringPrimitive((yyvsp[-1]).u_base_charptr));}
#line 1609 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 193 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_stat = new Call((yyvsp[-6]).u_lhs, new SymName((yyvsp[-4]).u_base_charptr), (yyvsp[-2]).u_expr_list);}
#line 1615 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 197 "parser.ypp" /* yacc.c:1646  */
    {(yyvsp[0]).u_expr_list->push_front((yyvsp[-1]).u_expr); (yyval).u_expr_list = (yyvsp[0]).u_expr_list;}
#line 1621 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 198 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr_list = new std::list<Expr_ptr>();}
#line 1627 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 202 "parser.ypp" /* yacc.c:1646  */
    {(yyvsp[0]).u_expr_list->push_front((yyvsp[-1]).u_expr); (yyval).u_expr_list = (yyvsp[0]).u_expr_list;}
#line 1633 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 203 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr_list = new std::list<Expr_ptr>();}
#line 1639 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 219 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_stat = new IfNoElse((yyvsp[-2]).u_expr, (yyvsp[0]).u_nested_block);}
#line 1645 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 221 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_stat = new IfWithElse((yyvsp[-4]).u_expr, (yyvsp[-2]).u_nested_block, (yyvsp[0]).u_nested_block);}
#line 1651 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 225 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_stat = new WhileLoop((yyvsp[-2]).u_expr, (yyvsp[0]).u_nested_block);}
#line 1657 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 229 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_stat = new CodeBlock(new Nested_blockImpl((yyvsp[-2]).u_decl_list, (yyvsp[-1]).u_stat_list));}
#line 1663 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 235 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_lhs = new Variable(new SymName((yyvsp[0]).u_base_charptr));}
#line 1669 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 237 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_lhs = new ArrayElement(new SymName((yyvsp[-3]).u_base_charptr), (yyvsp[-1]).u_expr);}
#line 1675 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 239 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_lhs = new DerefVariable(new SymName((yyvsp[0]).u_base_charptr));}
#line 1681 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 244 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new Uminus((yyvsp[0]).u_expr);}
#line 1687 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 245 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = (yyvsp[0]).u_expr;}
#line 1693 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 246 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new IntLit(new Primitive((yyvsp[0]).u_base_int));}
#line 1699 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 247 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new BoolLit(new Primitive((yyvsp[0]).u_base_int));}
#line 1705 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 248 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new BoolLit(new Primitive((yyvsp[0]).u_base_int));}
#line 1711 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 249 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new CharLit(new Primitive((yyvsp[0]).u_base_int));}
#line 1717 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 250 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new Ident(new SymName((yyvsp[0]).u_base_charptr));}
#line 1723 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 252 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new ArrayAccess(new SymName((yyvsp[-3]).u_base_charptr), (yyvsp[-1]).u_expr);}
#line 1729 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 253 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new Not((yyvsp[0]).u_expr);}
#line 1735 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 255 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new Deref((yyvsp[0]).u_expr);}
#line 1741 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 256 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new AddressOf((yyvsp[0]).u_lhs);}
#line 1747 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 257 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new IntLit(new Primitive((yyvsp[0]).u_base_int));}
#line 1753 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 261 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new Plus((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);}
#line 1759 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 262 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new Minus((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);}
#line 1765 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 263 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new Times((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);}
#line 1771 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 264 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new Div((yyvsp[-2]).u_expr,(yyvsp[0]).u_expr);}
#line 1777 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 265 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new Compare((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);}
#line 1783 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 266 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new Lt((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);}
#line 1789 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 267 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new Lteq((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);}
#line 1795 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 268 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new Gt((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);}
#line 1801 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 269 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new Gteq((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);}
#line 1807 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 270 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new Noteq((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);}
#line 1813 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 271 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new Or((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);}
#line 1819 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 272 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new And((yyvsp[-2]).u_expr, (yyvsp[0]).u_expr);}
#line 1825 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 273 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = (yyvsp[-1]).u_expr;}
#line 1831 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 274 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new Not((yyvsp[-1]).u_expr);}
#line 1837 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 275 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = new AbsoluteValue((yyvsp[-1]).u_expr);}
#line 1843 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 277 "parser.ypp" /* yacc.c:1646  */
    {(yyval).u_expr = (yyvsp[0]).u_expr;}
#line 1849 "parser.cpp" /* yacc.c:1646  */
    break;


#line 1853 "parser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 306 "parser.ypp" /* yacc.c:1906  */


/** You shall not pass!
 *  You should not  have to do or edit anything past this.
 */

extern int yylineno;

void yyerror(const char *s)
{
    fprintf(stderr, "%s at line %d\n", s, yylineno);
    return;
}
