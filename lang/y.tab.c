/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "./record.h"

int yylex(void);
int yyerror(char *s);
extern int yylineno;
extern char * yytext;
extern FILE * yyin, * yyout;

char * cat(char *, char *, char *, char *, char *);
char * convert(char * type);


#line 114 "y.tab.c"

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

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    INT = 259,                     /* INT  */
    REAL = 260,                    /* REAL  */
    BOOLEAN = 261,                 /* BOOLEAN  */
    CHAR = 262,                    /* CHAR  */
    STRING = 263,                  /* STRING  */
    VOID = 264,                    /* VOID  */
    TYPE = 265,                    /* TYPE  */
    NULO = 266,                    /* NULO  */
    CONSTANT = 267,                /* CONSTANT  */
    MAIN = 268,                    /* MAIN  */
    FUNCTION = 269,                /* FUNCTION  */
    FOR = 270,                     /* FOR  */
    WHILE = 271,                   /* WHILE  */
    IF = 272,                      /* IF  */
    ELSE_IF = 273,                 /* ELSE_IF  */
    ELSE = 274,                    /* ELSE  */
    SWITCH = 275,                  /* SWITCH  */
    CASE = 276,                    /* CASE  */
    DEFAULT = 277,                 /* DEFAULT  */
    BREAK = 278,                   /* BREAK  */
    RETURN = 279,                  /* RETURN  */
    PLUS_ASSIGN = 280,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 281,            /* MINUS_ASSIGN  */
    DIV_ASSIGN = 282,              /* DIV_ASSIGN  */
    TIMES_ASSIGN = 283,            /* TIMES_ASSIGN  */
    DOUBLE_PLUS = 284,             /* DOUBLE_PLUS  */
    DOUBLE_MINUS = 285,            /* DOUBLE_MINUS  */
    POWER = 286,                   /* POWER  */
    AND = 287,                     /* AND  */
    OR = 288,                      /* OR  */
    EOR = 289,                     /* EOR  */
    EQUAL = 290,                   /* EQUAL  */
    NOT_EQUAL = 291,               /* NOT_EQUAL  */
    EQ_GREATER = 292,              /* EQ_GREATER  */
    EQ_SMALLER = 293               /* EQ_SMALLER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID 258
#define INT 259
#define REAL 260
#define BOOLEAN 261
#define CHAR 262
#define STRING 263
#define VOID 264
#define TYPE 265
#define NULO 266
#define CONSTANT 267
#define MAIN 268
#define FUNCTION 269
#define FOR 270
#define WHILE 271
#define IF 272
#define ELSE_IF 273
#define ELSE 274
#define SWITCH 275
#define CASE 276
#define DEFAULT 277
#define BREAK 278
#define RETURN 279
#define PLUS_ASSIGN 280
#define MINUS_ASSIGN 281
#define DIV_ASSIGN 282
#define TIMES_ASSIGN 283
#define DOUBLE_PLUS 284
#define DOUBLE_MINUS 285
#define POWER 286
#define AND 287
#define OR 288
#define EOR 289
#define EQUAL 290
#define NOT_EQUAL 291
#define EQ_GREATER 292
#define EQ_SMALLER 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 44 "parser.y"

	char * sValue; 
	struct record * rec;

#line 248 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_REAL = 5,                       /* REAL  */
  YYSYMBOL_BOOLEAN = 6,                    /* BOOLEAN  */
  YYSYMBOL_CHAR = 7,                       /* CHAR  */
  YYSYMBOL_STRING = 8,                     /* STRING  */
  YYSYMBOL_VOID = 9,                       /* VOID  */
  YYSYMBOL_TYPE = 10,                      /* TYPE  */
  YYSYMBOL_NULO = 11,                      /* NULO  */
  YYSYMBOL_CONSTANT = 12,                  /* CONSTANT  */
  YYSYMBOL_MAIN = 13,                      /* MAIN  */
  YYSYMBOL_FUNCTION = 14,                  /* FUNCTION  */
  YYSYMBOL_FOR = 15,                       /* FOR  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_IF = 17,                        /* IF  */
  YYSYMBOL_ELSE_IF = 18,                   /* ELSE_IF  */
  YYSYMBOL_ELSE = 19,                      /* ELSE  */
  YYSYMBOL_SWITCH = 20,                    /* SWITCH  */
  YYSYMBOL_CASE = 21,                      /* CASE  */
  YYSYMBOL_DEFAULT = 22,                   /* DEFAULT  */
  YYSYMBOL_BREAK = 23,                     /* BREAK  */
  YYSYMBOL_RETURN = 24,                    /* RETURN  */
  YYSYMBOL_PLUS_ASSIGN = 25,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 26,              /* MINUS_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 27,                /* DIV_ASSIGN  */
  YYSYMBOL_TIMES_ASSIGN = 28,              /* TIMES_ASSIGN  */
  YYSYMBOL_DOUBLE_PLUS = 29,               /* DOUBLE_PLUS  */
  YYSYMBOL_DOUBLE_MINUS = 30,              /* DOUBLE_MINUS  */
  YYSYMBOL_POWER = 31,                     /* POWER  */
  YYSYMBOL_AND = 32,                       /* AND  */
  YYSYMBOL_OR = 33,                        /* OR  */
  YYSYMBOL_EOR = 34,                       /* EOR  */
  YYSYMBOL_EQUAL = 35,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 36,                 /* NOT_EQUAL  */
  YYSYMBOL_EQ_GREATER = 37,                /* EQ_GREATER  */
  YYSYMBOL_EQ_SMALLER = 38,                /* EQ_SMALLER  */
  YYSYMBOL_39_ = 39,                       /* ';'  */
  YYSYMBOL_40_ = 40,                       /* ','  */
  YYSYMBOL_41_ = 41,                       /* '='  */
  YYSYMBOL_42_ = 42,                       /* '['  */
  YYSYMBOL_43_ = 43,                       /* ']'  */
  YYSYMBOL_44_ = 44,                       /* '+'  */
  YYSYMBOL_45_ = 45,                       /* '-'  */
  YYSYMBOL_46_ = 46,                       /* '*'  */
  YYSYMBOL_47_ = 47,                       /* '/'  */
  YYSYMBOL_48_ = 48,                       /* '%'  */
  YYSYMBOL_49_ = 49,                       /* '('  */
  YYSYMBOL_50_ = 50,                       /* ')'  */
  YYSYMBOL_51_ = 51,                       /* '{'  */
  YYSYMBOL_52_ = 52,                       /* '}'  */
  YYSYMBOL_53_ = 53,                       /* '!'  */
  YYSYMBOL_54_ = 54,                       /* '>'  */
  YYSYMBOL_55_ = 55,                       /* '<'  */
  YYSYMBOL_56_ = 56,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_program = 58,                   /* program  */
  YYSYMBOL_declarations_section = 59,      /* declarations_section  */
  YYSYMBOL_declarations_list = 60,         /* declarations_list  */
  YYSYMBOL_declaration = 61,               /* declaration  */
  YYSYMBOL_id_list = 62,                   /* id_list  */
  YYSYMBOL_id_declaration = 63,            /* id_declaration  */
  YYSYMBOL_id = 64,                        /* id  */
  YYSYMBOL_dimensions = 65,                /* dimensions  */
  YYSYMBOL_dimensions_novalue = 66,        /* dimensions_novalue  */
  YYSYMBOL_dimensions_value = 67,          /* dimensions_value  */
  YYSYMBOL_expression = 68,                /* expression  */
  YYSYMBOL_expression_operator = 69,       /* expression_operator  */
  YYSYMBOL_term = 70,                      /* term  */
  YYSYMBOL_term_operator = 71,             /* term_operator  */
  YYSYMBOL_factor = 72,                    /* factor  */
  YYSYMBOL_base = 73,                      /* base  */
  YYSYMBOL_literal = 74,                   /* literal  */
  YYSYMBOL_id_value = 75,                  /* id_value  */
  YYSYMBOL_function_call = 76,             /* function_call  */
  YYSYMBOL_arguments = 77,                 /* arguments  */
  YYSYMBOL_arguments_list = 78,            /* arguments_list  */
  YYSYMBOL_argument = 79,                  /* argument  */
  YYSYMBOL_double_sign = 80,               /* double_sign  */
  YYSYMBOL_subprograms_section = 81,       /* subprograms_section  */
  YYSYMBOL_subprogram = 82,                /* subprogram  */
  YYSYMBOL_header = 83,                    /* header  */
  YYSYMBOL_signature = 84,                 /* signature  */
  YYSYMBOL_subprogram_type = 85,           /* subprogram_type  */
  YYSYMBOL_subprogram_id = 86,             /* subprogram_id  */
  YYSYMBOL_parameters = 87,                /* parameters  */
  YYSYMBOL_parameter_list = 88,            /* parameter_list  */
  YYSYMBOL_parameter = 89,                 /* parameter  */
  YYSYMBOL_block = 90,                     /* block  */
  YYSYMBOL_body = 91,                      /* body  */
  YYSYMBOL_statement_list = 92,            /* statement_list  */
  YYSYMBOL_statement = 93,                 /* statement  */
  YYSYMBOL_assignment = 94,                /* assignment  */
  YYSYMBOL_assignment_operation = 95,      /* assignment_operation  */
  YYSYMBOL_assignment_sign = 96,           /* assignment_sign  */
  YYSYMBOL_evaluation = 97,                /* evaluation  */
  YYSYMBOL_comparation = 98,               /* comparation  */
  YYSYMBOL_comparison = 99,                /* comparison  */
  YYSYMBOL_compare = 100,                  /* compare  */
  YYSYMBOL_evaluation_operator = 101,      /* evaluation_operator  */
  YYSYMBOL_logic_operator = 102,           /* logic_operator  */
  YYSYMBOL_conditional = 103,              /* conditional  */
  YYSYMBOL_if_else = 104,                  /* if_else  */
  YYSYMBOL_if = 105,                       /* if  */
  YYSYMBOL_else_section = 106,             /* else_section  */
  YYSYMBOL_else_if = 107,                  /* else_if  */
  YYSYMBOL_else = 108,                     /* else  */
  YYSYMBOL_switch_case = 109,              /* switch_case  */
  YYSYMBOL_switch = 110,                   /* switch  */
  YYSYMBOL_case_section = 111,             /* case_section  */
  YYSYMBOL_case = 112,                     /* case  */
  YYSYMBOL_default_section = 113,          /* default_section  */
  YYSYMBOL_default = 114,                  /* default  */
  YYSYMBOL_loop = 115,                     /* loop  */
  YYSYMBOL_while = 116,                    /* while  */
  YYSYMBOL_for = 117,                      /* for  */
  YYSYMBOL_for_structure = 118,            /* for_structure  */
  YYSYMBOL_for_expression = 119,           /* for_expression  */
  YYSYMBOL_for_assignment = 120,           /* for_assignment  */
  YYSYMBOL_return = 121                    /* return  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   196

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  202

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,     2,     2,     2,    48,     2,     2,
      49,    50,    46,    44,    40,    45,     2,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    56,    39,
      55,    41,    54,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    71,    71,    76,    77,    80,    84,    91,    96,   104,
     105,   113,   114,   121,   128,   129,   130,   133,   136,   141,
     144,   152,   158,   161,   164,   171,   177,   180,   183,   186,
     192,   197,   200,   204,   205,   206,   213,   215,   217,   219,
     221,   225,   226,   229,   236,   237,   240,   241,   248,   249,
     250,   253,   256,   261,   262,   269,   276,   282,   290,   292,
     297,   299,   304,   305,   308,   309,   316,   323,   329,   330,
     331,   336,   339,   343,   350,   351,   352,   353,   354,   359,
     366,   371,   374,   377,   380,   383,   386,   391,   392,   400,
     401,   407,   411,   414,   422,   425,   428,   431,   434,   437,
     442,   445,   448,   453,   454,   457,   464,   471,   472,   477,
     480,   487,   493,   501,   507,   508,   515,   522,   523,   526,
     532,   533,   536,   543,   550,   556,   565,   570,   578
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "INT", "REAL",
  "BOOLEAN", "CHAR", "STRING", "VOID", "TYPE", "NULO", "CONSTANT", "MAIN",
  "FUNCTION", "FOR", "WHILE", "IF", "ELSE_IF", "ELSE", "SWITCH", "CASE",
  "DEFAULT", "BREAK", "RETURN", "PLUS_ASSIGN", "MINUS_ASSIGN",
  "DIV_ASSIGN", "TIMES_ASSIGN", "DOUBLE_PLUS", "DOUBLE_MINUS", "POWER",
  "AND", "OR", "EOR", "EQUAL", "NOT_EQUAL", "EQ_GREATER", "EQ_SMALLER",
  "';'", "','", "'='", "'['", "']'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'('", "')'", "'{'", "'}'", "'!'", "'>'", "'<'", "':'", "$accept",
  "program", "declarations_section", "declarations_list", "declaration",
  "id_list", "id_declaration", "id", "dimensions", "dimensions_novalue",
  "dimensions_value", "expression", "expression_operator", "term",
  "term_operator", "factor", "base", "literal", "id_value",
  "function_call", "arguments", "arguments_list", "argument",
  "double_sign", "subprograms_section", "subprogram", "header",
  "signature", "subprogram_type", "subprogram_id", "parameters",
  "parameter_list", "parameter", "block", "body", "statement_list",
  "statement", "assignment", "assignment_operation", "assignment_sign",
  "evaluation", "comparation", "comparison", "compare",
  "evaluation_operator", "logic_operator", "conditional", "if_else", "if",
  "else_section", "else_if", "else", "switch_case", "switch",
  "case_section", "case", "default_section", "default", "loop", "while",
  "for", "for_structure", "for_expression", "for_assignment", "return", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-96)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      66,    43,    54,    81,    69,   -96,    47,    53,   -96,    49,
      64,    43,   -96,    18,   -96,    69,    55,    66,    13,   -96,
     -96,   -96,    43,     8,   -96,   -96,   -96,   -96,    21,   -96,
      20,   -96,   -96,    65,    70,   -96,   -16,   -96,   -96,   -96,
     -96,   -96,     8,   -96,    -3,    14,   -96,    95,   -96,    23,
     -96,   -96,   -96,    78,    79,     2,    80,    84,   -96,     8,
      87,    89,    82,   -96,    96,   -96,   -96,   -96,    61,   -96,
      91,   -96,   -96,   -96,   -96,   101,   102,   -96,   117,    25,
     -96,   -96,     8,   -96,   -96,   -96,     8,     8,   -96,   -96,
     -96,   134,    35,    55,    43,    16,    12,    55,    40,   -96,
     -96,     2,   143,    -3,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,     8,   -96,    87,    99,    55,   -96,    61,   -96,
     128,   146,   -96,   -96,   -96,   -96,   103,   -96,   111,   -96,
      14,   -96,   -96,    43,   105,   -96,   112,    43,   115,   107,
     119,   -96,   110,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
       8,   -96,   -96,   -96,   -96,     2,   113,   114,    -3,   -96,
       2,   -96,   -96,   133,   139,   128,   -96,   117,   -96,   -96,
     134,   121,     8,   -96,     2,   -96,    -3,   -96,    55,   -96,
     118,   109,   116,   122,   -96,   -96,   -96,   -96,     8,    -3,
     130,   -96,    55,    20,    20,   -96,    -3,    43,   -96,   -96,
     -96,   -96
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,     4,     0,    14,     7,     9,
      11,     0,     1,     0,     2,    53,     0,     5,     0,    13,
      15,    16,     0,     0,     8,    59,    58,    56,     0,    54,
      68,    55,     6,     0,    17,    10,    14,    36,    37,    38,
      39,    40,     0,    41,    12,    22,    26,    31,    33,    34,
      42,    60,    61,     0,     0,     0,     0,     0,    78,     0,
      69,     0,     0,    71,     0,    74,    75,   103,   107,   104,
       0,    76,   120,   121,    77,    19,     0,    18,    44,     0,
      23,    24,     0,    27,    28,    29,     0,     0,    51,    52,
      35,    62,     0,     0,     0,     0,     0,     0,    87,    89,
      92,     0,     0,   128,    70,    83,    84,    85,    86,    82,
      81,    79,     0,    67,    72,     0,     0,   105,   107,   109,
       0,     0,    20,    48,    49,    50,     0,    45,    46,    32,
      21,    25,    30,     0,     0,    63,    64,     0,     0,     0,
       0,   123,     0,    90,    94,    95,    98,    99,    96,    97,
       0,   122,   100,   101,   102,     0,     0,     0,    80,    73,
       0,   111,   108,     0,   117,   114,    43,     0,    66,    57,
       0,     0,     0,   124,     0,    91,    93,    88,     0,   113,
       0,     0,     0,     0,   118,   115,    47,    65,     0,   126,
       0,   106,     0,    68,    68,   112,   127,     0,   110,   116,
     119,   125
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -96,   -96,   -96,    22,   -96,     9,   -71,    -1,   -96,   136,
      92,   -41,   -96,    93,   -96,    -2,   -96,   -75,    74,   -70,
     -96,     4,   -96,   120,   162,   -96,   -96,   -96,   -96,   -96,
     -96,    10,   -96,   -91,   -95,   -56,   -96,   -19,   -96,   -96,
     -92,   -96,    88,    85,   -96,   -96,   -96,   -96,   -96,    67,
     -96,   -96,   -96,   -96,    17,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,    60,     6,     8,     9,    43,    19,    20,
      21,    44,    82,    45,    86,    46,    47,    48,    49,    50,
     126,   127,   128,    90,    14,    15,    16,    27,    28,    53,
     134,   135,   136,    31,    62,    63,    64,    65,   111,   112,
      97,    98,    99,   100,   150,   155,    66,    67,    68,   117,
     118,   119,    69,    70,   164,   165,   183,   184,    71,    72,
      73,    93,   139,   140,    74
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      10,    79,   141,   124,   104,     7,   151,   123,   125,   156,
      10,    36,    37,    38,    39,    40,    41,    33,   103,     7,
      24,    10,     5,     7,    51,   161,    18,    25,    26,    61,
       1,    35,     2,    78,    52,    54,    55,    56,     7,    32,
      57,    80,    81,    58,    59,   137,     7,   144,   145,   146,
     147,    94,    88,    89,    96,    95,    34,    42,   159,    61,
      83,    84,    85,   177,    11,    94,   148,   149,   180,    80,
      81,   158,   152,   153,   154,   129,     1,    10,     2,   115,
     116,    12,   190,    13,   131,   132,    17,   191,   181,    22,
       7,   138,   124,    96,    96,    18,   123,   125,   199,   200,
      96,   198,    54,    55,    56,    23,    30,    57,    75,   176,
      58,    59,    76,    61,   105,   106,   107,   108,    88,    89,
      36,    37,    38,    39,    40,    41,    87,    91,    92,   101,
     109,   189,   168,   102,   113,   114,   171,    37,    38,    39,
      40,    41,   120,   121,   133,    34,    36,   196,   160,   163,
      33,   167,   170,   166,    96,   169,   172,   173,   174,    96,
     175,   182,   188,   178,   179,   193,    10,   122,   192,   197,
      77,   186,   194,    96,   195,   130,   157,    29,   201,   142,
     187,   110,   185,   143,     0,   162,     0,     0,     0,     0,
       0,     0,    61,    61,     0,     0,    61
};

static const yytype_int16 yycheck[] =
{
       1,    42,    93,    78,    60,     3,    97,    78,    78,   101,
      11,     3,     4,     5,     6,     7,     8,     4,    59,     3,
      11,    22,     0,     3,     3,   116,    42,     9,    10,    30,
      10,    22,    12,    49,    13,    15,    16,    17,     3,    17,
      20,    44,    45,    23,    24,    10,     3,    35,    36,    37,
      38,    49,    29,    30,    55,    53,    43,    49,   114,    60,
      46,    47,    48,   155,    10,    49,    54,    55,   160,    44,
      45,   112,    32,    33,    34,    50,    10,    78,    12,    18,
      19,     0,   174,    14,    86,    87,    39,   178,   163,    40,
       3,    92,   167,    94,    95,    42,   167,   167,   193,   194,
     101,   192,    15,    16,    17,    41,    51,    20,    43,   150,
      23,    24,    42,   114,    25,    26,    27,    28,    29,    30,
       3,     4,     5,     6,     7,     8,    31,    49,    49,    49,
      41,   172,   133,    49,    52,    39,   137,     4,     5,     6,
       7,     8,    51,    42,    10,    43,     3,   188,    49,    21,
       4,    40,    40,    50,   155,    50,    41,    50,    39,   160,
      50,    22,    41,    50,    50,    56,   167,    75,    50,    39,
      34,   167,    56,   174,    52,    82,   102,    15,   197,    94,
     170,    61,   165,    95,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,   193,   194,    -1,    -1,   197
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    12,    58,    59,    60,    61,     3,    62,    63,
      64,    10,     0,    14,    81,    82,    83,    39,    42,    65,
      66,    67,    40,    41,    62,     9,    10,    84,    85,    81,
      51,    90,    60,     4,    43,    62,     3,     4,     5,     6,
       7,     8,    49,    64,    68,    70,    72,    73,    74,    75,
      76,     3,    13,    86,    15,    16,    17,    20,    23,    24,
      60,    64,    91,    92,    93,    94,   103,   104,   105,   109,
     110,   115,   116,   117,   121,    43,    42,    66,    49,    68,
      44,    45,    69,    46,    47,    48,    71,    31,    29,    30,
      80,    49,    49,   118,    49,    53,    64,    97,    98,    99,
     100,    49,    49,    68,    92,    25,    26,    27,    28,    41,
      80,    95,    96,    52,    39,    18,    19,   106,   107,   108,
      51,    42,    67,    63,    74,    76,    77,    78,    79,    50,
      70,    72,    72,    10,    87,    88,    89,    10,    64,   119,
     120,    90,   100,    99,    35,    36,    37,    38,    54,    55,
     101,    90,    32,    33,    34,   102,    97,    75,    68,    92,
      49,    90,   106,    21,   111,   112,    50,    40,    64,    50,
      40,    64,    41,    50,    39,    50,    68,    97,    50,    50,
      97,    74,    22,   113,   114,   111,    78,    88,    41,    68,
      97,    90,    50,    56,    56,    52,    68,    39,    90,    91,
      91,    94
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    61,    61,    62,
      62,    63,    63,    64,    65,    65,    65,    66,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    71,    71,    71,
      72,    72,    73,    73,    73,    73,    74,    74,    74,    74,
      74,    75,    75,    76,    77,    77,    78,    78,    79,    79,
      79,    80,    80,    81,    81,    82,    83,    84,    85,    85,
      86,    86,    87,    87,    88,    88,    89,    90,    91,    91,
      91,    91,    92,    92,    93,    93,    93,    93,    93,    94,
      95,    95,    96,    96,    96,    96,    96,    97,    97,    98,
      98,    99,    99,   100,   101,   101,   101,   101,   101,   101,
     102,   102,   102,   103,   103,   104,   105,   106,   106,   106,
     107,   108,   109,   110,   111,   111,   112,   113,   113,   114,
     115,   115,   116,   117,   118,   119,   120,   120,   121
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     1,     2,     3,     2,     3,     1,
       3,     1,     3,     2,     0,     1,     1,     2,     3,     3,
       4,     3,     1,     1,     1,     3,     1,     1,     1,     1,
       3,     1,     3,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     4,     0,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     5,     1,     1,
       1,     1,     0,     1,     1,     3,     2,     3,     0,     1,
       2,     1,     2,     3,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       2,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     5,     0,     2,     1,
       5,     2,     5,     4,     1,     2,     4,     0,     1,     3,
       1,     1,     3,     3,     3,     5,     3,     4,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* program: declarations_section subprograms_section  */
#line 71 "parser.y"
                                                                                                                {fprintf(yyout, "%s\n%s", (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code);
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));}
#line 1506 "y.tab.c"
    break;

  case 3: /* declarations_section: %empty  */
#line 76 "parser.y"
                                                                                                                                        {(yyval.rec) = createRecord("","");}
#line 1512 "y.tab.c"
    break;

  case 4: /* declarations_section: declarations_list  */
#line 77 "parser.y"
                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1518 "y.tab.c"
    break;

  case 5: /* declarations_list: declaration ';'  */
#line 80 "parser.y"
                                                                                                                                {char * s = cat((yyvsp[-1].rec)->code, ";\n", "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1527 "y.tab.c"
    break;

  case 6: /* declarations_list: declaration ';' declarations_list  */
#line 84 "parser.y"
                                                                                                                {char * s = cat((yyvsp[-2].rec)->code, ";\n", (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1537 "y.tab.c"
    break;

  case 7: /* declaration: TYPE id_list  */
#line 91 "parser.y"
                                                                                                                                        {char * s = cat(convert((yyvsp[-1].sValue)), " ", (yyvsp[0].rec)->code, "", "");
																				free((yyvsp[-1].sValue));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1547 "y.tab.c"
    break;

  case 8: /* declaration: CONSTANT TYPE id_list  */
#line 96 "parser.y"
                                                                                                                                        {char * s = cat("const ", convert((yyvsp[-1].sValue)), " ", (yyvsp[0].rec)->code, "");
																				free((yyvsp[-1].sValue));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1557 "y.tab.c"
    break;

  case 9: /* id_list: id_declaration  */
#line 104 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1563 "y.tab.c"
    break;

  case 10: /* id_list: id_declaration ',' id_list  */
#line 105 "parser.y"
                                                                                                                                {char * s = cat((yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1573 "y.tab.c"
    break;

  case 11: /* id_declaration: id  */
#line 113 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1579 "y.tab.c"
    break;

  case 12: /* id_declaration: id '=' expression  */
#line 114 "parser.y"
                                                                                                                                        {char * s = cat((yyvsp[-2].rec)->code, "=", (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1589 "y.tab.c"
    break;

  case 13: /* id: ID dimensions  */
#line 121 "parser.y"
                                                                                                                                                {char * s = cat((yyvsp[-1].sValue), " ", (yyvsp[0].rec)->code, "", "");
																				free((yyvsp[-1].sValue));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1599 "y.tab.c"
    break;

  case 14: /* dimensions: %empty  */
#line 128 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord("","");}
#line 1605 "y.tab.c"
    break;

  case 15: /* dimensions: dimensions_novalue  */
#line 129 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1611 "y.tab.c"
    break;

  case 16: /* dimensions: dimensions_value  */
#line 130 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1617 "y.tab.c"
    break;

  case 17: /* dimensions_novalue: '[' ']'  */
#line 133 "parser.y"
                                                                                                                                {char * s = "[]";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1625 "y.tab.c"
    break;

  case 18: /* dimensions_novalue: '[' ']' dimensions_novalue  */
#line 136 "parser.y"
                                                                                                                                {char * s = cat("[]", (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");}
#line 1633 "y.tab.c"
    break;

  case 19: /* dimensions_value: '[' INT ']'  */
#line 141 "parser.y"
                                                                                                                                {char * s = cat("[", (yyvsp[-1].sValue), "]", "", "");
																				free((yyvsp[-1].sValue));
																				(yyval.rec) = createRecord(s, "");}
#line 1641 "y.tab.c"
    break;

  case 20: /* dimensions_value: '[' INT ']' dimensions_value  */
#line 144 "parser.y"
                                                                                                                        {char * s = cat("[", (yyvsp[-2].sValue), "]", (yyvsp[0].rec)->code, "");
																				free((yyvsp[-2].sValue));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");}
#line 1650 "y.tab.c"
    break;

  case 21: /* expression: expression expression_operator term  */
#line 152 "parser.y"
                                                                                                                {char * s = cat((yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1661 "y.tab.c"
    break;

  case 22: /* expression: term  */
#line 158 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1667 "y.tab.c"
    break;

  case 23: /* expression_operator: '+'  */
#line 161 "parser.y"
                                                                                                                                        {char * s = "+";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1675 "y.tab.c"
    break;

  case 24: /* expression_operator: '-'  */
#line 164 "parser.y"
                                                                                                                                                        {char * s = "-";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1683 "y.tab.c"
    break;

  case 25: /* term: term term_operator factor  */
#line 171 "parser.y"
                                                                                                                                {char * s = cat((yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1694 "y.tab.c"
    break;

  case 26: /* term: factor  */
#line 177 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1700 "y.tab.c"
    break;

  case 27: /* term_operator: '*'  */
#line 180 "parser.y"
                                                                                                                                        {char * s = "*";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1708 "y.tab.c"
    break;

  case 28: /* term_operator: '/'  */
#line 183 "parser.y"
                                                                                                                                                        {char * s = "/";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1716 "y.tab.c"
    break;

  case 29: /* term_operator: '%'  */
#line 186 "parser.y"
                                                                                                                                                        {char * s = "%";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1724 "y.tab.c"
    break;

  case 30: /* factor: base POWER factor  */
#line 192 "parser.y"
                                                                                                                                        {char * s = cat("pow(", (yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, ")");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1734 "y.tab.c"
    break;

  case 31: /* factor: base  */
#line 197 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1740 "y.tab.c"
    break;

  case 32: /* base: '(' expression ')'  */
#line 200 "parser.y"
                                                                                                                                        {char * s = cat("(", (yyvsp[-1].rec)->code, ")", "", "");
																				(yyval.rec) = createRecord(s, (yyvsp[-1].rec)->type);
																				freeRecord((yyvsp[-1].rec));
																				free(s);}
#line 1749 "y.tab.c"
    break;

  case 33: /* base: literal  */
#line 204 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1755 "y.tab.c"
    break;

  case 34: /* base: id_value  */
#line 205 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1761 "y.tab.c"
    break;

  case 35: /* base: id_value double_sign  */
#line 206 "parser.y"
                                                                                                                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, (yyvsp[-1].rec)->type);
																				free(s);}
#line 1771 "y.tab.c"
    break;

  case 36: /* literal: INT  */
#line 213 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord((yyvsp[0].sValue), "");
																				free((yyvsp[0].sValue));}
#line 1778 "y.tab.c"
    break;

  case 37: /* literal: REAL  */
#line 215 "parser.y"
                                                                                                                                                        {(yyval.rec) = createRecord((yyvsp[0].sValue), "");
																				free((yyvsp[0].sValue));}
#line 1785 "y.tab.c"
    break;

  case 38: /* literal: BOOLEAN  */
#line 217 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord((yyvsp[0].sValue), "");
																				free((yyvsp[0].sValue));}
#line 1792 "y.tab.c"
    break;

  case 39: /* literal: CHAR  */
#line 219 "parser.y"
                                                                                                                                                        {(yyval.rec) = createRecord((yyvsp[0].sValue), "");
																				free((yyvsp[0].sValue));}
#line 1799 "y.tab.c"
    break;

  case 40: /* literal: STRING  */
#line 221 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord((yyvsp[0].sValue), "");
																				free((yyvsp[0].sValue));}
#line 1806 "y.tab.c"
    break;

  case 41: /* id_value: id  */
#line 225 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1812 "y.tab.c"
    break;

  case 42: /* id_value: function_call  */
#line 226 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1818 "y.tab.c"
    break;

  case 43: /* function_call: ID '(' arguments ')'  */
#line 229 "parser.y"
                                                                                                                        {char * s = cat((yyvsp[-3].sValue), "(", (yyvsp[-1].rec)->code, ")", "");
																				free((yyvsp[-3].sValue));
																				freeRecord((yyvsp[-1].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1828 "y.tab.c"
    break;

  case 44: /* arguments: %empty  */
#line 236 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord("","");}
#line 1834 "y.tab.c"
    break;

  case 45: /* arguments: arguments_list  */
#line 237 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1840 "y.tab.c"
    break;

  case 46: /* arguments_list: argument  */
#line 240 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1846 "y.tab.c"
    break;

  case 47: /* arguments_list: argument ',' arguments_list  */
#line 241 "parser.y"
                                                                                                                                {char * s = cat((yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1856 "y.tab.c"
    break;

  case 48: /* argument: id_declaration  */
#line 248 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1862 "y.tab.c"
    break;

  case 49: /* argument: literal  */
#line 249 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1868 "y.tab.c"
    break;

  case 50: /* argument: function_call  */
#line 250 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1874 "y.tab.c"
    break;

  case 51: /* double_sign: DOUBLE_PLUS  */
#line 253 "parser.y"
                                                                                                                                        {char * s = "++";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1882 "y.tab.c"
    break;

  case 52: /* double_sign: DOUBLE_MINUS  */
#line 256 "parser.y"
                                                                                                                                                {char * s = "--";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1890 "y.tab.c"
    break;

  case 53: /* subprograms_section: subprogram  */
#line 261 "parser.y"
                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1896 "y.tab.c"
    break;

  case 54: /* subprograms_section: subprogram subprograms_section  */
#line 262 "parser.y"
                                                                                                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1906 "y.tab.c"
    break;

  case 55: /* subprogram: header block  */
#line 269 "parser.y"
                                                                                                                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1916 "y.tab.c"
    break;

  case 56: /* header: FUNCTION signature  */
#line 276 "parser.y"
                                                                                                                                        {char * s = cat((yyvsp[0].rec)->code, "", "", "", "");
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1925 "y.tab.c"
    break;

  case 57: /* signature: subprogram_type subprogram_id '(' parameters ')'  */
#line 282 "parser.y"
                                                                                                {char * s = cat((yyvsp[-4].rec)->code, (yyvsp[-3].rec)->code, "(", (yyvsp[-1].rec)->code, ")");
																				freeRecord((yyvsp[-4].rec));
																				freeRecord((yyvsp[-3].rec));
																				freeRecord((yyvsp[-1].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1936 "y.tab.c"
    break;

  case 58: /* subprogram_type: TYPE  */
#line 290 "parser.y"
                                                                                                                                        {(yyval.rec) = createRecord(convert((yyvsp[0].sValue)), "");
																				free((yyvsp[0].sValue));}
#line 1943 "y.tab.c"
    break;

  case 59: /* subprogram_type: VOID  */
#line 292 "parser.y"
                                                                                                                                                        {char * s = "void";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1951 "y.tab.c"
    break;

  case 60: /* subprogram_id: ID  */
#line 297 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord((yyvsp[0].sValue), "");
																				free((yyvsp[0].sValue));}
#line 1958 "y.tab.c"
    break;

  case 61: /* subprogram_id: MAIN  */
#line 299 "parser.y"
                                                                                                                                                        {char * s = "main";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1966 "y.tab.c"
    break;

  case 62: /* parameters: %empty  */
#line 304 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord("","");}
#line 1972 "y.tab.c"
    break;

  case 63: /* parameters: parameter_list  */
#line 305 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1978 "y.tab.c"
    break;

  case 64: /* parameter_list: parameter  */
#line 308 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1984 "y.tab.c"
    break;

  case 65: /* parameter_list: parameter ',' parameter_list  */
#line 309 "parser.y"
                                                                                                                        {char * s = cat((yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1994 "y.tab.c"
    break;

  case 66: /* parameter: TYPE id  */
#line 316 "parser.y"
                                                                                                                                        {char * s = cat(convert((yyvsp[-1].sValue)), (yyvsp[0].rec)->code, "", "", "");
																				free((yyvsp[-1].sValue));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2004 "y.tab.c"
    break;

  case 67: /* block: '{' body '}'  */
#line 323 "parser.y"
                                                                                                                                        {char * s = cat("{", (yyvsp[-1].rec)->code, "}", "", "");
																				freeRecord((yyvsp[-1].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2013 "y.tab.c"
    break;

  case 68: /* body: %empty  */
#line 329 "parser.y"
                                                                                                                                                        {(yyval.rec) = createRecord("","");}
#line 2019 "y.tab.c"
    break;

  case 69: /* body: declarations_list  */
#line 330 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2025 "y.tab.c"
    break;

  case 70: /* body: declarations_list statement_list  */
#line 331 "parser.y"
                                                                                                                                {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2035 "y.tab.c"
    break;

  case 71: /* body: statement_list  */
#line 336 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 2041 "y.tab.c"
    break;

  case 72: /* statement_list: statement ';'  */
#line 339 "parser.y"
                                                                                                                                {char * s = cat((yyvsp[-1].rec)->code, ";\n", "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2050 "y.tab.c"
    break;

  case 73: /* statement_list: statement ';' statement_list  */
#line 343 "parser.y"
                                                                                                                        {char * s = cat((yyvsp[-2].rec)->code, ";\n", (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2060 "y.tab.c"
    break;

  case 74: /* statement: assignment  */
#line 350 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2066 "y.tab.c"
    break;

  case 75: /* statement: conditional  */
#line 351 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 2072 "y.tab.c"
    break;

  case 76: /* statement: loop  */
#line 352 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2078 "y.tab.c"
    break;

  case 77: /* statement: return  */
#line 353 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2084 "y.tab.c"
    break;

  case 78: /* statement: BREAK  */
#line 354 "parser.y"
                                                                                                                                                        {char * s = "break";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2092 "y.tab.c"
    break;

  case 79: /* assignment: id assignment_operation  */
#line 359 "parser.y"
                                                                                                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2102 "y.tab.c"
    break;

  case 80: /* assignment_operation: assignment_sign expression  */
#line 366 "parser.y"
                                                                                                                {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2112 "y.tab.c"
    break;

  case 81: /* assignment_operation: double_sign  */
#line 371 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 2118 "y.tab.c"
    break;

  case 82: /* assignment_sign: '='  */
#line 374 "parser.y"
                                                                                                                                        {char * s = "=";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2126 "y.tab.c"
    break;

  case 83: /* assignment_sign: PLUS_ASSIGN  */
#line 377 "parser.y"
                                                                                                                                                {char * s = "+=";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2134 "y.tab.c"
    break;

  case 84: /* assignment_sign: MINUS_ASSIGN  */
#line 380 "parser.y"
                                                                                                                                                {char * s = "-=";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2142 "y.tab.c"
    break;

  case 85: /* assignment_sign: DIV_ASSIGN  */
#line 383 "parser.y"
                                                                                                                                                {char * s = "/=";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2150 "y.tab.c"
    break;

  case 86: /* assignment_sign: TIMES_ASSIGN  */
#line 386 "parser.y"
                                                                                                                                                {char * s = "*=";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2158 "y.tab.c"
    break;

  case 87: /* evaluation: comparation  */
#line 391 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2164 "y.tab.c"
    break;

  case 88: /* evaluation: comparation logic_operator evaluation  */
#line 392 "parser.y"
                                                                                                                        {char * s = cat((yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2175 "y.tab.c"
    break;

  case 89: /* comparation: comparison  */
#line 400 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2181 "y.tab.c"
    break;

  case 90: /* comparation: '!' comparison  */
#line 401 "parser.y"
                                                                                                                                                {char * s = cat("!", (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2190 "y.tab.c"
    break;

  case 91: /* comparison: '(' compare ')'  */
#line 407 "parser.y"
                                                                                                                                {char * s = cat("(", (yyvsp[-1].rec)->code, ")", "", "");
																				freeRecord((yyvsp[-1].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2199 "y.tab.c"
    break;

  case 92: /* comparison: compare  */
#line 411 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 2205 "y.tab.c"
    break;

  case 93: /* compare: id evaluation_operator expression  */
#line 414 "parser.y"
                                                                                                                {char * s = cat((yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2216 "y.tab.c"
    break;

  case 94: /* evaluation_operator: EQUAL  */
#line 422 "parser.y"
                                                                                                                                {char * s = "==";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2224 "y.tab.c"
    break;

  case 95: /* evaluation_operator: NOT_EQUAL  */
#line 425 "parser.y"
                                                                                                                                                {char * s = "!=";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2232 "y.tab.c"
    break;

  case 96: /* evaluation_operator: '>'  */
#line 428 "parser.y"
                                                                                                                                                        {char * s = ">";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2240 "y.tab.c"
    break;

  case 97: /* evaluation_operator: '<'  */
#line 431 "parser.y"
                                                                                                                                                        {char * s = "<";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2248 "y.tab.c"
    break;

  case 98: /* evaluation_operator: EQ_GREATER  */
#line 434 "parser.y"
                                                                                                                                                {char * s = ">=";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2256 "y.tab.c"
    break;

  case 99: /* evaluation_operator: EQ_SMALLER  */
#line 437 "parser.y"
                                                                                                                                                {char * s = "<=";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2264 "y.tab.c"
    break;

  case 100: /* logic_operator: AND  */
#line 442 "parser.y"
                                                                                                                                        {char * s = "&&";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2272 "y.tab.c"
    break;

  case 101: /* logic_operator: OR  */
#line 445 "parser.y"
                                                                                                                                                        {char * s = "||";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2280 "y.tab.c"
    break;

  case 102: /* logic_operator: EOR  */
#line 448 "parser.y"
                                                                                                                                                        {char * s = "^";
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2288 "y.tab.c"
    break;

  case 103: /* conditional: if_else  */
#line 453 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2294 "y.tab.c"
    break;

  case 104: /* conditional: switch_case  */
#line 454 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 2300 "y.tab.c"
    break;

  case 105: /* if_else: if else_section  */
#line 457 "parser.y"
                                                                                                                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2310 "y.tab.c"
    break;

  case 106: /* if: IF '(' evaluation ')' block  */
#line 464 "parser.y"
                                                                                                                                {char * s = cat("if ", "(", (yyvsp[-2].rec)->code, ")", (yyvsp[0].rec)->code);
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2320 "y.tab.c"
    break;

  case 107: /* else_section: %empty  */
#line 471 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord("","");}
#line 2326 "y.tab.c"
    break;

  case 108: /* else_section: else_if else_section  */
#line 472 "parser.y"
                                                                                                                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2336 "y.tab.c"
    break;

  case 109: /* else_section: else  */
#line 477 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2342 "y.tab.c"
    break;

  case 110: /* else_if: ELSE_IF '(' evaluation ')' block  */
#line 480 "parser.y"
                                                                                                                        {char * s = cat("else if ", "(", (yyvsp[-2].rec)->code, ")", (yyvsp[0].rec)->code);
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2352 "y.tab.c"
    break;

  case 111: /* else: ELSE block  */
#line 487 "parser.y"
                                                                                                                                                {char * s = cat("else ", (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2361 "y.tab.c"
    break;

  case 112: /* switch_case: switch '{' case_section default_section '}'  */
#line 493 "parser.y"
                                                                                                        {char * s = cat((yyvsp[-4].rec)->code, "{", (yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, "}");
																				freeRecord((yyvsp[-4].rec));
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[-1].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2372 "y.tab.c"
    break;

  case 113: /* switch: SWITCH '(' id_value ')'  */
#line 501 "parser.y"
                                                                                                                                {char * s = cat("switch ", "(", (yyvsp[-1].rec)->code, ")", "");
																				freeRecord((yyvsp[-1].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2381 "y.tab.c"
    break;

  case 114: /* case_section: case  */
#line 507 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2387 "y.tab.c"
    break;

  case 115: /* case_section: case case_section  */
#line 508 "parser.y"
                                                                                                                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2397 "y.tab.c"
    break;

  case 116: /* case: CASE literal ':' body  */
#line 515 "parser.y"
                                                                                                                                {char * s = cat("case ", (yyvsp[-2].rec)->code, ":", (yyvsp[0].rec)->code, "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2407 "y.tab.c"
    break;

  case 117: /* default_section: %empty  */
#line 522 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord("","");}
#line 2413 "y.tab.c"
    break;

  case 118: /* default_section: default  */
#line 523 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2419 "y.tab.c"
    break;

  case 119: /* default: DEFAULT ':' body  */
#line 526 "parser.y"
                                                                                                                                        {char * s = cat("default", ":", (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2428 "y.tab.c"
    break;

  case 120: /* loop: while  */
#line 532 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 2434 "y.tab.c"
    break;

  case 121: /* loop: for  */
#line 533 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2440 "y.tab.c"
    break;

  case 122: /* while: WHILE evaluation block  */
#line 536 "parser.y"
                                                                                                                                {char * s = cat("while ", (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2450 "y.tab.c"
    break;

  case 123: /* for: FOR for_structure block  */
#line 543 "parser.y"
                                                                                                                                {char * s = cat("for ", (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2460 "y.tab.c"
    break;

  case 124: /* for_structure: '(' for_expression ')'  */
#line 550 "parser.y"
                                                                                                                        {char * s = cat("(", (yyvsp[-1].rec)->code, ")", "", "");
																				freeRecord((yyvsp[-1].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2469 "y.tab.c"
    break;

  case 125: /* for_expression: for_assignment ';' evaluation ';' assignment  */
#line 556 "parser.y"
                                                                                                {char * s = cat((yyvsp[-4].rec)->code, ";", (yyvsp[-2].rec)->code, ";", (yyvsp[0].rec)->code);
																				freeRecord((yyvsp[-4].rec));
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2480 "y.tab.c"
    break;

  case 126: /* for_assignment: id '=' expression  */
#line 565 "parser.y"
                                                                                                                                {char * s = cat((yyvsp[-2].rec)->code, "=", (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2490 "y.tab.c"
    break;

  case 127: /* for_assignment: TYPE id '=' expression  */
#line 570 "parser.y"
                                                                                                                                        {char * s = cat(convert((yyvsp[-3].sValue)), " ", (yyvsp[-2].rec)->code, "=", (yyvsp[0].rec)->code);
																				free((yyvsp[-3].sValue));
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2501 "y.tab.c"
    break;

  case 128: /* return: RETURN expression  */
#line 578 "parser.y"
                                                                                                                                        {char * s = cat("return ", (yyvsp[0].rec)->code, "", "", "");
																				(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
																				freeRecord((yyvsp[0].rec));
																				free(s);}
#line 2510 "y.tab.c"
    break;


#line 2514 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 584 "parser.y"


int main(int argc, char ** argv){
	int codigo;

	if (argc != 3) {
       printf("Usage: $./compiler input.txt output.txt\nClosing application...\n");
       exit(0);
    }
    
    yyin = fopen(argv[1], "r");
    yyout = fopen(argv[2], "w");

    codigo = yyparse();

    fclose(yyin);
    fclose(yyout);

	return codigo;
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
	if (strcmp(type, "string")) {
		char * output = "string";
		return output;
	};
	if (strcmp(type, "int")) {
		char * output = "int";
		return output;
	};
	if (strcmp(type, "char")) {
		char * output = "char";
		return output;
	};
	if (strcmp(type, "boolean")) {
		char * output = "bool";
		return output;
	};
	if (strcmp(type, "real")) {
		char * output = "float";
		return output;
	};
	return type;
}
