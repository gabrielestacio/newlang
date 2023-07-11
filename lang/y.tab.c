/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

/*
  (1) Estrutura sintática:
    (A) Introdução e detecção de erros léxicos e sintáticos;
    (B) Como o programa/estrutura pode ser derivado das regras sintáticas?
    (C) Gerar fontes que incluam instruções que originam conflito shift-reduce. Ações corretas?

  (2) Variáveis:
    (A) Variáveis omitidas - detectar erros;
    (B) Variáveis duplicadas no mesmo escopo - detectar erros;
    (C) Variáveis duplicadas em escopos distintos e não-aninhados - testar acessos;
    (D) Variáveis duplicadas em escopos distintos e aninhados - testar acessos.
 
  (3) Expressões:
    (A) Identificar e testar coerções permitidas. Mostrar operações para compatibilização de tipos.
    (B) Misturar tipos incompatíveis e testar detecção de erros.
 
  (4) Passagem de parâmetros:
    (A) Corretamente transmitidos ao subprograma chamado?
    (B) Alterados/inalterados corretamente após retorno do subprograma chamado?
*/

/*
REGRAS PRA LER E IMPRIMIR
*/

#define SYMBOLS create_table()

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "record.h"
#include "hash_table.h"

int yylex(void);
int yyerror(char *s);
int yywrap();
extern int yylineno;
extern char * yytext;
extern FILE * yyin, * yyout;
//hash_table * SYMBOLS = create_table();

char * cat(char *, char *, char *, char *, char *);
char * convert(char * type);


#line 118 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    ID = 258,
    INT = 259,
    REAL = 260,
    BOOLEAN = 261,
    CHAR = 262,
    STRING = 263,
    VOID = 264,
    TYPE = 265,
    PRINT = 266,
    READ = 267,
    NULO = 268,
    CONSTANT = 269,
    MAIN_FUN = 270,
    FUNCTION = 271,
    FOR = 272,
    WHILE = 273,
    IF = 274,
    ELSE_IF = 275,
    ELSE = 276,
    SWITCH = 277,
    CASE = 278,
    DEFAULT = 279,
    BREAK = 280,
    RETURN = 281,
    PLUS_ASSIGN = 282,
    MINUS_ASSIGN = 283,
    DIV_ASSIGN = 284,
    TIMES_ASSIGN = 285,
    DOUBLE_PLUS = 286,
    DOUBLE_MINUS = 287,
    POWER = 288,
    AND = 289,
    OR = 290,
    EOR = 291,
    EQUAL = 292,
    NOT_EQUAL = 293,
    EQ_GREATER = 294,
    EQ_SMALLER = 295
  };
#endif
/* Tokens.  */
#define ID 258
#define INT 259
#define REAL 260
#define BOOLEAN 261
#define CHAR 262
#define STRING 263
#define VOID 264
#define TYPE 265
#define PRINT 266
#define READ 267
#define NULO 268
#define CONSTANT 269
#define MAIN_FUN 270
#define FUNCTION 271
#define FOR 272
#define WHILE 273
#define IF 274
#define ELSE_IF 275
#define ELSE 276
#define SWITCH 277
#define CASE 278
#define DEFAULT 279
#define BREAK 280
#define RETURN 281
#define PLUS_ASSIGN 282
#define MINUS_ASSIGN 283
#define DIV_ASSIGN 284
#define TIMES_ASSIGN 285
#define DOUBLE_PLUS 286
#define DOUBLE_MINUS 287
#define POWER 288
#define AND 289
#define OR 290
#define EOR 291
#define EQUAL 292
#define NOT_EQUAL 293
#define EQ_GREATER 294
#define EQ_SMALLER 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 49 "parser.y"

	char * sValue; 
	struct record * rec;

#line 255 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   235

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  137
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  222

#define YYUNDEFTOK  2
#define YYMAXUTOK   295


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,     2,     2,    50,     2,     2,
      51,    52,    48,    46,    42,    47,     2,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,    41,
      57,    43,    56,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,     2,    54,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    77,    77,    80,    84,    88,    95,   102,   112,   113,
     120,   121,   128,   135,   136,   137,   140,   141,   146,   150,
     157,   173,   176,   177,   180,   197,   200,   201,   202,   205,
     210,   213,   217,   218,   219,   220,   227,   229,   231,   233,
     235,   237,   240,   242,   245,   253,   254,   257,   258,   265,
     267,   268,   271,   272,   275,   276,   283,   290,   293,   301,
     307,   309,   312,   315,   323,   324,   327,   328,   335,   344,
     350,   351,   352,   357,   360,   364,   371,   372,   373,   374,
     375,   376,   377,   380,   400,   405,   408,   409,   410,   411,
     412,   415,   416,   424,   425,   431,   435,   438,   457,   458,
     459,   460,   461,   462,   465,   466,   467,   471,   477,   478,
     485,   505,   508,   509,   512,   519,   526,   527,   532,   535,
     542,   548,   556,   562,   563,   570,   577,   578,   581,   587,
     588,   591,   598,   605,   611,   619,   636,   657
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INT", "REAL", "BOOLEAN", "CHAR",
  "STRING", "VOID", "TYPE", "PRINT", "READ", "NULO", "CONSTANT",
  "MAIN_FUN", "FUNCTION", "FOR", "WHILE", "IF", "ELSE_IF", "ELSE",
  "SWITCH", "CASE", "DEFAULT", "BREAK", "RETURN", "PLUS_ASSIGN",
  "MINUS_ASSIGN", "DIV_ASSIGN", "TIMES_ASSIGN", "DOUBLE_PLUS",
  "DOUBLE_MINUS", "POWER", "AND", "OR", "EOR", "EQUAL", "NOT_EQUAL",
  "EQ_GREATER", "EQ_SMALLER", "';'", "','", "'='", "'['", "']'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'('", "')'", "'{'", "'}'", "'!'", "'>'",
  "'<'", "':'", "$accept", "program", "declarations_list", "declaration",
  "id_list", "id_declaration", "id", "dimensions", "dimensions_novalue",
  "dimensions_value", "expression", "expression_operator", "term",
  "term_operator", "factor", "base", "literal", "id_value",
  "function_call", "arguments", "arguments_list", "argument",
  "double_sign", "subprograms_section", "subprogram", "header",
  "signature", "subprogram_type", "subprogram_main", "subprogram_id",
  "parameters", "parameter_list", "parameter", "block", "body",
  "statement_list", "statement", "assignment", "assignment_operation",
  "assignment_sign", "evaluation", "comparation", "comparison", "compare",
  "evaluation_operator", "logic_operator", "print", "print_content",
  "read", "conditional", "if_else", "if", "else_section", "else_if",
  "else", "switch_case", "switch", "case_section", "case",
  "default_section", "default", "loop", "while", "for", "for_structure",
  "for_expression", "for_assignment", "return", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,    59,    44,    61,    91,    93,    43,    45,    42,    47,
      37,    40,    41,   123,   125,    33,    62,    60,    58
};
# endif

#define YYPACT_NINF (-117)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-43)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      42,     9,    29,    61,    50,    32,    23,  -117,    32,    39,
      46,  -117,    52,    38,     9,  -117,  -117,  -117,  -117,    97,
      86,  -117,  -117,    70,  -117,   117,  -117,     4,  -117,  -117,
    -117,     9,    28,  -117,  -117,    89,    60,  -117,    90,    93,
     106,    12,   112,   115,  -117,    28,    43,   155,    67,  -117,
     107,  -117,  -117,  -117,  -117,  -117,    54,  -117,   108,  -117,
    -117,  -117,  -117,   119,   118,  -117,   -22,  -117,  -117,  -117,
    -117,  -117,  -117,    28,    55,    78,    48,  -117,   135,  -117,
      76,  -117,   157,  -117,    28,     7,    37,    39,    28,    98,
     134,    39,   111,  -117,  -117,    12,   172,    78,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,    28,  -117,
      43,   126,    39,  -117,    54,  -117,   156,   144,   133,  -117,
     110,    -9,  -117,  -117,    28,  -117,  -117,  -117,    28,    28,
    -117,     9,   137,  -117,   158,    36,   145,   147,  -117,     9,
     159,   152,   164,  -117,   113,   154,  -117,  -117,  -117,  -117,
    -117,  -117,  -117,    28,  -117,  -117,  -117,  -117,    12,   161,
    -117,   162,    78,  -117,    12,  -117,  -117,   188,   183,   156,
     204,  -117,  -117,  -117,  -117,   163,  -117,   167,  -117,    78,
    -117,  -117,  -117,  -117,   157,    28,  -117,  -117,   174,    28,
    -117,    12,  -117,    78,  -117,    39,  -117,   166,   165,   168,
     170,  -117,  -117,  -117,   110,  -117,  -117,    28,    78,   169,
    -117,    39,   117,   117,  -117,  -117,    78,     9,  -117,  -117,
    -117,  -117
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     3,    54,     0,
      13,     6,     8,    10,     0,    61,    60,    62,    57,     0,
       0,     1,     2,     4,    55,    70,    56,     0,    12,    14,
      15,     0,     0,     7,    63,     0,     0,     5,     0,     0,
       0,     0,     0,     0,    82,     0,    71,     0,     0,    73,
       0,    76,    77,    79,    78,   112,   116,   113,     0,    80,
     129,   130,    81,     0,    16,     9,    13,    36,    37,    38,
      39,    40,    41,     0,    33,    11,    21,    25,    30,    32,
      34,    43,    64,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    93,    96,     0,     0,   137,    72,    87,
      88,    89,    90,    52,    53,    86,    85,    83,     0,    69,
      74,     0,     0,   114,   116,   118,     0,    18,     0,    17,
      45,     0,    22,    23,     0,    26,    27,    28,     0,     0,
      35,     0,     0,    65,    66,   108,     0,     0,   111,     0,
       0,     0,     0,   132,     0,     0,    94,    98,    99,   102,
     103,   100,   101,     0,   131,   104,   105,   106,     0,     0,
      42,     0,    84,    75,     0,   120,   117,     0,   126,   123,
       0,    19,    49,    50,    51,     0,    46,    47,    31,    20,
      24,    29,    68,    58,     0,     0,   107,   110,     0,     0,
     133,     0,    95,    97,    92,     0,   122,     0,     0,     0,
       0,   127,   124,    44,     0,    67,   109,     0,   135,     0,
     115,     0,    70,    70,   121,    48,   136,     0,   119,   125,
     128,   134
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -117,  -117,    21,  -117,    -3,  -115,    -1,  -117,   171,   102,
     -31,  -117,  -117,  -117,    27,  -117,  -116,   124,  -113,  -117,
      17,  -117,   142,    18,  -117,  -117,  -117,  -117,  -117,  -117,
    -117,    41,  -117,   -85,   -80,   -37,  -117,    10,  -117,  -117,
     -92,  -117,   139,   141,  -117,  -117,  -117,    45,  -117,  -117,
    -117,  -117,   120,  -117,  -117,  -117,  -117,    62,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,    46,     6,    11,    12,    74,    28,    29,    30,
      90,   124,    76,   128,    77,    78,    79,    80,    81,   175,
     176,   177,   106,     7,     8,     9,    18,    19,    20,    35,
     132,   133,   134,    26,    48,    49,    50,    51,   107,   108,
      91,    92,    93,    94,   153,   158,    52,   136,    53,    54,
      55,    56,   113,   114,   115,    57,    58,   168,   169,   200,
     201,    59,    60,    61,    87,   141,   142,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    75,   143,   159,   173,   172,   154,   174,    63,    98,
     137,    33,    10,    13,    97,    66,    67,    68,    69,    70,
      71,     5,    27,    22,    47,    72,    24,   165,    65,   120,
      13,    66,    67,    68,    69,    70,    71,   122,   123,    14,
      10,    72,   121,   178,    37,    47,    10,   139,     3,    64,
      21,   198,     1,   135,    38,    39,     2,   144,     3,   138,
      40,    41,    42,    88,    23,    43,   194,    89,    44,    45,
      15,    16,   197,   163,   111,   112,    17,   162,   185,    73,
       1,    32,   122,   123,     2,   140,   -42,   -42,   173,   172,
      27,   174,    25,   179,    31,   160,   125,   126,   127,   209,
      34,    66,    67,    68,    69,    70,    71,   103,   104,    47,
     210,    72,    83,    66,    67,    68,    69,    70,    71,    13,
      10,   109,   193,    72,   122,   123,   218,     1,    38,    39,
     182,     2,   219,   220,    40,    41,    42,    36,   188,    43,
      82,    84,    44,    45,    85,   155,   156,   157,   110,    88,
     147,   148,   149,   150,   135,   180,   181,    86,   208,   122,
     123,   116,   118,    95,   117,   178,    96,   131,   129,   151,
     152,   147,   148,   149,   150,    66,   216,   164,    64,   167,
     122,   123,    99,   100,   101,   102,   103,   104,   170,   183,
     151,   152,    67,    68,    69,    70,    71,   186,   105,   187,
     184,    72,   189,    13,   190,   191,   192,   199,    63,   204,
     217,    47,    47,   195,   196,   203,    47,   207,   211,   171,
     161,   215,   130,   212,   214,   205,   213,   221,   146,   145,
     206,   202,     0,     0,   166,   119
};

static const yytype_int16 yycheck[] =
{
       1,    32,    87,    95,   120,   120,    91,   120,     4,    46,
       3,    14,     3,    14,    45,     3,     4,     5,     6,     7,
       8,     0,    44,     5,    25,    13,     8,   112,    31,    51,
      31,     3,     4,     5,     6,     7,     8,    46,    47,    10,
       3,    13,    73,    52,    23,    46,     3,    10,    16,    45,
       0,   167,    10,    84,    11,    12,    14,    88,    16,    52,
      17,    18,    19,    51,    41,    22,   158,    55,    25,    26,
       9,    10,   164,   110,    20,    21,    15,   108,    42,    51,
      10,    43,    46,    47,    14,    86,    31,    32,   204,   204,
      44,   204,    53,   124,    42,    96,    48,    49,    50,   191,
       3,     3,     4,     5,     6,     7,     8,    31,    32,   110,
     195,    13,    52,     3,     4,     5,     6,     7,     8,   120,
       3,    54,   153,    13,    46,    47,   211,    10,    11,    12,
     131,    14,   212,   213,    17,    18,    19,    51,   139,    22,
      51,    51,    25,    26,    51,    34,    35,    36,    41,    51,
      37,    38,    39,    40,   185,   128,   129,    51,   189,    46,
      47,    53,    44,    51,    45,    52,    51,    10,    33,    56,
      57,    37,    38,    39,    40,     3,   207,    51,    45,    23,
      46,    47,    27,    28,    29,    30,    31,    32,    44,    52,
      56,    57,     4,     5,     6,     7,     8,    52,    43,    52,
      42,    13,    43,   204,    52,    41,    52,    24,     4,    42,
      41,   212,   213,    52,    52,    52,   217,    43,    52,   117,
      96,   204,    80,    58,    54,   184,    58,   217,    89,    88,
     185,   169,    -1,    -1,   114,    64
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    14,    16,    60,    61,    62,    82,    83,    84,
       3,    63,    64,    65,    10,     9,    10,    15,    85,    86,
      87,     0,    82,    41,    82,    53,    92,    44,    66,    67,
      68,    42,    43,    63,     3,    88,    51,    61,    11,    12,
      17,    18,    19,    22,    25,    26,    61,    65,    93,    94,
      95,    96,   105,   107,   108,   109,   110,   114,   115,   120,
     121,   122,   126,     4,    45,    63,     3,     4,     5,     6,
       7,     8,    13,    51,    65,    69,    71,    73,    74,    75,
      76,    77,    51,    52,    51,    51,    51,   123,    51,    55,
      69,    99,   100,   101,   102,    51,    51,    69,    94,    27,
      28,    29,    30,    31,    32,    43,    81,    97,    98,    54,
      41,    20,    21,   111,   112,   113,    53,    45,    44,    67,
      51,    69,    46,    47,    70,    48,    49,    50,    72,    33,
      81,    10,    89,    90,    91,    69,   106,     3,    52,    10,
      65,   124,   125,    92,    69,   102,   101,    37,    38,    39,
      40,    56,    57,   103,    92,    34,    35,    36,   104,    99,
      65,    76,    69,    94,    51,    92,   111,    23,   116,   117,
      44,    68,    64,    75,    77,    78,    79,    80,    52,    69,
      73,    73,    65,    52,    42,    42,    52,    52,    65,    43,
      52,    41,    52,    69,    99,    52,    52,    99,    75,    24,
     118,   119,   116,    52,    42,    90,   106,    43,    69,    99,
      92,    52,    58,    58,    54,    79,    69,    41,    92,    93,
      93,    96
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    60,    60,    61,    61,    62,    62,    63,    63,
      64,    64,    65,    66,    66,    66,    67,    67,    68,    68,
      69,    69,    70,    70,    71,    71,    72,    72,    72,    73,
      73,    74,    74,    74,    74,    74,    75,    75,    75,    75,
      75,    75,    76,    76,    77,    78,    78,    79,    79,    80,
      80,    80,    81,    81,    82,    82,    83,    84,    85,    85,
      86,    86,    87,    88,    89,    89,    90,    90,    91,    92,
      93,    93,    93,    93,    94,    94,    95,    95,    95,    95,
      95,    95,    95,    96,    97,    97,    98,    98,    98,    98,
      98,    99,    99,   100,   100,   101,   101,   102,   103,   103,
     103,   103,   103,   103,   104,   104,   104,   105,   106,   106,
     107,   107,   108,   108,   109,   110,   111,   111,   111,   112,
     113,   114,   115,   116,   116,   117,   118,   118,   119,   120,
     120,   121,   122,   123,   124,   125,   125,   126
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     3,     2,     3,     1,     3,
       1,     3,     2,     0,     1,     1,     2,     3,     3,     4,
       3,     1,     1,     1,     3,     1,     1,     1,     1,     3,
       1,     3,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     0,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     5,     3,
       1,     1,     1,     1,     0,     1,     1,     3,     2,     3,
       0,     1,     2,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     2,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       4,     3,     1,     1,     2,     5,     0,     2,     1,     5,
       2,     5,     4,     1,     2,     4,     0,     1,     3,     1,
       1,     3,     3,     3,     5,     3,     4,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 77 "parser.y"
                                                {fprintf(yyout, "%s\n%s", (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code);
																								freeRecord((yyvsp[-1].rec));
																								freeRecord((yyvsp[0].rec));}
#line 1612 "y.tab.c"
    break;

  case 3:
#line 80 "parser.y"
                                                                                                                                {fprintf(yyout, "%s", (yyvsp[0].rec)->code);
																								freeRecord((yyvsp[0].rec));}
#line 1619 "y.tab.c"
    break;

  case 4:
#line 84 "parser.y"
                                                                                                                {char * s = cat((yyvsp[-1].rec)->code, ";\n", "", "", "");
																											freeRecord((yyvsp[-1].rec));
																											(yyval.rec) = createRecord(s, "");
																											free(s);}
#line 1628 "y.tab.c"
    break;

  case 5:
#line 88 "parser.y"
                                                                        {char * s = cat((yyvsp[-2].rec)->code, ";\n", (yyvsp[0].rec)->code, "", "");
																											freeRecord((yyvsp[-2].rec));
																											freeRecord((yyvsp[0].rec));
																											(yyval.rec) = createRecord(s, "");
																											free(s);}
#line 1638 "y.tab.c"
    break;

  case 6:
#line 95 "parser.y"
                                                                        {char * s = cat(convert((yyvsp[-1].sValue)), " ", (yyvsp[0].rec)->code, "", "");
																		record * rec = createRecord((yyvsp[0].rec)->code, (yyvsp[-1].sValue));
																		(yyval.rec) = createRecord(s, (yyvsp[-1].sValue));
																		insert_record(SYMBOLS, rec);
																		freeRecord((yyvsp[0].rec));
																		free((yyvsp[-1].sValue));
																		free(s);}
#line 1650 "y.tab.c"
    break;

  case 7:
#line 102 "parser.y"
                                                                {char * s = cat("const ", convert((yyvsp[-1].sValue)), " ", (yyvsp[0].rec)->code, "");
																		record * rec = createRecord((yyvsp[0].rec)->code, (yyvsp[-1].sValue));
																		insert_record(SYMBOLS, rec);
																		(yyval.rec) = createRecord(s, (yyvsp[-1].sValue));
																		freeRecord((yyvsp[0].rec));
																		free((yyvsp[-1].sValue));
																		free(s);}
#line 1662 "y.tab.c"
    break;

  case 8:
#line 112 "parser.y"
                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1668 "y.tab.c"
    break;

  case 9:
#line 113 "parser.y"
                                                {char * s = cat((yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, "", "");
																			freeRecord((yyvsp[-2].rec));
																			freeRecord((yyvsp[0].rec));
																			(yyval.rec) = createRecord(s, "");
																			free(s);}
#line 1678 "y.tab.c"
    break;

  case 10:
#line 120 "parser.y"
                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1684 "y.tab.c"
    break;

  case 11:
#line 121 "parser.y"
                                                                                {char * s = cat((yyvsp[-2].rec)->code, "=", (yyvsp[0].rec)->code, "", "");
																		freeRecord((yyvsp[-2].rec));
																		freeRecord((yyvsp[0].rec));
																		(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
																		free(s);}
#line 1694 "y.tab.c"
    break;

  case 12:
#line 128 "parser.y"
                        {char * s = cat((yyvsp[-1].sValue), " ", (yyvsp[0].rec)->code, "", "");
										free((yyvsp[-1].sValue));
										freeRecord((yyvsp[0].rec));
										(yyval.rec) = createRecord(s, "");
										free(s);}
#line 1704 "y.tab.c"
    break;

  case 13:
#line 135 "parser.y"
                {(yyval.rec) = createRecord("","");}
#line 1710 "y.tab.c"
    break;

  case 14:
#line 136 "parser.y"
                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1716 "y.tab.c"
    break;

  case 15:
#line 137 "parser.y"
                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1722 "y.tab.c"
    break;

  case 16:
#line 140 "parser.y"
                                                                        {(yyval.rec) = createRecord("[]", "");}
#line 1728 "y.tab.c"
    break;

  case 17:
#line 141 "parser.y"
                                                                {char * s = cat("[]", (yyvsp[0].rec)->code, "", "", "");
																					freeRecord((yyvsp[0].rec));
																					(yyval.rec) = createRecord(s, "");}
#line 1736 "y.tab.c"
    break;

  case 18:
#line 146 "parser.y"
                                                                                                        {char * s = cat("[", (yyvsp[-1].sValue), "]", "", "");
																									free((yyvsp[-1].sValue));
																									(yyval.rec) = createRecord(s, "");
																									free(s);}
#line 1745 "y.tab.c"
    break;

  case 19:
#line 150 "parser.y"
                                                                                        {char * s = cat("[", (yyvsp[-2].sValue), "]", (yyvsp[0].rec)->code, "");
																									free((yyvsp[-2].sValue));
																									freeRecord((yyvsp[0].rec));
																									(yyval.rec) = createRecord(s, "");
																									free(s);}
#line 1755 "y.tab.c"
    break;

  case 20:
#line 157 "parser.y"
                                                        {char * s = cat((yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
																												char * t;
																												if(strcmp((yyvsp[-2].rec)->type, (yyvsp[0].rec)->type) != 0){
																													if((strcmp((yyvsp[-2].rec)->type, "int") == 0 && strcmp((yyvsp[0].rec)->type, "real") == 0) || (strcmp((yyvsp[0].rec)->type, "int") == 0 && strcmp((yyvsp[-2].rec)->type, "real") == 0)){
																														t = "real";
																													} else{
																														return yyerror("Expression error: type mismatch");
																													}
																												} else{
																													t = (yyvsp[-2].rec)->type;
																												}
																												freeRecord((yyvsp[-2].rec));
																												freeRecord((yyvsp[-1].rec));
																												freeRecord((yyvsp[0].rec));
																												(yyval.rec) = createRecord(s, t);
																												free(s);}
#line 1776 "y.tab.c"
    break;

  case 21:
#line 173 "parser.y"
                                                                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1782 "y.tab.c"
    break;

  case 22:
#line 176 "parser.y"
                                {(yyval.rec) = createRecord("+", "");}
#line 1788 "y.tab.c"
    break;

  case 23:
#line 177 "parser.y"
                                                                                      {(yyval.rec) = createRecord("-", "");}
#line 1794 "y.tab.c"
    break;

  case 24:
#line 180 "parser.y"
                                        {char * s = cat((yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
																	char * t;
																	if(strcmp((yyvsp[-2].rec)->type, (yyvsp[0].rec)->type) != 0){
																		if((strcmp((yyvsp[-2].rec)->type, "int") == 0 && strcmp((yyvsp[0].rec)->type, "real") == 0) || (strcmp((yyvsp[0].rec)->type, "int") == 0 && strcmp((yyvsp[-2].rec)->type, "real") == 0)){
																			t = "real";
																		}
																		else{
																			return yyerror("Term error: type mismatch");
																		}
																	} else{
																		t = (yyvsp[-2].rec)->type;
																	}
																	freeRecord((yyvsp[-2].rec));
																	freeRecord((yyvsp[-1].rec));
																	freeRecord((yyvsp[0].rec));
																	(yyval.rec) = createRecord(s, t);
																	free(s);}
#line 1816 "y.tab.c"
    break;

  case 25:
#line 197 "parser.y"
                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1822 "y.tab.c"
    break;

  case 26:
#line 200 "parser.y"
                        {(yyval.rec) = createRecord("*", "");}
#line 1828 "y.tab.c"
    break;

  case 27:
#line 201 "parser.y"
                                                                {(yyval.rec) = createRecord("/", "");}
#line 1834 "y.tab.c"
    break;

  case 28:
#line 202 "parser.y"
                                                                {(yyval.rec) = createRecord("%", "");}
#line 1840 "y.tab.c"
    break;

  case 29:
#line 205 "parser.y"
                                {char * s = cat("pow(", (yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, ")");
														freeRecord((yyvsp[0].rec));
														(yyval.rec) = createRecord(s, (yyvsp[-2].rec)->type);
														freeRecord((yyvsp[-2].rec));
														free(s);}
#line 1850 "y.tab.c"
    break;

  case 30:
#line 210 "parser.y"
                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1856 "y.tab.c"
    break;

  case 31:
#line 213 "parser.y"
                                        {char * s = cat("(", (yyvsp[-1].rec)->code, ")", "", "");
														(yyval.rec) = createRecord(s, (yyvsp[-1].rec)->type);
														freeRecord((yyvsp[-1].rec));
														free(s);}
#line 1865 "y.tab.c"
    break;

  case 32:
#line 217 "parser.y"
                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1871 "y.tab.c"
    break;

  case 33:
#line 218 "parser.y"
                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1877 "y.tab.c"
    break;

  case 34:
#line 219 "parser.y"
                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1883 "y.tab.c"
    break;

  case 35:
#line 220 "parser.y"
                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
														freeRecord((yyvsp[0].rec));
														(yyval.rec) = createRecord(s, (yyvsp[-1].rec)->type);
														freeRecord((yyvsp[-1].rec));
														free(s);}
#line 1893 "y.tab.c"
    break;

  case 36:
#line 227 "parser.y"
                                {(yyval.rec) = createRecord((yyvsp[0].sValue), "int");
									free((yyvsp[0].sValue));}
#line 1900 "y.tab.c"
    break;

  case 37:
#line 229 "parser.y"
                                                {(yyval.rec) = createRecord((yyvsp[0].sValue), "real");
									free((yyvsp[0].sValue));}
#line 1907 "y.tab.c"
    break;

  case 38:
#line 231 "parser.y"
                                                {(yyval.rec) = createRecord((yyvsp[0].sValue), "boolean");
									free((yyvsp[0].sValue));}
#line 1914 "y.tab.c"
    break;

  case 39:
#line 233 "parser.y"
                                                {(yyval.rec) = createRecord((yyvsp[0].sValue), "char");
									free((yyvsp[0].sValue));}
#line 1921 "y.tab.c"
    break;

  case 40:
#line 235 "parser.y"
                                                {(yyval.rec) = createRecord((yyvsp[0].sValue), "string");
									free((yyvsp[0].sValue));}
#line 1928 "y.tab.c"
    break;

  case 41:
#line 237 "parser.y"
                                                {(yyval.rec) = createRecord("NULL", "null");}
#line 1934 "y.tab.c"
    break;

  case 42:
#line 240 "parser.y"
                                                        {record * rec = search_record(SYMBOLS, (yyvsp[0].rec)->code);
												(yyval.rec) = createRecord((yyvsp[0].rec)->code, rec->type);}
#line 1941 "y.tab.c"
    break;

  case 43:
#line 242 "parser.y"
                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1947 "y.tab.c"
    break;

  case 44:
#line 245 "parser.y"
                                        {char * s = cat((yyvsp[-3].sValue), "(", (yyvsp[-1].rec)->code, ")", "");
																			record * rec = search_record(SYMBOLS, (yyvsp[-3].sValue));
																			free((yyvsp[-3].sValue));
																			freeRecord((yyvsp[-1].rec));
																			(yyval.rec) = createRecord(s, rec->type);
																			free(s);}
#line 1958 "y.tab.c"
    break;

  case 45:
#line 253 "parser.y"
                                                                        {(yyval.rec) = createRecord("","");}
#line 1964 "y.tab.c"
    break;

  case 46:
#line 254 "parser.y"
                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1970 "y.tab.c"
    break;

  case 47:
#line 257 "parser.y"
                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1976 "y.tab.c"
    break;

  case 48:
#line 258 "parser.y"
                                                                                                {char * s = cat((yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, "", "");
																							freeRecord((yyvsp[0].rec));
																							freeRecord((yyvsp[-2].rec));
																							(yyval.rec) = createRecord(s, "");
																							free(s);}
#line 1986 "y.tab.c"
    break;

  case 49:
#line 265 "parser.y"
                                {record * rec = search_record(SYMBOLS, (yyvsp[0].rec)->code);
													(yyval.rec) = createRecord((yyvsp[0].rec)->code, rec->type);}
#line 1993 "y.tab.c"
    break;

  case 50:
#line 267 "parser.y"
                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1999 "y.tab.c"
    break;

  case 51:
#line 268 "parser.y"
                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2005 "y.tab.c"
    break;

  case 52:
#line 271 "parser.y"
                                {(yyval.rec) = createRecord("++", "");}
#line 2011 "y.tab.c"
    break;

  case 53:
#line 272 "parser.y"
                                                        {(yyval.rec) = createRecord("--", "");}
#line 2017 "y.tab.c"
    break;

  case 54:
#line 275 "parser.y"
                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2023 "y.tab.c"
    break;

  case 55:
#line 276 "parser.y"
                                                                                                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																											freeRecord((yyvsp[-1].rec));
																											freeRecord((yyvsp[0].rec));
																											(yyval.rec) = createRecord(s, "");
																											free(s);}
#line 2033 "y.tab.c"
    break;

  case 56:
#line 283 "parser.y"
                          {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
													freeRecord((yyvsp[-1].rec));
													(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
													freeRecord((yyvsp[0].rec));
													free(s);}
#line 2043 "y.tab.c"
    break;

  case 57:
#line 290 "parser.y"
                                {(yyval.rec) = (yyvsp[0].rec);}
#line 2049 "y.tab.c"
    break;

  case 58:
#line 293 "parser.y"
                                                                {char * s = cat((yyvsp[-4].rec)->code, (yyvsp[-3].rec)->code, "(", (yyvsp[-1].rec)->code, ")");
																															record * rec = createRecord((yyvsp[-3].rec)->code, (yyvsp[-4].rec)->type);
																															insert_record(SYMBOLS, rec);
																															(yyval.rec) = createRecord(s, (yyvsp[-4].rec)->type);
																															freeRecord((yyvsp[-3].rec));
																															freeRecord((yyvsp[-1].rec));
																															freeRecord((yyvsp[-4].rec));
																															free(s);}
#line 2062 "y.tab.c"
    break;

  case 59:
#line 301 "parser.y"
                                                                                                                                                                        {char * s = cat((yyvsp[-2].rec)->code, "()", "", "", "");
																															(yyval.rec) = createRecord(s, "void");
																															freeRecord((yyvsp[-2].rec));
																															free(s);}
#line 2071 "y.tab.c"
    break;

  case 60:
#line 307 "parser.y"
                        {(yyval.rec) = createRecord(convert((yyvsp[0].sValue)), (yyvsp[0].sValue));
												free((yyvsp[0].sValue));}
#line 2078 "y.tab.c"
    break;

  case 61:
#line 309 "parser.y"
                                                                {(yyval.rec) = createRecord("void", "void");}
#line 2084 "y.tab.c"
    break;

  case 62:
#line 312 "parser.y"
                                {(yyval.rec) = createRecord("main", "void");}
#line 2090 "y.tab.c"
    break;

  case 63:
#line 315 "parser.y"
                        {record * rec = search_record(SYMBOLS, (yyvsp[0].sValue));
										if(rec != NULL){
											(yyval.rec) = createRecord((yyvsp[0].sValue), "");
										} else {
											(yyval.rec) = createRecord((yyvsp[0].sValue), rec->type);
										}}
#line 2101 "y.tab.c"
    break;

  case 64:
#line 323 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord("","");}
#line 2107 "y.tab.c"
    break;

  case 65:
#line 324 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2113 "y.tab.c"
    break;

  case 66:
#line 327 "parser.y"
                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2119 "y.tab.c"
    break;

  case 67:
#line 328 "parser.y"
                                                                {char * s = cat((yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, "", "");
																							freeRecord((yyvsp[-2].rec));
																							freeRecord((yyvsp[0].rec));
																							(yyval.rec) = createRecord(s, "");
																							free(s);}
#line 2129 "y.tab.c"
    break;

  case 68:
#line 335 "parser.y"
                        {char * s = cat(convert((yyvsp[-1].sValue)), (yyvsp[0].rec)->code, "", "", "");
										record * rec = createRecord((yyvsp[0].rec)->code, convert((yyvsp[-1].sValue)));
										(yyval.rec) = createRecord(s, (yyvsp[-1].sValue));
										insert_record(SYMBOLS, rec);
										freeRecord((yyvsp[0].rec));
										free((yyvsp[-1].sValue));
										free(s);}
#line 2141 "y.tab.c"
    break;

  case 69:
#line 344 "parser.y"
                        {char * s = cat("{", (yyvsp[-1].rec)->code, "}", "", "");
											freeRecord((yyvsp[-1].rec));
											(yyval.rec) = createRecord(s, "");
											free(s);}
#line 2150 "y.tab.c"
    break;

  case 70:
#line 350 "parser.y"
                                                                                                                                        {(yyval.rec) = createRecord("","");}
#line 2156 "y.tab.c"
    break;

  case 71:
#line 351 "parser.y"
                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2162 "y.tab.c"
    break;

  case 72:
#line 352 "parser.y"
                                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2172 "y.tab.c"
    break;

  case 73:
#line 357 "parser.y"
                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 2178 "y.tab.c"
    break;

  case 74:
#line 360 "parser.y"
                                                                        {char * s = cat((yyvsp[-1].rec)->code, ";\n", "", "", "");
																					freeRecord((yyvsp[-1].rec));
																					(yyval.rec) = createRecord(s, "");
																					free(s);}
#line 2187 "y.tab.c"
    break;

  case 75:
#line 364 "parser.y"
                                                        {char * s = cat((yyvsp[-2].rec)->code, ";\n", (yyvsp[0].rec)->code, "", "");
																					freeRecord((yyvsp[-2].rec));
																					freeRecord((yyvsp[0].rec));
																					(yyval.rec) = createRecord(s, "");
																					free(s);}
#line 2197 "y.tab.c"
    break;

  case 76:
#line 371 "parser.y"
                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2203 "y.tab.c"
    break;

  case 77:
#line 372 "parser.y"
                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2209 "y.tab.c"
    break;

  case 78:
#line 373 "parser.y"
                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2215 "y.tab.c"
    break;

  case 79:
#line 374 "parser.y"
                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2221 "y.tab.c"
    break;

  case 80:
#line 375 "parser.y"
                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2227 "y.tab.c"
    break;

  case 81:
#line 376 "parser.y"
                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2233 "y.tab.c"
    break;

  case 82:
#line 377 "parser.y"
                                                                        {(yyval.rec) = createRecord("break", "");}
#line 2239 "y.tab.c"
    break;

  case 83:
#line 380 "parser.y"
                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																			char * t;
																			if(strcmp((yyvsp[-1].rec)->type, (yyvsp[0].rec)->type) != 0){
																				if((strcmp((yyvsp[-1].rec)->type, "int") == 0 && strcmp((yyvsp[0].rec)->type, "real") == 0) || (strcmp((yyvsp[0].rec)->type, "int") == 0 && strcmp((yyvsp[-1].rec)->type, "real") == 0)){
																					t = "real";
																				}
																				else if(strcmp((yyvsp[-1].rec)->type, "") == 0){
																					t = (yyvsp[0].rec)->type;
																				} else{
																					return yyerror("Assignment error: type mismatch");
																				}
																			} else{
																				t = (yyvsp[-1].rec)->type;
																			}
																			freeRecord((yyvsp[-1].rec));
																			freeRecord((yyvsp[0].rec));
																			(yyval.rec) = createRecord(s, t);
																			free(s);}
#line 2262 "y.tab.c"
    break;

  case 84:
#line 400 "parser.y"
                                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																									freeRecord((yyvsp[-1].rec));
																									(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
																									freeRecord((yyvsp[0].rec));
																									free(s);}
#line 2272 "y.tab.c"
    break;

  case 85:
#line 405 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 2278 "y.tab.c"
    break;

  case 86:
#line 408 "parser.y"
                        {(yyval.rec) = createRecord("=", "");}
#line 2284 "y.tab.c"
    break;

  case 87:
#line 409 "parser.y"
                                                        {(yyval.rec) = createRecord("+=", "");}
#line 2290 "y.tab.c"
    break;

  case 88:
#line 410 "parser.y"
                                                {(yyval.rec) = createRecord("-=", "");}
#line 2296 "y.tab.c"
    break;

  case 89:
#line 411 "parser.y"
                                                        {(yyval.rec) = createRecord("/=", "");}
#line 2302 "y.tab.c"
    break;

  case 90:
#line 412 "parser.y"
                                                {(yyval.rec) = createRecord("*=", "");}
#line 2308 "y.tab.c"
    break;

  case 91:
#line 415 "parser.y"
                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 2314 "y.tab.c"
    break;

  case 92:
#line 416 "parser.y"
                                                                                {char * s = cat((yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
																									(yyval.rec) = createRecord(s, (yyvsp[-2].rec)->type);
																									freeRecord((yyvsp[-2].rec));
																									freeRecord((yyvsp[-1].rec));
																									freeRecord((yyvsp[0].rec));
																									free(s);}
#line 2325 "y.tab.c"
    break;

  case 93:
#line 424 "parser.y"
                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 2331 "y.tab.c"
    break;

  case 94:
#line 425 "parser.y"
                                                                        {char * s = cat("!", (yyvsp[0].rec)->code, "", "", "");
															(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
															freeRecord((yyvsp[0].rec));
															free(s);}
#line 2340 "y.tab.c"
    break;

  case 95:
#line 431 "parser.y"
                                {char * s = cat("(", (yyvsp[-1].rec)->code, ")", "", "");
															(yyval.rec) = createRecord(s, (yyvsp[-1].rec)->type);
															freeRecord((yyvsp[-1].rec));
															free(s);}
#line 2349 "y.tab.c"
    break;

  case 96:
#line 435 "parser.y"
                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 2355 "y.tab.c"
    break;

  case 97:
#line 438 "parser.y"
                                                        {char * s = cat((yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
																										char * t;
																										if(strcmp((yyvsp[-2].rec)->type, (yyvsp[0].rec)->type) != 0){
																											if((strcmp((yyvsp[-2].rec)->type, "int") == 0 && strcmp((yyvsp[0].rec)->type, "real") == 0) || (strcmp((yyvsp[0].rec)->type, "int") == 0 && strcmp((yyvsp[-2].rec)->type, "real") == 0)){
																												t = "real";
																											}
																											else{
																												return yyerror("Compare error: type mismatch");
																											}
																										} else{
																											t = (yyvsp[-2].rec)->type;
																										}
																										freeRecord((yyvsp[-2].rec));
																										freeRecord((yyvsp[-1].rec));
																										freeRecord((yyvsp[0].rec));
																										(yyval.rec) = createRecord(s, "boolean");
																										free(s);}
#line 2377 "y.tab.c"
    break;

  case 98:
#line 457 "parser.y"
                                                        {(yyval.rec) = createRecord("==", "");}
#line 2383 "y.tab.c"
    break;

  case 99:
#line 458 "parser.y"
                                                                                                {(yyval.rec) = createRecord("!=", "");}
#line 2389 "y.tab.c"
    break;

  case 100:
#line 459 "parser.y"
                                                                                                                {(yyval.rec) = createRecord(">", "");}
#line 2395 "y.tab.c"
    break;

  case 101:
#line 460 "parser.y"
                                                                                                                        {(yyval.rec) = createRecord("<", "");}
#line 2401 "y.tab.c"
    break;

  case 102:
#line 461 "parser.y"
                                                                                                {(yyval.rec) = createRecord(">=", "");}
#line 2407 "y.tab.c"
    break;

  case 103:
#line 462 "parser.y"
                                                                                                {(yyval.rec) = createRecord("<=", "");}
#line 2413 "y.tab.c"
    break;

  case 104:
#line 465 "parser.y"
                        {(yyval.rec) = createRecord("&&", "");}
#line 2419 "y.tab.c"
    break;

  case 105:
#line 466 "parser.y"
                                                                        {(yyval.rec) = createRecord("||", "");}
#line 2425 "y.tab.c"
    break;

  case 106:
#line 467 "parser.y"
                                                                        {(yyval.rec) = createRecord("^", "");}
#line 2431 "y.tab.c"
    break;

  case 107:
#line 471 "parser.y"
                                        {char * s = cat("printf(", (yyvsp[-1].rec)->code, ")", "", "");
																		freeRecord((yyvsp[-1].rec));
																		(yyval.rec) = createRecord(s, "");
																		free(s);}
#line 2440 "y.tab.c"
    break;

  case 108:
#line 477 "parser.y"
                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2446 "y.tab.c"
    break;

  case 109:
#line 478 "parser.y"
                                                                                        {char * s = cat((yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, "", "");
																							freeRecord((yyvsp[-2].rec));
																							freeRecord((yyvsp[0].rec));
																							(yyval.rec) = createRecord(s, "");
																							free(s);}
#line 2456 "y.tab.c"
    break;

  case 110:
#line 485 "parser.y"
                        {record * rec = search_record(SYMBOLS, (yyvsp[-1].sValue));
												char * s;
												if(rec->type == "string"){
													s = cat("scanf(%s),", "&", (yyvsp[-1].sValue), "", "");
													(yyval.rec) = createRecord(s, "string");
												} else if(rec->type == "int"){
													s = cat("scanf(%d),", "&", (yyvsp[-1].sValue), "", "");
													(yyval.rec) = createRecord(s, "int");
												} else if(rec->type == "real"){
													s = cat("scanf(%f),", "&", (yyvsp[-1].sValue), "", "");
													(yyval.rec) = createRecord(s, "real");
												} else if(rec->type == "char"){
													s = cat("scanf(%c),", "&", (yyvsp[-1].sValue), "", "");
													(yyval.rec) = createRecord(s, "char");
												} else if(rec->type == "boolean"){
													s = cat("scanf(%d),", "&", (yyvsp[-1].sValue), "", ""); //Boolean deve ser passado como 0 ou outro número maior que 0 na entrada
													(yyval.rec) = createRecord(s, "boolean");
												} else{
													return yyerror("Read error");
												}}
#line 2481 "y.tab.c"
    break;

  case 111:
#line 505 "parser.y"
                                                {}
#line 2487 "y.tab.c"
    break;

  case 112:
#line 508 "parser.y"
                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2493 "y.tab.c"
    break;

  case 113:
#line 509 "parser.y"
                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 2499 "y.tab.c"
    break;

  case 114:
#line 512 "parser.y"
                          {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
													freeRecord((yyvsp[-1].rec));
													freeRecord((yyvsp[0].rec));
													(yyval.rec) = createRecord(s, "");
													free(s);}
#line 2509 "y.tab.c"
    break;

  case 115:
#line 519 "parser.y"
                                        {char * s = cat("if ", "(", (yyvsp[-2].rec)->code, ")", (yyvsp[0].rec)->code);
																	freeRecord((yyvsp[-2].rec));
																	freeRecord((yyvsp[0].rec));
																	(yyval.rec) = createRecord(s, "");
																	free(s);}
#line 2519 "y.tab.c"
    break;

  case 116:
#line 526 "parser.y"
                                                                                                {(yyval.rec) = createRecord("","");}
#line 2525 "y.tab.c"
    break;

  case 117:
#line 527 "parser.y"
                                                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																		freeRecord((yyvsp[-1].rec));
																		freeRecord((yyvsp[0].rec));
																		(yyval.rec) = createRecord(s, "");
																		free(s);}
#line 2535 "y.tab.c"
    break;

  case 118:
#line 532 "parser.y"
                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2541 "y.tab.c"
    break;

  case 119:
#line 535 "parser.y"
                                                {char * s = cat("else if ", "(", (yyvsp[-2].rec)->code, ")", (yyvsp[0].rec)->code);
																						freeRecord((yyvsp[-2].rec));
																						freeRecord((yyvsp[0].rec));
																						(yyval.rec) = createRecord(s, "");
																						free(s);}
#line 2551 "y.tab.c"
    break;

  case 120:
#line 542 "parser.y"
                        {char * s = cat("else ", (yyvsp[0].rec)->code, "", "", "");
									freeRecord((yyvsp[0].rec));
									(yyval.rec) = createRecord(s, "");
									free(s);}
#line 2560 "y.tab.c"
    break;

  case 121:
#line 548 "parser.y"
                                                                {char * s = cat((yyvsp[-4].rec)->code, "{", (yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, "}");
																													freeRecord((yyvsp[-4].rec));
																													freeRecord((yyvsp[-2].rec));
																													freeRecord((yyvsp[-1].rec));
																													(yyval.rec) = createRecord(s, "");
																													free(s);}
#line 2571 "y.tab.c"
    break;

  case 122:
#line 556 "parser.y"
                                        {char * s = cat("switch ", "(", (yyvsp[-1].rec)->code, ")", "");
																	freeRecord((yyvsp[-1].rec));
																	(yyval.rec) = createRecord(s, "");
																	free(s);}
#line 2580 "y.tab.c"
    break;

  case 123:
#line 562 "parser.y"
                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2586 "y.tab.c"
    break;

  case 124:
#line 563 "parser.y"
                                                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																freeRecord((yyvsp[-1].rec));
																freeRecord((yyvsp[0].rec));
																(yyval.rec) = createRecord(s, "");
																free(s);}
#line 2596 "y.tab.c"
    break;

  case 125:
#line 570 "parser.y"
                                {char * s = cat("case ", (yyvsp[-2].rec)->code, ":", (yyvsp[0].rec)->code, "");
															freeRecord((yyvsp[-2].rec));
															freeRecord((yyvsp[0].rec));
															(yyval.rec) = createRecord(s, "");
															free(s);}
#line 2606 "y.tab.c"
    break;

  case 126:
#line 577 "parser.y"
                                                        {(yyval.rec) = createRecord("","");}
#line 2612 "y.tab.c"
    break;

  case 127:
#line 578 "parser.y"
                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 2618 "y.tab.c"
    break;

  case 128:
#line 581 "parser.y"
                                {char * s = cat("default", ":", (yyvsp[0].rec)->code, "", "");
														freeRecord((yyvsp[0].rec));
														(yyval.rec) = createRecord(s, "");
														free(s);}
#line 2627 "y.tab.c"
    break;

  case 129:
#line 587 "parser.y"
                {(yyval.rec) = (yyvsp[0].rec);}
#line 2633 "y.tab.c"
    break;

  case 130:
#line 588 "parser.y"
                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2639 "y.tab.c"
    break;

  case 131:
#line 591 "parser.y"
                                {char * s = cat("while ", (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
																freeRecord((yyvsp[-1].rec));
																freeRecord((yyvsp[0].rec));
																(yyval.rec) = createRecord(s, "");
																free(s);}
#line 2649 "y.tab.c"
    break;

  case 132:
#line 598 "parser.y"
                                {char * s = cat("for ", (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
															freeRecord((yyvsp[-1].rec));
															freeRecord((yyvsp[0].rec));
															(yyval.rec) = createRecord(s, "");
															free(s);}
#line 2659 "y.tab.c"
    break;

  case 133:
#line 605 "parser.y"
                                        {char * s = cat("(", (yyvsp[-1].rec)->code, ")", "", "");
																				freeRecord((yyvsp[-1].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2668 "y.tab.c"
    break;

  case 134:
#line 611 "parser.y"
                                                                {char * s = cat((yyvsp[-4].rec)->code, ";", (yyvsp[-2].rec)->code, ";", (yyvsp[0].rec)->code);
																															freeRecord((yyvsp[-4].rec));
																															freeRecord((yyvsp[-2].rec));
																															freeRecord((yyvsp[0].rec));
																															(yyval.rec) = createRecord(s, "");
																															free(s);}
#line 2679 "y.tab.c"
    break;

  case 135:
#line 619 "parser.y"
                                                                {char * s = cat((yyvsp[-2].rec)->code, "=", (yyvsp[0].rec)->code, "", "");
																					record * rec = search_record(SYMBOLS, (yyvsp[-2].rec)->code);
																					char * t = "";
																					if(strcmp(rec->type, (yyvsp[0].rec)->type) != 0){
																						if((strcmp(rec->type, "int") == 0 && strcmp((yyvsp[0].rec)->type, "real") == 0) || (strcmp((yyvsp[0].rec)->type, "int") == 0 && strcmp(rec->type, "real") == 0)){
																							t = "real";
																						}
																						else{
																							return yyerror("For error: type mismatch");
																						}
																					} else{
																						t = rec->type;
																					}
																					freeRecord((yyvsp[-2].rec));
																					freeRecord((yyvsp[0].rec));
																					(yyval.rec) = createRecord(s, t);
																					free(s);}
#line 2701 "y.tab.c"
    break;

  case 136:
#line 636 "parser.y"
                                                                                                {char * s = cat(convert((yyvsp[-3].sValue)), " ", (yyvsp[-2].rec)->code, "=", (yyvsp[0].rec)->code);
																					char * t;
																					if(strcmp(convert((yyvsp[-3].sValue)), (yyvsp[0].rec)->type) != 0){
																						if((strcmp(convert((yyvsp[-3].sValue)), "int") == 0 && strcmp((yyvsp[0].rec)->type, "real") == 0) || (strcmp((yyvsp[0].rec)->type, "int") == 0 && strcmp(convert((yyvsp[-3].sValue)), "real") == 0)){
																							t = "real";
																						}
																						else{
																							return yyerror("For assignment error: type mismatch");
																						}
																					} else{
																						t = convert((yyvsp[-3].sValue));
																					}
																					record * rec = createRecord((yyvsp[-2].rec)->code, t);
																					insert_record(SYMBOLS, rec);
																					free((yyvsp[-3].sValue));
																					freeRecord((yyvsp[-2].rec));
																					freeRecord((yyvsp[0].rec));
																					(yyval.rec) = createRecord(s, t);
																					free(s);}
#line 2725 "y.tab.c"
    break;

  case 137:
#line 657 "parser.y"
                                {char * s = cat("return ", (yyvsp[0].rec)->code, "", "", "");
														(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
														freeRecord((yyvsp[0].rec));
														free(s);}
#line 2734 "y.tab.c"
    break;


#line 2738 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 663 "parser.y"


int main(int argc, char ** argv){
	int code;

	if (argc != 3) {
		printf("Please provide a input file and an output destination. Closing application...\n");
		exit(0);
	}
    
	yyin = fopen(argv[1], "r");
	yyout = fopen(argv[2], "w");

	code = yyparse();

	fclose(yyin);
	fclose(yyout);

	return code;
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}

char * cat(char * s1, char * s2, char * s3, char * s4, char * s5){
  int tam;
  char * output;

  tam = strlen(s1) + strlen(s2) + strlen(s3) + strlen(s4) + strlen(s5)+ 1;
  output = (char *) malloc(sizeof(char) * tam);
  
  if (!output){
    printf("Allocation problem. Closing application...\n");
    exit(0);
  }
  
  sprintf(output, "%s%s%s%s%s", s1, s2, s3, s4, s5);
  
  return output;
}

char * convert(char * type){
	if (strcmp(type, "string") == 0) {
		char * output = "char *";
		return output;
	};
	if (strcmp(type, "int") == 0) {
		char * output = "int";
		return output;
	};
	if (strcmp(type, "char") == 0) {
		char * output = "char";
		return output;
	};
	if (strcmp(type, "boolean") == 0) {
		char * output = "bool";
		return output;
	};
	if (strcmp(type, "real") == 0) {
		char * output = "float";
		return output;
	};
	return type;
}
