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
#include "record.h"

int yylex(void);
int yyerror(char *s);
int yywrap();
extern int yylineno;
extern char * yytext;
extern FILE * yyin, * yyout;

char * cat(char *, char *, char *, char *, char *);
char * convert(char * type);


#line 115 "y.tab.c"

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
    PRINT = 266,                   /* PRINT  */
    READ = 267,                    /* READ  */
    NULO = 268,                    /* NULO  */
    CONSTANT = 269,                /* CONSTANT  */
    MAIN_FUN = 270,                /* MAIN_FUN  */
    FUNCTION = 271,                /* FUNCTION  */
    FOR = 272,                     /* FOR  */
    WHILE = 273,                   /* WHILE  */
    IF = 274,                      /* IF  */
    ELSE_IF = 275,                 /* ELSE_IF  */
    ELSE = 276,                    /* ELSE  */
    SWITCH = 277,                  /* SWITCH  */
    CASE = 278,                    /* CASE  */
    DEFAULT = 279,                 /* DEFAULT  */
    BREAK = 280,                   /* BREAK  */
    RETURN = 281,                  /* RETURN  */
    PLUS_ASSIGN = 282,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 283,            /* MINUS_ASSIGN  */
    DIV_ASSIGN = 284,              /* DIV_ASSIGN  */
    TIMES_ASSIGN = 285,            /* TIMES_ASSIGN  */
    DOUBLE_PLUS = 286,             /* DOUBLE_PLUS  */
    DOUBLE_MINUS = 287,            /* DOUBLE_MINUS  */
    POWER = 288,                   /* POWER  */
    AND = 289,                     /* AND  */
    OR = 290,                      /* OR  */
    EOR = 291,                     /* EOR  */
    EQUAL = 292,                   /* EQUAL  */
    NOT_EQUAL = 293,               /* NOT_EQUAL  */
    EQ_GREATER = 294,              /* EQ_GREATER  */
    EQ_SMALLER = 295               /* EQ_SMALLER  */
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
#line 45 "parser.y"

	char * sValue; 
	struct record * rec;

#line 253 "y.tab.c"

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
  YYSYMBOL_PRINT = 11,                     /* PRINT  */
  YYSYMBOL_READ = 12,                      /* READ  */
  YYSYMBOL_NULO = 13,                      /* NULO  */
  YYSYMBOL_CONSTANT = 14,                  /* CONSTANT  */
  YYSYMBOL_MAIN_FUN = 15,                  /* MAIN_FUN  */
  YYSYMBOL_FUNCTION = 16,                  /* FUNCTION  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_WHILE = 18,                     /* WHILE  */
  YYSYMBOL_IF = 19,                        /* IF  */
  YYSYMBOL_ELSE_IF = 20,                   /* ELSE_IF  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_SWITCH = 22,                    /* SWITCH  */
  YYSYMBOL_CASE = 23,                      /* CASE  */
  YYSYMBOL_DEFAULT = 24,                   /* DEFAULT  */
  YYSYMBOL_BREAK = 25,                     /* BREAK  */
  YYSYMBOL_RETURN = 26,                    /* RETURN  */
  YYSYMBOL_PLUS_ASSIGN = 27,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 28,              /* MINUS_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 29,                /* DIV_ASSIGN  */
  YYSYMBOL_TIMES_ASSIGN = 30,              /* TIMES_ASSIGN  */
  YYSYMBOL_DOUBLE_PLUS = 31,               /* DOUBLE_PLUS  */
  YYSYMBOL_DOUBLE_MINUS = 32,              /* DOUBLE_MINUS  */
  YYSYMBOL_POWER = 33,                     /* POWER  */
  YYSYMBOL_AND = 34,                       /* AND  */
  YYSYMBOL_OR = 35,                        /* OR  */
  YYSYMBOL_EOR = 36,                       /* EOR  */
  YYSYMBOL_EQUAL = 37,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 38,                 /* NOT_EQUAL  */
  YYSYMBOL_EQ_GREATER = 39,                /* EQ_GREATER  */
  YYSYMBOL_EQ_SMALLER = 40,                /* EQ_SMALLER  */
  YYSYMBOL_41_ = 41,                       /* ';'  */
  YYSYMBOL_42_ = 42,                       /* ','  */
  YYSYMBOL_43_ = 43,                       /* '='  */
  YYSYMBOL_44_ = 44,                       /* '['  */
  YYSYMBOL_45_ = 45,                       /* ']'  */
  YYSYMBOL_46_ = 46,                       /* '+'  */
  YYSYMBOL_47_ = 47,                       /* '-'  */
  YYSYMBOL_48_ = 48,                       /* '*'  */
  YYSYMBOL_49_ = 49,                       /* '/'  */
  YYSYMBOL_50_ = 50,                       /* '%'  */
  YYSYMBOL_51_ = 51,                       /* '('  */
  YYSYMBOL_52_ = 52,                       /* ')'  */
  YYSYMBOL_53_ = 53,                       /* '{'  */
  YYSYMBOL_54_ = 54,                       /* '}'  */
  YYSYMBOL_55_ = 55,                       /* '!'  */
  YYSYMBOL_56_ = 56,                       /* '>'  */
  YYSYMBOL_57_ = 57,                       /* '<'  */
  YYSYMBOL_58_ = 58,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 59,                  /* $accept  */
  YYSYMBOL_program = 60,                   /* program  */
  YYSYMBOL_declarations_section = 61,      /* declarations_section  */
  YYSYMBOL_declarations_list = 62,         /* declarations_list  */
  YYSYMBOL_declaration = 63,               /* declaration  */
  YYSYMBOL_id_list = 64,                   /* id_list  */
  YYSYMBOL_id_declaration = 65,            /* id_declaration  */
  YYSYMBOL_id = 66,                        /* id  */
  YYSYMBOL_dimensions = 67,                /* dimensions  */
  YYSYMBOL_dimensions_novalue = 68,        /* dimensions_novalue  */
  YYSYMBOL_dimensions_value = 69,          /* dimensions_value  */
  YYSYMBOL_expression = 70,                /* expression  */
  YYSYMBOL_expression_operator = 71,       /* expression_operator  */
  YYSYMBOL_term = 72,                      /* term  */
  YYSYMBOL_term_operator = 73,             /* term_operator  */
  YYSYMBOL_factor = 74,                    /* factor  */
  YYSYMBOL_base = 75,                      /* base  */
  YYSYMBOL_literal = 76,                   /* literal  */
  YYSYMBOL_id_value = 77,                  /* id_value  */
  YYSYMBOL_function_call = 78,             /* function_call  */
  YYSYMBOL_arguments = 79,                 /* arguments  */
  YYSYMBOL_arguments_list = 80,            /* arguments_list  */
  YYSYMBOL_argument = 81,                  /* argument  */
  YYSYMBOL_double_sign = 82,               /* double_sign  */
  YYSYMBOL_subprograms_section = 83,       /* subprograms_section  */
  YYSYMBOL_subprogram = 84,                /* subprogram  */
  YYSYMBOL_header = 85,                    /* header  */
  YYSYMBOL_signature = 86,                 /* signature  */
  YYSYMBOL_subprogram_type = 87,           /* subprogram_type  */
  YYSYMBOL_subprogram_id = 88,             /* subprogram_id  */
  YYSYMBOL_parameters = 89,                /* parameters  */
  YYSYMBOL_parameter_list = 90,            /* parameter_list  */
  YYSYMBOL_parameter = 91,                 /* parameter  */
  YYSYMBOL_block = 92,                     /* block  */
  YYSYMBOL_body = 93,                      /* body  */
  YYSYMBOL_statement_list = 94,            /* statement_list  */
  YYSYMBOL_statement = 95,                 /* statement  */
  YYSYMBOL_assignment = 96,                /* assignment  */
  YYSYMBOL_assignment_operation = 97,      /* assignment_operation  */
  YYSYMBOL_assignment_sign = 98,           /* assignment_sign  */
  YYSYMBOL_evaluation = 99,                /* evaluation  */
  YYSYMBOL_comparation = 100,              /* comparation  */
  YYSYMBOL_comparison = 101,               /* comparison  */
  YYSYMBOL_compare = 102,                  /* compare  */
  YYSYMBOL_evaluation_operator = 103,      /* evaluation_operator  */
  YYSYMBOL_logic_operator = 104,           /* logic_operator  */
  YYSYMBOL_print = 105,                    /* print  */
  YYSYMBOL_read = 106,                     /* read  */
  YYSYMBOL_conditional = 107,              /* conditional  */
  YYSYMBOL_if_else = 108,                  /* if_else  */
  YYSYMBOL_if = 109,                       /* if  */
  YYSYMBOL_else_section = 110,             /* else_section  */
  YYSYMBOL_else_if = 111,                  /* else_if  */
  YYSYMBOL_else = 112,                     /* else  */
  YYSYMBOL_switch_case = 113,              /* switch_case  */
  YYSYMBOL_switch = 114,                   /* switch  */
  YYSYMBOL_case_section = 115,             /* case_section  */
  YYSYMBOL_case = 116,                     /* case  */
  YYSYMBOL_default_section = 117,          /* default_section  */
  YYSYMBOL_default = 118,                  /* default  */
  YYSYMBOL_loop = 119,                     /* loop  */
  YYSYMBOL_while = 120,                    /* while  */
  YYSYMBOL_for = 121,                      /* for  */
  YYSYMBOL_for_structure = 122,            /* for_structure  */
  YYSYMBOL_for_expression = 123,           /* for_expression  */
  YYSYMBOL_for_assignment = 124,           /* for_assignment  */
  YYSYMBOL_return = 125                    /* return  */
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
#define YYLAST   206

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  212

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
       0,    74,    74,    79,    80,    83,    87,    94,    99,   107,
     108,   116,   117,   124,   131,   132,   133,   136,   137,   142,
     145,   153,   159,   162,   163,   168,   174,   177,   178,   179,
     183,   188,   191,   195,   196,   197,   204,   206,   208,   210,
     212,   216,   217,   220,   227,   228,   231,   232,   239,   240,
     241,   244,   245,   248,   249,   256,   263,   269,   277,   279,
     282,   284,   287,   288,   291,   292,   299,   306,   312,   313,
     314,   319,   322,   326,   333,   334,   335,   336,   337,   338,
     339,   342,   349,   354,   357,   358,   359,   360,   361,   364,
     365,   373,   374,   380,   384,   387,   395,   396,   397,   398,
     399,   400,   403,   404,   405,   408,   411,   414,   415,   418,
     425,   432,   433,   438,   441,   448,   454,   462,   468,   469,
     476,   483,   484,   487,   493,   494,   497,   504,   511,   517,
     526,   531,   539
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
  "BOOLEAN", "CHAR", "STRING", "VOID", "TYPE", "PRINT", "READ", "NULO",
  "CONSTANT", "MAIN_FUN", "FUNCTION", "FOR", "WHILE", "IF", "ELSE_IF",
  "ELSE", "SWITCH", "CASE", "DEFAULT", "BREAK", "RETURN", "PLUS_ASSIGN",
  "MINUS_ASSIGN", "DIV_ASSIGN", "TIMES_ASSIGN", "DOUBLE_PLUS",
  "DOUBLE_MINUS", "POWER", "AND", "OR", "EOR", "EQUAL", "NOT_EQUAL",
  "EQ_GREATER", "EQ_SMALLER", "';'", "','", "'='", "'['", "']'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'('", "')'", "'{'", "'}'", "'!'", "'>'",
  "'<'", "':'", "$accept", "program", "declarations_section",
  "declarations_list", "declaration", "id_list", "id_declaration", "id",
  "dimensions", "dimensions_novalue", "dimensions_value", "expression",
  "expression_operator", "term", "term_operator", "factor", "base",
  "literal", "id_value", "function_call", "arguments", "arguments_list",
  "argument", "double_sign", "subprograms_section", "subprogram", "header",
  "signature", "subprogram_type", "subprogram_id", "parameters",
  "parameter_list", "parameter", "block", "body", "statement_list",
  "statement", "assignment", "assignment_operation", "assignment_sign",
  "evaluation", "comparation", "comparison", "compare",
  "evaluation_operator", "logic_operator", "print", "read", "conditional",
  "if_else", "if", "else_section", "else_if", "else", "switch_case",
  "switch", "case_section", "case", "default_section", "default", "loop",
  "while", "for", "for_structure", "for_expression", "for_assignment",
  "return", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-125)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,    24,    72,    83,    69,  -125,    45,    43,  -125,    48,
      50,    24,  -125,     8,  -125,    69,    41,     5,     7,  -125,
    -125,  -125,    24,    27,  -125,  -125,  -125,  -125,    11,  -125,
     104,  -125,  -125,    57,    51,  -125,   -28,  -125,  -125,  -125,
    -125,  -125,    27,  -125,    12,    17,  -125,    70,  -125,    42,
    -125,  -125,  -125,    53,    74,    76,    77,     9,    86,    88,
    -125,    27,    25,    81,    66,  -125,    99,  -125,  -125,  -125,
    -125,  -125,    28,  -125,    89,  -125,  -125,  -125,  -125,   106,
      98,  -125,   128,    -6,  -125,  -125,    27,  -125,  -125,  -125,
      27,    27,  -125,  -125,  -125,   142,   143,   150,    35,    41,
      24,     6,    32,    41,    19,  -125,  -125,     9,   151,    12,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,    27,  -125,
      25,   105,    41,  -125,    28,  -125,   132,   154,  -125,  -125,
    -125,  -125,   107,  -125,   118,  -125,    17,  -125,  -125,    24,
     109,  -125,   121,   112,   113,    24,   123,   116,   129,  -125,
     117,  -125,  -125,  -125,  -125,  -125,  -125,  -125,    27,  -125,
    -125,  -125,  -125,     9,   119,   120,    12,  -125,     9,  -125,
    -125,   141,   149,   132,  -125,   128,  -125,  -125,   142,  -125,
    -125,   133,    27,  -125,     9,  -125,    12,  -125,    41,  -125,
     125,   122,   124,   127,  -125,  -125,  -125,  -125,    27,    12,
     134,  -125,    41,   104,   104,  -125,    12,    24,  -125,  -125,
    -125,  -125
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
      42,    60,    61,     0,     0,     0,     0,     0,     0,     0,
      80,     0,    69,     0,     0,    71,     0,    74,    75,    76,
      77,   107,   111,   108,     0,    78,   124,   125,    79,    19,
       0,    18,    44,     0,    23,    24,     0,    27,    28,    29,
       0,     0,    51,    52,    35,    62,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    91,    94,     0,     0,   132,
      70,    85,    86,    87,    88,    84,    83,    81,     0,    67,
      72,     0,     0,   109,   111,   113,     0,     0,    20,    48,
      49,    50,     0,    45,    46,    32,    21,    25,    30,     0,
       0,    63,    64,     0,     0,     0,     0,     0,     0,   127,
       0,    92,    96,    97,   100,   101,    98,    99,     0,   126,
     102,   103,   104,     0,     0,     0,    82,    73,     0,   115,
     112,     0,   121,   118,    43,     0,    66,    57,     0,   105,
     106,     0,     0,   128,     0,    93,    95,    90,     0,   117,
       0,     0,     0,     0,   122,   119,    47,    65,     0,   130,
       0,   110,     0,    68,    68,   116,   131,     0,   114,   120,
     123,   129
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,  -125,    22,  -125,     2,   -77,    -1,  -125,   144,
     100,   -41,  -125,   101,  -125,   -15,  -125,   -79,    78,   -74,
    -125,    10,  -125,   126,   169,  -125,  -125,  -125,  -125,  -125,
    -125,    13,  -125,   -97,  -124,   -58,  -125,   -19,  -125,  -125,
    -100,  -125,    91,    90,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,    71,  -125,  -125,  -125,  -125,    20,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,    62,     6,     8,     9,    43,    19,    20,
      21,    44,    86,    45,    90,    46,    47,    48,    49,    50,
     132,   133,   134,    94,    14,    15,    16,    27,    28,    53,
     140,   141,   142,    31,    64,    65,    66,    67,   117,   118,
     103,   104,   105,   106,   158,   163,    68,    69,    70,    71,
      72,   123,   124,   125,    73,    74,   172,   173,   193,   194,
      75,    76,    77,    99,   147,   148,    78
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      10,    83,   149,   130,   110,   129,   159,   164,   131,     7,
      10,    33,     7,    24,    51,     1,    18,    25,    26,     2,
     109,    10,     5,    82,    35,   169,    52,     7,     7,    63,
      36,    37,    38,    39,    40,    41,    54,    55,     7,    32,
      84,    85,    56,    57,    58,   145,   135,    59,   121,   122,
      60,    61,    34,   160,   161,   162,   102,   100,    84,    85,
     100,    63,   167,   187,   101,    87,    88,    89,   190,   152,
     153,   154,   155,    92,    93,   137,   138,   166,    42,   209,
     210,    10,    11,    12,   200,    13,    17,    18,   156,   157,
      22,   201,   191,    23,    30,    80,   130,   146,   129,   102,
     102,   131,    79,    91,    95,   208,   102,     7,   111,   112,
     113,   114,    92,    93,     1,    54,    55,   186,     2,    63,
     119,    56,    57,    58,   115,    96,    59,    97,    98,    60,
      61,    36,    37,    38,    39,    40,    41,   107,   176,   108,
     120,   199,   126,    34,   181,    37,    38,    39,    40,    41,
     127,   143,   139,   144,    36,   171,   168,   206,    33,   174,
     175,   177,   102,   178,   179,   180,   182,   102,   183,   185,
     184,   188,   189,   192,    10,   207,   198,   202,    81,   128,
     203,   205,   204,   102,    29,   196,   165,   136,   211,   116,
     150,   197,   151,   195,     0,   170,     0,     0,     0,     0,
       0,     0,    63,    63,     0,     0,    63
};

static const yytype_int16 yycheck[] =
{
       1,    42,    99,    82,    62,    82,   103,   107,    82,     3,
      11,     4,     3,    11,     3,    10,    44,     9,    10,    14,
      61,    22,     0,    51,    22,   122,    15,     3,     3,    30,
       3,     4,     5,     6,     7,     8,    11,    12,     3,    17,
      46,    47,    17,    18,    19,    10,    52,    22,    20,    21,
      25,    26,    45,    34,    35,    36,    57,    51,    46,    47,
      51,    62,   120,   163,    55,    48,    49,    50,   168,    37,
      38,    39,    40,    31,    32,    90,    91,   118,    51,   203,
     204,    82,    10,     0,   184,    16,    41,    44,    56,    57,
      42,   188,   171,    43,    53,    44,   175,    98,   175,   100,
     101,   175,    45,    33,    51,   202,   107,     3,    27,    28,
      29,    30,    31,    32,    10,    11,    12,   158,    14,   120,
      54,    17,    18,    19,    43,    51,    22,    51,    51,    25,
      26,     3,     4,     5,     6,     7,     8,    51,   139,    51,
      41,   182,    53,    45,   145,     4,     5,     6,     7,     8,
      44,     8,    10,     3,     3,    23,    51,   198,     4,    52,
      42,    52,   163,    42,    52,    52,    43,   168,    52,    52,
      41,    52,    52,    24,   175,    41,    43,    52,    34,    79,
      58,    54,    58,   184,    15,   175,   108,    86,   207,    63,
     100,   178,   101,   173,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,   203,   204,    -1,    -1,   207
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    14,    60,    61,    62,    63,     3,    64,    65,
      66,    10,     0,    16,    83,    84,    85,    41,    44,    67,
      68,    69,    42,    43,    64,     9,    10,    86,    87,    83,
      53,    92,    62,     4,    45,    64,     3,     4,     5,     6,
       7,     8,    51,    66,    70,    72,    74,    75,    76,    77,
      78,     3,    15,    88,    11,    12,    17,    18,    19,    22,
      25,    26,    62,    66,    93,    94,    95,    96,   105,   106,
     107,   108,   109,   113,   114,   119,   120,   121,   125,    45,
      44,    68,    51,    70,    46,    47,    71,    48,    49,    50,
      73,    33,    31,    32,    82,    51,    51,    51,    51,   122,
      51,    55,    66,    99,   100,   101,   102,    51,    51,    70,
      94,    27,    28,    29,    30,    43,    82,    97,    98,    54,
      41,    20,    21,   110,   111,   112,    53,    44,    69,    65,
      76,    78,    79,    80,    81,    52,    72,    74,    74,    10,
      89,    90,    91,     8,     3,    10,    66,   123,   124,    92,
     102,   101,    37,    38,    39,    40,    56,    57,   103,    92,
      34,    35,    36,   104,    99,    77,    70,    94,    51,    92,
     110,    23,   115,   116,    52,    42,    66,    52,    42,    52,
      52,    66,    43,    52,    41,    52,    70,    99,    52,    52,
      99,    76,    24,   117,   118,   115,    80,    90,    43,    70,
      99,    92,    52,    58,    58,    54,    70,    41,    92,    93,
      93,    96
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    60,    61,    61,    62,    62,    63,    63,    64,
      64,    65,    65,    66,    67,    67,    67,    68,    68,    69,
      69,    70,    70,    71,    71,    72,    72,    73,    73,    73,
      74,    74,    75,    75,    75,    75,    76,    76,    76,    76,
      76,    77,    77,    78,    79,    79,    80,    80,    81,    81,
      81,    82,    82,    83,    83,    84,    85,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    91,    92,    93,    93,
      93,    93,    94,    94,    95,    95,    95,    95,    95,    95,
      95,    96,    97,    97,    98,    98,    98,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   103,   103,   103,   103,
     103,   103,   104,   104,   104,   105,   106,   107,   107,   108,
     109,   110,   110,   110,   111,   112,   113,   114,   115,   115,
     116,   117,   117,   118,   119,   119,   120,   121,   122,   123,
     124,   124,   125
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
       2,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     1,     1,     2,
       5,     0,     2,     1,     5,     2,     5,     4,     1,     2,
       4,     0,     1,     3,     1,     1,     3,     3,     3,     5,
       3,     4,     2
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
#line 74 "parser.y"
                                                                                                                {fprintf(yyout, "%s\n%s", (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code);
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));}
#line 1524 "y.tab.c"
    break;

  case 3: /* declarations_section: %empty  */
#line 79 "parser.y"
                                                                                                                                        {(yyval.rec) = createRecord("","");}
#line 1530 "y.tab.c"
    break;

  case 4: /* declarations_section: declarations_list  */
#line 80 "parser.y"
                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1536 "y.tab.c"
    break;

  case 5: /* declarations_list: declaration ';'  */
#line 83 "parser.y"
                                                                                                                                {char * s = cat((yyvsp[-1].rec)->code, ";\n", "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1545 "y.tab.c"
    break;

  case 6: /* declarations_list: declaration ';' declarations_list  */
#line 87 "parser.y"
                                                                                                                {char * s = cat((yyvsp[-2].rec)->code, ";\n", (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1555 "y.tab.c"
    break;

  case 7: /* declaration: TYPE id_list  */
#line 94 "parser.y"
                                                                                                                                        {char * s = cat(convert((yyvsp[-1].sValue)), " ", (yyvsp[0].rec)->code, "", "");
																				free((yyvsp[-1].sValue));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1565 "y.tab.c"
    break;

  case 8: /* declaration: CONSTANT TYPE id_list  */
#line 99 "parser.y"
                                                                                                                                        {char * s = cat("const ", convert((yyvsp[-1].sValue)), " ", (yyvsp[0].rec)->code, "");
																				free((yyvsp[-1].sValue));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1575 "y.tab.c"
    break;

  case 9: /* id_list: id_declaration  */
#line 107 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1581 "y.tab.c"
    break;

  case 10: /* id_list: id_declaration ',' id_list  */
#line 108 "parser.y"
                                                                                                                                {char * s = cat((yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1591 "y.tab.c"
    break;

  case 11: /* id_declaration: id  */
#line 116 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1597 "y.tab.c"
    break;

  case 12: /* id_declaration: id '=' expression  */
#line 117 "parser.y"
                                                                                                                                        {char * s = cat((yyvsp[-2].rec)->code, "=", (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1607 "y.tab.c"
    break;

  case 13: /* id: ID dimensions  */
#line 124 "parser.y"
                                                                                                                                                {char * s = cat((yyvsp[-1].sValue), " ", (yyvsp[0].rec)->code, "", "");
																				free((yyvsp[-1].sValue));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1617 "y.tab.c"
    break;

  case 14: /* dimensions: %empty  */
#line 131 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord("","");}
#line 1623 "y.tab.c"
    break;

  case 15: /* dimensions: dimensions_novalue  */
#line 132 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1629 "y.tab.c"
    break;

  case 16: /* dimensions: dimensions_value  */
#line 133 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1635 "y.tab.c"
    break;

  case 17: /* dimensions_novalue: '[' ']'  */
#line 136 "parser.y"
                                                                                                                                {(yyval.rec) = createRecord("[]", "");}
#line 1641 "y.tab.c"
    break;

  case 18: /* dimensions_novalue: '[' ']' dimensions_novalue  */
#line 137 "parser.y"
                                                                                                                                {char * s = cat("[]", (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");}
#line 1649 "y.tab.c"
    break;

  case 19: /* dimensions_value: '[' INT ']'  */
#line 142 "parser.y"
                                                                                                                                {char * s = cat("[", (yyvsp[-1].sValue), "]", "", "");
																				free((yyvsp[-1].sValue));
																				(yyval.rec) = createRecord(s, "");}
#line 1657 "y.tab.c"
    break;

  case 20: /* dimensions_value: '[' INT ']' dimensions_value  */
#line 145 "parser.y"
                                                                                                                        {char * s = cat("[", (yyvsp[-2].sValue), "]", (yyvsp[0].rec)->code, "");
																				free((yyvsp[-2].sValue));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");}
#line 1666 "y.tab.c"
    break;

  case 21: /* expression: expression expression_operator term  */
#line 153 "parser.y"
                                                                                                                {char * s = cat((yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1677 "y.tab.c"
    break;

  case 22: /* expression: term  */
#line 159 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1683 "y.tab.c"
    break;

  case 23: /* expression_operator: '+'  */
#line 162 "parser.y"
                                                                                                                                        {(yyval.rec) = createRecord("+", "");}
#line 1689 "y.tab.c"
    break;

  case 24: /* expression_operator: '-'  */
#line 163 "parser.y"
                                                                                                                                                        {(yyval.rec) = createRecord("-", "");}
#line 1695 "y.tab.c"
    break;

  case 25: /* term: term term_operator factor  */
#line 168 "parser.y"
                                                                                                                                {char * s = cat((yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1706 "y.tab.c"
    break;

  case 26: /* term: factor  */
#line 174 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1712 "y.tab.c"
    break;

  case 27: /* term_operator: '*'  */
#line 177 "parser.y"
                                                                                                                                        {(yyval.rec) = createRecord("*", "");}
#line 1718 "y.tab.c"
    break;

  case 28: /* term_operator: '/'  */
#line 178 "parser.y"
                                                                                                                                                        {(yyval.rec) = createRecord("/", "");}
#line 1724 "y.tab.c"
    break;

  case 29: /* term_operator: '%'  */
#line 179 "parser.y"
                                                                                                                                                        {(yyval.rec) = createRecord("%", "");}
#line 1730 "y.tab.c"
    break;

  case 30: /* factor: base POWER factor  */
#line 183 "parser.y"
                                                                                                                                        {char * s = cat("pow(", (yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, ")");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1740 "y.tab.c"
    break;

  case 31: /* factor: base  */
#line 188 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1746 "y.tab.c"
    break;

  case 32: /* base: '(' expression ')'  */
#line 191 "parser.y"
                                                                                                                                        {char * s = cat("(", (yyvsp[-1].rec)->code, ")", "", "");
																				(yyval.rec) = createRecord(s, (yyvsp[-1].rec)->type);
																				freeRecord((yyvsp[-1].rec));
																				free(s);}
#line 1755 "y.tab.c"
    break;

  case 33: /* base: literal  */
#line 195 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1761 "y.tab.c"
    break;

  case 34: /* base: id_value  */
#line 196 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1767 "y.tab.c"
    break;

  case 35: /* base: id_value double_sign  */
#line 197 "parser.y"
                                                                                                                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, (yyvsp[-1].rec)->type);
																				free(s);}
#line 1777 "y.tab.c"
    break;

  case 36: /* literal: INT  */
#line 204 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord((yyvsp[0].sValue), "");
																				free((yyvsp[0].sValue));}
#line 1784 "y.tab.c"
    break;

  case 37: /* literal: REAL  */
#line 206 "parser.y"
                                                                                                                                                        {(yyval.rec) = createRecord((yyvsp[0].sValue), "");
																				free((yyvsp[0].sValue));}
#line 1791 "y.tab.c"
    break;

  case 38: /* literal: BOOLEAN  */
#line 208 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord((yyvsp[0].sValue), "");
																				free((yyvsp[0].sValue));}
#line 1798 "y.tab.c"
    break;

  case 39: /* literal: CHAR  */
#line 210 "parser.y"
                                                                                                                                                        {(yyval.rec) = createRecord((yyvsp[0].sValue), "");
																				free((yyvsp[0].sValue));}
#line 1805 "y.tab.c"
    break;

  case 40: /* literal: STRING  */
#line 212 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord((yyvsp[0].sValue), "");
																				free((yyvsp[0].sValue));}
#line 1812 "y.tab.c"
    break;

  case 41: /* id_value: id  */
#line 216 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1818 "y.tab.c"
    break;

  case 42: /* id_value: function_call  */
#line 217 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1824 "y.tab.c"
    break;

  case 43: /* function_call: ID '(' arguments ')'  */
#line 220 "parser.y"
                                                                                                                        {char * s = cat((yyvsp[-3].sValue), "(", (yyvsp[-1].rec)->code, ")", "");
																				free((yyvsp[-3].sValue));
																				freeRecord((yyvsp[-1].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1834 "y.tab.c"
    break;

  case 44: /* arguments: %empty  */
#line 227 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord("","");}
#line 1840 "y.tab.c"
    break;

  case 45: /* arguments: arguments_list  */
#line 228 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1846 "y.tab.c"
    break;

  case 46: /* arguments_list: argument  */
#line 231 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1852 "y.tab.c"
    break;

  case 47: /* arguments_list: argument ',' arguments_list  */
#line 232 "parser.y"
                                                                                                                                {char * s = cat((yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1862 "y.tab.c"
    break;

  case 48: /* argument: id_declaration  */
#line 239 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1868 "y.tab.c"
    break;

  case 49: /* argument: literal  */
#line 240 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1874 "y.tab.c"
    break;

  case 50: /* argument: function_call  */
#line 241 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1880 "y.tab.c"
    break;

  case 51: /* double_sign: DOUBLE_PLUS  */
#line 244 "parser.y"
                                                                                                                                        {(yyval.rec) = createRecord("++", "");}
#line 1886 "y.tab.c"
    break;

  case 52: /* double_sign: DOUBLE_MINUS  */
#line 245 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord("--", "");}
#line 1892 "y.tab.c"
    break;

  case 53: /* subprograms_section: subprogram  */
#line 248 "parser.y"
                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 1898 "y.tab.c"
    break;

  case 54: /* subprograms_section: subprogram subprograms_section  */
#line 249 "parser.y"
                                                                                                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1908 "y.tab.c"
    break;

  case 55: /* subprogram: header block  */
#line 256 "parser.y"
                                                                                                                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1918 "y.tab.c"
    break;

  case 56: /* header: FUNCTION signature  */
#line 263 "parser.y"
                                                                                                                                        {char * s = cat((yyvsp[0].rec)->code, "", "", "", "");
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1927 "y.tab.c"
    break;

  case 57: /* signature: subprogram_type subprogram_id '(' parameters ')'  */
#line 269 "parser.y"
                                                                                                {char * s = cat((yyvsp[-4].rec)->code, (yyvsp[-3].rec)->code, "(", (yyvsp[-1].rec)->code, ")");
																				freeRecord((yyvsp[-4].rec));
																				freeRecord((yyvsp[-3].rec));
																				freeRecord((yyvsp[-1].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1938 "y.tab.c"
    break;

  case 58: /* subprogram_type: TYPE  */
#line 277 "parser.y"
                                                                                                                                        {(yyval.rec) = createRecord(convert((yyvsp[0].sValue)), "");
																				free((yyvsp[0].sValue));}
#line 1945 "y.tab.c"
    break;

  case 59: /* subprogram_type: VOID  */
#line 279 "parser.y"
                                                                                                                                                        {(yyval.rec) = createRecord("void", "");}
#line 1951 "y.tab.c"
    break;

  case 60: /* subprogram_id: ID  */
#line 282 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord((yyvsp[0].sValue), "");
																				free((yyvsp[0].sValue));}
#line 1958 "y.tab.c"
    break;

  case 61: /* subprogram_id: MAIN_FUN  */
#line 284 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord("main", "");}
#line 1964 "y.tab.c"
    break;

  case 62: /* parameters: %empty  */
#line 287 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord("","");}
#line 1970 "y.tab.c"
    break;

  case 63: /* parameters: parameter_list  */
#line 288 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1976 "y.tab.c"
    break;

  case 64: /* parameter_list: parameter  */
#line 291 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 1982 "y.tab.c"
    break;

  case 65: /* parameter_list: parameter ',' parameter_list  */
#line 292 "parser.y"
                                                                                                                        {char * s = cat((yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 1992 "y.tab.c"
    break;

  case 66: /* parameter: TYPE id  */
#line 299 "parser.y"
                                                                                                                                        {char * s = cat(convert((yyvsp[-1].sValue)), (yyvsp[0].rec)->code, "", "", "");
																				free((yyvsp[-1].sValue));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2002 "y.tab.c"
    break;

  case 67: /* block: '{' body '}'  */
#line 306 "parser.y"
                                                                                                                                        {char * s = cat("{", (yyvsp[-1].rec)->code, "}", "", "");
																				freeRecord((yyvsp[-1].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2011 "y.tab.c"
    break;

  case 68: /* body: %empty  */
#line 312 "parser.y"
                                                                                                                                                        {(yyval.rec) = createRecord("","");}
#line 2017 "y.tab.c"
    break;

  case 69: /* body: declarations_list  */
#line 313 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2023 "y.tab.c"
    break;

  case 70: /* body: declarations_list statement_list  */
#line 314 "parser.y"
                                                                                                                                {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2033 "y.tab.c"
    break;

  case 71: /* body: statement_list  */
#line 319 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 2039 "y.tab.c"
    break;

  case 72: /* statement_list: statement ';'  */
#line 322 "parser.y"
                                                                                                                                {char * s = cat((yyvsp[-1].rec)->code, ";\n", "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2048 "y.tab.c"
    break;

  case 73: /* statement_list: statement ';' statement_list  */
#line 326 "parser.y"
                                                                                                                        {char * s = cat((yyvsp[-2].rec)->code, ";\n", (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2058 "y.tab.c"
    break;

  case 74: /* statement: assignment  */
#line 333 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2064 "y.tab.c"
    break;

  case 75: /* statement: print  */
#line 334 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2070 "y.tab.c"
    break;

  case 76: /* statement: read  */
#line 335 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2076 "y.tab.c"
    break;

  case 77: /* statement: conditional  */
#line 336 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 2082 "y.tab.c"
    break;

  case 78: /* statement: loop  */
#line 337 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2088 "y.tab.c"
    break;

  case 79: /* statement: return  */
#line 338 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2094 "y.tab.c"
    break;

  case 80: /* statement: BREAK  */
#line 339 "parser.y"
                                                                                                                                                        {(yyval.rec) = createRecord("break", "");}
#line 2100 "y.tab.c"
    break;

  case 81: /* assignment: id assignment_operation  */
#line 342 "parser.y"
                                                                                                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2110 "y.tab.c"
    break;

  case 82: /* assignment_operation: assignment_sign expression  */
#line 349 "parser.y"
                                                                                                                {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2120 "y.tab.c"
    break;

  case 83: /* assignment_operation: double_sign  */
#line 354 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 2126 "y.tab.c"
    break;

  case 84: /* assignment_sign: '='  */
#line 357 "parser.y"
                                                                                                                                        {(yyval.rec) = createRecord("=", "");}
#line 2132 "y.tab.c"
    break;

  case 85: /* assignment_sign: PLUS_ASSIGN  */
#line 358 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord("+=", "");}
#line 2138 "y.tab.c"
    break;

  case 86: /* assignment_sign: MINUS_ASSIGN  */
#line 359 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord("-=", "");}
#line 2144 "y.tab.c"
    break;

  case 87: /* assignment_sign: DIV_ASSIGN  */
#line 360 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord("/=", "");}
#line 2150 "y.tab.c"
    break;

  case 88: /* assignment_sign: TIMES_ASSIGN  */
#line 361 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord("*=", "");}
#line 2156 "y.tab.c"
    break;

  case 89: /* evaluation: comparation  */
#line 364 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2162 "y.tab.c"
    break;

  case 90: /* evaluation: comparation logic_operator evaluation  */
#line 365 "parser.y"
                                                                                                                        {char * s = cat((yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2173 "y.tab.c"
    break;

  case 91: /* comparation: comparison  */
#line 373 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2179 "y.tab.c"
    break;

  case 92: /* comparation: '!' comparison  */
#line 374 "parser.y"
                                                                                                                                                {char * s = cat("!", (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2188 "y.tab.c"
    break;

  case 93: /* comparison: '(' compare ')'  */
#line 380 "parser.y"
                                                                                                                                {char * s = cat("(", (yyvsp[-1].rec)->code, ")", "", "");
																				freeRecord((yyvsp[-1].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2197 "y.tab.c"
    break;

  case 94: /* comparison: compare  */
#line 384 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 2203 "y.tab.c"
    break;

  case 95: /* compare: id evaluation_operator expression  */
#line 387 "parser.y"
                                                                                                                {char * s = cat((yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2214 "y.tab.c"
    break;

  case 96: /* evaluation_operator: EQUAL  */
#line 395 "parser.y"
                                                                                                                                {(yyval.rec) = createRecord("==", "");}
#line 2220 "y.tab.c"
    break;

  case 97: /* evaluation_operator: NOT_EQUAL  */
#line 396 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord("!=", "");}
#line 2226 "y.tab.c"
    break;

  case 98: /* evaluation_operator: '>'  */
#line 397 "parser.y"
                                                                                                                                                        {(yyval.rec) = createRecord(">", "");}
#line 2232 "y.tab.c"
    break;

  case 99: /* evaluation_operator: '<'  */
#line 398 "parser.y"
                                                                                                                                                        {(yyval.rec) = createRecord("<", "");}
#line 2238 "y.tab.c"
    break;

  case 100: /* evaluation_operator: EQ_GREATER  */
#line 399 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord(">=", "");}
#line 2244 "y.tab.c"
    break;

  case 101: /* evaluation_operator: EQ_SMALLER  */
#line 400 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord("<=", "");}
#line 2250 "y.tab.c"
    break;

  case 102: /* logic_operator: AND  */
#line 403 "parser.y"
                                                                                                                                        {(yyval.rec) = createRecord("&&", "");}
#line 2256 "y.tab.c"
    break;

  case 103: /* logic_operator: OR  */
#line 404 "parser.y"
                                                                                                                                                        {(yyval.rec) = createRecord("||", "");}
#line 2262 "y.tab.c"
    break;

  case 104: /* logic_operator: EOR  */
#line 405 "parser.y"
                                                                                                                                                        {(yyval.rec) = createRecord("^", "");}
#line 2268 "y.tab.c"
    break;

  case 105: /* print: PRINT '(' STRING ')'  */
#line 408 "parser.y"
                                                                                                                                {}
#line 2274 "y.tab.c"
    break;

  case 106: /* read: READ '(' ID ')'  */
#line 411 "parser.y"
                                                                                                                                        {}
#line 2280 "y.tab.c"
    break;

  case 107: /* conditional: if_else  */
#line 414 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2286 "y.tab.c"
    break;

  case 108: /* conditional: switch_case  */
#line 415 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 2292 "y.tab.c"
    break;

  case 109: /* if_else: if else_section  */
#line 418 "parser.y"
                                                                                                                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2302 "y.tab.c"
    break;

  case 110: /* if: IF '(' evaluation ')' block  */
#line 425 "parser.y"
                                                                                                                                {char * s = cat("if ", "(", (yyvsp[-2].rec)->code, ")", (yyvsp[0].rec)->code);
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2312 "y.tab.c"
    break;

  case 111: /* else_section: %empty  */
#line 432 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord("","");}
#line 2318 "y.tab.c"
    break;

  case 112: /* else_section: else_if else_section  */
#line 433 "parser.y"
                                                                                                                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2328 "y.tab.c"
    break;

  case 113: /* else_section: else  */
#line 438 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2334 "y.tab.c"
    break;

  case 114: /* else_if: ELSE_IF '(' evaluation ')' block  */
#line 441 "parser.y"
                                                                                                                        {char * s = cat("else if ", "(", (yyvsp[-2].rec)->code, ")", (yyvsp[0].rec)->code);
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2344 "y.tab.c"
    break;

  case 115: /* else: ELSE block  */
#line 448 "parser.y"
                                                                                                                                                {char * s = cat("else ", (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2353 "y.tab.c"
    break;

  case 116: /* switch_case: switch '{' case_section default_section '}'  */
#line 454 "parser.y"
                                                                                                        {char * s = cat((yyvsp[-4].rec)->code, "{", (yyvsp[-2].rec)->code, (yyvsp[-1].rec)->code, "}");
																				freeRecord((yyvsp[-4].rec));
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[-1].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2364 "y.tab.c"
    break;

  case 117: /* switch: SWITCH '(' id_value ')'  */
#line 462 "parser.y"
                                                                                                                                {char * s = cat("switch ", "(", (yyvsp[-1].rec)->code, ")", "");
																				freeRecord((yyvsp[-1].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2373 "y.tab.c"
    break;

  case 118: /* case_section: case  */
#line 468 "parser.y"
                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2379 "y.tab.c"
    break;

  case 119: /* case_section: case case_section  */
#line 469 "parser.y"
                                                                                                                                        {char * s = cat((yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2389 "y.tab.c"
    break;

  case 120: /* case: CASE literal ':' body  */
#line 476 "parser.y"
                                                                                                                                {char * s = cat("case ", (yyvsp[-2].rec)->code, ":", (yyvsp[0].rec)->code, "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2399 "y.tab.c"
    break;

  case 121: /* default_section: %empty  */
#line 483 "parser.y"
                                                                                                                                                {(yyval.rec) = createRecord("","");}
#line 2405 "y.tab.c"
    break;

  case 122: /* default_section: default  */
#line 484 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2411 "y.tab.c"
    break;

  case 123: /* default: DEFAULT ':' body  */
#line 487 "parser.y"
                                                                                                                                        {char * s = cat("default", ":", (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2420 "y.tab.c"
    break;

  case 124: /* loop: while  */
#line 493 "parser.y"
                                                                                                                                                {(yyval.rec) = (yyvsp[0].rec);}
#line 2426 "y.tab.c"
    break;

  case 125: /* loop: for  */
#line 494 "parser.y"
                                                                                                                                                        {(yyval.rec) = (yyvsp[0].rec);}
#line 2432 "y.tab.c"
    break;

  case 126: /* while: WHILE evaluation block  */
#line 497 "parser.y"
                                                                                                                                {char * s = cat("while ", (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2442 "y.tab.c"
    break;

  case 127: /* for: FOR for_structure block  */
#line 504 "parser.y"
                                                                                                                                {char * s = cat("for ", (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-1].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2452 "y.tab.c"
    break;

  case 128: /* for_structure: '(' for_expression ')'  */
#line 511 "parser.y"
                                                                                                                        {char * s = cat("(", (yyvsp[-1].rec)->code, ")", "", "");
																				freeRecord((yyvsp[-1].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2461 "y.tab.c"
    break;

  case 129: /* for_expression: for_assignment ';' evaluation ';' assignment  */
#line 517 "parser.y"
                                                                                                {char * s = cat((yyvsp[-4].rec)->code, ";", (yyvsp[-2].rec)->code, ";", (yyvsp[0].rec)->code);
																				freeRecord((yyvsp[-4].rec));
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2472 "y.tab.c"
    break;

  case 130: /* for_assignment: id '=' expression  */
#line 526 "parser.y"
                                                                                                                                {char * s = cat((yyvsp[-2].rec)->code, "=", (yyvsp[0].rec)->code, "", "");
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2482 "y.tab.c"
    break;

  case 131: /* for_assignment: TYPE id '=' expression  */
#line 531 "parser.y"
                                                                                                                                        {char * s = cat(convert((yyvsp[-3].sValue)), " ", (yyvsp[-2].rec)->code, "=", (yyvsp[0].rec)->code);
																				free((yyvsp[-3].sValue));
																				freeRecord((yyvsp[-2].rec));
																				freeRecord((yyvsp[0].rec));
																				(yyval.rec) = createRecord(s, "");
																				free(s);}
#line 2493 "y.tab.c"
    break;

  case 132: /* return: RETURN expression  */
#line 539 "parser.y"
                                                                                                                                        {char * s = cat("return ", (yyvsp[0].rec)->code, "", "", "");
																				(yyval.rec) = createRecord(s, (yyvsp[0].rec)->type);
																				freeRecord((yyvsp[0].rec));
																				free(s);}
#line 2502 "y.tab.c"
    break;


#line 2506 "y.tab.c"

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

#line 545 "parser.y"



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
