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

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
extern int line_counter;


#line 79 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PACKAGE = 3,                    /* PACKAGE  */
  YYSYMBOL_IMPORTS = 4,                    /* IMPORTS  */
  YYSYMBOL_FUNCTION = 5,                   /* FUNCTION  */
  YYSYMBOL_id = 6,                         /* id  */
  YYSYMBOL_VAR = 7,                        /* VAR  */
  YYSYMBOL_EOL = 8,                        /* EOL  */
  YYSYMBOL_CONST = 9,                      /* CONST  */
  YYSYMBOL_CONST_ID = 10,                  /* CONST_ID  */
  YYSYMBOL_METHOD = 11,                    /* METHOD  */
  YYSYMBOL_IF = 12,                        /* IF  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_SWITCH = 14,                    /* SWITCH  */
  YYSYMBOL_CASE = 15,                      /* CASE  */
  YYSYMBOL_FALLTHROUGH = 16,               /* FALLTHROUGH  */
  YYSYMBOL_DEFAULT = 17,                   /* DEFAULT  */
  YYSYMBOL_FOR = 18,                       /* FOR  */
  YYSYMBOL_BREAK = 19,                     /* BREAK  */
  YYSYMBOL_RANGE = 20,                     /* RANGE  */
  YYSYMBOL_NEW = 21,                       /* NEW  */
  YYSYMBOL_SELECT = 22,                    /* SELECT  */
  YYSYMBOL_RETURN = 23,                    /* RETURN  */
  YYSYMBOL_MAP = 24,                       /* MAP  */
  YYSYMBOL_GO = 25,                        /* GO  */
  YYSYMBOL_GOTO = 26,                      /* GOTO  */
  YYSYMBOL_INTERFACE = 27,                 /* INTERFACE  */
  YYSYMBOL_CHAN = 28,                      /* CHAN  */
  YYSYMBOL_CONTINUE = 29,                  /* CONTINUE  */
  YYSYMBOL_DEFER = 30,                     /* DEFER  */
  YYSYMBOL_CONST_INT = 31,                 /* CONST_INT  */
  YYSYMBOL_CONST_CHAR = 32,                /* CONST_CHAR  */
  YYSYMBOL_CONST_STRING = 33,              /* CONST_STRING  */
  YYSYMBOL_BOOL = 34,                      /* BOOL  */
  YYSYMBOL_IOTA = 35,                      /* IOTA  */
  YYSYMBOL_NEG_CONST_INT = 36,             /* NEG_CONST_INT  */
  YYSYMBOL_CONST_OCTAL = 37,               /* CONST_OCTAL  */
  YYSYMBOL_CONST_HEX = 38,                 /* CONST_HEX  */
  YYSYMBOL_CONST_BIN = 39,                 /* CONST_BIN  */
  YYSYMBOL_FLOAT_HEX = 40,                 /* FLOAT_HEX  */
  YYSYMBOL_CONST_INT_ERR = 41,             /* CONST_INT_ERR  */
  YYSYMBOL_CONST_BIN_ERR = 42,             /* CONST_BIN_ERR  */
  YYSYMBOL_INT = 43,                       /* INT  */
  YYSYMBOL_STRING = 44,                    /* STRING  */
  YYSYMBOL_COMPLEXTYPE = 45,               /* COMPLEXTYPE  */
  YYSYMBOL_BYTE = 46,                      /* BYTE  */
  YYSYMBOL_FLOAT = 47,                     /* FLOAT  */
  YYSYMBOL_RUNE = 48,                      /* RUNE  */
  YYSYMBOL_UINT = 49,                      /* UINT  */
  YYSYMBOL_BOOL_TYPE = 50,                 /* BOOL_TYPE  */
  YYSYMBOL_TYPE = 51,                      /* TYPE  */
  YYSYMBOL_STRUCT = 52,                    /* STRUCT  */
  YYSYMBOL_UINTPTR = 53,                   /* UINTPTR  */
  YYSYMBOL_ERRORTYPE = 54,                 /* ERRORTYPE  */
  YYSYMBOL_ANYTYPE = 55,                   /* ANYTYPE  */
  YYSYMBOL_COMPARABLE = 56,                /* COMPARABLE  */
  YYSYMBOL_EQ = 57,                        /* EQ  */
  YYSYMBOL_INC = 58,                       /* INC  */
  YYSYMBOL_DEC = 59,                       /* DEC  */
  YYSYMBOL_SUBEQ = 60,                     /* SUBEQ  */
  YYSYMBOL_PLUSEQ = 61,                    /* PLUSEQ  */
  YYSYMBOL_MULEQ = 62,                     /* MULEQ  */
  YYSYMBOL_DIVEQ = 63,                     /* DIVEQ  */
  YYSYMBOL_MODEQ = 64,                     /* MODEQ  */
  YYSYMBOL_EQUAL = 65,                     /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 66,                  /* NOTEQUAL  */
  YYSYMBOL_GREATEROREQUAL = 67,            /* GREATEROREQUAL  */
  YYSYMBOL_LESSOREQUAL = 68,               /* LESSOREQUAL  */
  YYSYMBOL_AND = 69,                       /* AND  */
  YYSYMBOL_OR = 70,                        /* OR  */
  YYSYMBOL_LSHIFT = 71,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 72,                    /* RSHIFT  */
  YYSYMBOL_PEQ = 73,                       /* PEQ  */
  YYSYMBOL_XOR = 74,                       /* XOR  */
  YYSYMBOL_SEMICOLON = 75,                 /* SEMICOLON  */
  YYSYMBOL_EXPONENT = 76,                  /* EXPONENT  */
  YYSYMBOL_HEX_EXPONENT = 77,              /* HEX_EXPONENT  */
  YYSYMBOL_78_ = 78,                       /* '+'  */
  YYSYMBOL_79_ = 79,                       /* '-'  */
  YYSYMBOL_80_ = 80,                       /* '*'  */
  YYSYMBOL_81_ = 81,                       /* '/'  */
  YYSYMBOL_82_ = 82,                       /* '{'  */
  YYSYMBOL_83_ = 83,                       /* '}'  */
  YYSYMBOL_84_ = 84,                       /* '('  */
  YYSYMBOL_85_ = 85,                       /* ')'  */
  YYSYMBOL_86_ = 86,                       /* ','  */
  YYSYMBOL_87_ = 87,                       /* ':'  */
  YYSYMBOL_88_ = 88,                       /* '!'  */
  YYSYMBOL_89_ = 89,                       /* '>'  */
  YYSYMBOL_90_ = 90,                       /* '<'  */
  YYSYMBOL_91_ = 91,                       /* '%'  */
  YYSYMBOL_92_ = 92,                       /* '&'  */
  YYSYMBOL_93_ = 93,                       /* '|'  */
  YYSYMBOL_94_ = 94,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 95,                  /* $accept  */
  YYSYMBOL_prog = 96,                      /* prog  */
  YYSYMBOL_struct_def = 97,                /* struct_def  */
  YYSYMBOL_struct_body = 98,               /* struct_body  */
  YYSYMBOL_struct_list = 99,               /* struct_list  */
  YYSYMBOL_struct_contain = 100,           /* struct_contain  */
  YYSYMBOL_struct_init = 101,              /* struct_init  */
  YYSYMBOL_var_block = 102,                /* var_block  */
  YYSYMBOL_variables = 103,                /* variables  */
  YYSYMBOL_definitions = 104,              /* definitions  */
  YYSYMBOL_var_definition = 105,           /* var_definition  */
  YYSYMBOL_var_def_list = 106,             /* var_def_list  */
  YYSYMBOL_var_def = 107,                  /* var_def  */
  YYSYMBOL_data_list = 108,                /* data_list  */
  YYSYMBOL_simple_definition = 109,        /* simple_definition  */
  YYSYMBOL_typeless_def = 110,             /* typeless_def  */
  YYSYMBOL_other_definitions = 111,        /* other_definitions  */
  YYSYMBOL_other = 112,                    /* other  */
  YYSYMBOL_list = 113,                     /* list  */
  YYSYMBOL_const_block = 114,              /* const_block  */
  YYSYMBOL_const_block_definition = 115,   /* const_block_definition  */
  YYSYMBOL_const_block_def_list = 116,     /* const_block_def_list  */
  YYSYMBOL_const_block_def = 117,          /* const_block_def  */
  YYSYMBOL_const_def = 118,                /* const_def  */
  YYSYMBOL_expression = 119,               /* expression  */
  YYSYMBOL_expression_args = 120,          /* expression_args  */
  YYSYMBOL_single_expression = 121,        /* single_expression  */
  YYSYMBOL_logical_expression = 122,       /* logical_expression  */
  YYSYMBOL_log_arguments = 123,            /* log_arguments  */
  YYSYMBOL_logical_condition = 124,        /* logical_condition  */
  YYSYMBOL_logical_operator = 125,         /* logical_operator  */
  YYSYMBOL_id_list = 126,                  /* id_list  */
  YYSYMBOL_body = 127,                     /* body  */
  YYSYMBOL_type_def = 128,                 /* type_def  */
  YYSYMBOL_return_value = 129,             /* return_value  */
  YYSYMBOL_parameters = 130,               /* parameters  */
  YYSYMBOL_parameter_list = 131,           /* parameter_list  */
  YYSYMBOL_statements = 132,               /* statements  */
  YYSYMBOL_statement = 133,                /* statement  */
  YYSYMBOL_if_block = 134,                 /* if_block  */
  YYSYMBOL_else_block = 135,               /* else_block  */
  YYSYMBOL_conditions = 136,               /* conditions  */
  YYSYMBOL_condition = 137,                /* condition  */
  YYSYMBOL_cond_args = 138,                /* cond_args  */
  YYSYMBOL_switch_case = 139,              /* switch_case  */
  YYSYMBOL_switch_arg = 140,               /* switch_arg  */
  YYSYMBOL_switch_arg_list = 141,          /* switch_arg_list  */
  YYSYMBOL_cases = 142,                    /* cases  */
  YYSYMBOL_case_list = 143,                /* case_list  */
  YYSYMBOL_default_case = 144,             /* default_case  */
  YYSYMBOL_case_args = 145,                /* case_args  */
  YYSYMBOL_case_block = 146,               /* case_block  */
  YYSYMBOL_eq_op = 147,                    /* eq_op  */
  YYSYMBOL_for_loop = 148,                 /* for_loop  */
  YYSYMBOL_for_def = 149,                  /* for_def  */
  YYSYMBOL_for_cond = 150,                 /* for_cond  */
  YYSYMBOL_for_act = 151,                  /* for_act  */
  YYSYMBOL_actions = 152,                  /* actions  */
  YYSYMBOL_function_call = 153,            /* function_call  */
  YYSYMBOL_operator = 154,                 /* operator  */
  YYSYMBOL_type = 155,                     /* type  */
  YYSYMBOL_data = 156,                     /* data  */
  YYSYMBOL_float_lit = 157,                /* float_lit  */
  YYSYMBOL_decimal_float_lit = 158,        /* decimal_float_lit  */
  YYSYMBOL__decimal_float_lit = 159,       /* _decimal_float_lit  */
  YYSYMBOL_decimal_exponent = 160,         /* decimal_exponent  */
  YYSYMBOL_hex_exponent = 161,             /* hex_exponent  */
  YYSYMBOL_hex_float_lit = 162,            /* hex_float_lit  */
  YYSYMBOL_methods = 163,                  /* methods  */
  YYSYMBOL_method_arguments = 164,         /* method_arguments  */
  YYSYMBOL_arg_list = 165,                 /* arg_list  */
  YYSYMBOL_arguments = 166                 /* arguments  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   782

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  199
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  316

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   332


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
       2,     2,     2,    88,     2,     2,     2,    91,    92,     2,
      84,    85,    80,    78,    86,    79,    94,    81,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    87,     2,
      90,     2,    89,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    82,    93,    83,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    25,    25,    26,    27,    28,    29,    30,    31,    34,
      37,    38,    40,    41,    43,    44,    46,    48,    50,    51,
      52,    54,    55,    56,    58,    59,    61,    62,    64,    65,
      67,    68,    70,    71,    74,    75,    78,    80,    81,    82,
      83,    84,    87,    88,    90,    91,    94,    96,    97,    99,
     100,   102,   104,   105,   108,   109,   112,   113,   114,   115,
     118,   119,   122,   123,   124,   126,   128,   129,   131,   132,
     134,   135,   139,   142,   143,   145,   146,   149,   150,   152,
     153,   155,   156,   159,   160,   165,   166,   169,   170,   172,
     173,   174,   175,   179,   180,   182,   183,   184,   189,   191,
     192,   194,   195,   197,   198,   199,   202,   203,   205,   206,
     209,   210,   213,   214,   215,   216,   218,   219,   222,   223,
     224,   225,   226,   227,   231,   232,   235,   236,   237,   241,
     242,   244,   245,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   260,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   279,
     280,   281,   282,   283,   284,   285,   286,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   302,   303,   306,
     308,   309,   312,   314,   316,   318,   320,   321,   323,   324,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336
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
  "\"end of file\"", "error", "\"invalid token\"", "PACKAGE", "IMPORTS",
  "FUNCTION", "id", "VAR", "EOL", "CONST", "CONST_ID", "METHOD", "IF",
  "ELSE", "SWITCH", "CASE", "FALLTHROUGH", "DEFAULT", "FOR", "BREAK",
  "RANGE", "NEW", "SELECT", "RETURN", "MAP", "GO", "GOTO", "INTERFACE",
  "CHAN", "CONTINUE", "DEFER", "CONST_INT", "CONST_CHAR", "CONST_STRING",
  "BOOL", "IOTA", "NEG_CONST_INT", "CONST_OCTAL", "CONST_HEX", "CONST_BIN",
  "FLOAT_HEX", "CONST_INT_ERR", "CONST_BIN_ERR", "INT", "STRING",
  "COMPLEXTYPE", "BYTE", "FLOAT", "RUNE", "UINT", "BOOL_TYPE", "TYPE",
  "STRUCT", "UINTPTR", "ERRORTYPE", "ANYTYPE", "COMPARABLE", "EQ", "INC",
  "DEC", "SUBEQ", "PLUSEQ", "MULEQ", "DIVEQ", "MODEQ", "EQUAL", "NOTEQUAL",
  "GREATEROREQUAL", "LESSOREQUAL", "AND", "OR", "LSHIFT", "RSHIFT", "PEQ",
  "XOR", "SEMICOLON", "EXPONENT", "HEX_EXPONENT", "'+'", "'-'", "'*'",
  "'/'", "'{'", "'}'", "'('", "')'", "','", "':'", "'!'", "'>'", "'<'",
  "'%'", "'&'", "'|'", "'.'", "$accept", "prog", "struct_def",
  "struct_body", "struct_list", "struct_contain", "struct_init",
  "var_block", "variables", "definitions", "var_definition",
  "var_def_list", "var_def", "data_list", "simple_definition",
  "typeless_def", "other_definitions", "other", "list", "const_block",
  "const_block_definition", "const_block_def_list", "const_block_def",
  "const_def", "expression", "expression_args", "single_expression",
  "logical_expression", "log_arguments", "logical_condition",
  "logical_operator", "id_list", "body", "type_def", "return_value",
  "parameters", "parameter_list", "statements", "statement", "if_block",
  "else_block", "conditions", "condition", "cond_args", "switch_case",
  "switch_arg", "switch_arg_list", "cases", "case_list", "default_case",
  "case_args", "case_block", "eq_op", "for_loop", "for_def", "for_cond",
  "for_act", "actions", "function_call", "operator", "type", "data",
  "float_lit", "decimal_float_lit", "_decimal_float_lit",
  "decimal_exponent", "hex_exponent", "hex_float_lit", "methods",
  "method_arguments", "arg_list", "arguments", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-219)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-200)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,    15,    77,  -219,  -219,   -25,  -219,    18,    10,     8,
      56,  -219,  -219,  -219,  -219,  -219,   457,  -219,    66,    75,
      86,   457,   700,    91,   261,  -219,    53,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,   513,   107,  -219,  -219,  -219,
    -219,    67,   529,    35,   715,    48,    86,  -219,  -219,   340,
      98,   120,    63,    91,  -219,   541,   564,    78,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,   112,   297,   104,  -219,   615,
     615,   106,   638,  -219,  -219,  -219,  -219,   111,   114,   119,
     104,  -219,  -219,   340,   113,   529,   340,  -219,  -219,  -219,
    -219,   340,   340,  -219,  -219,   525,     5,    -6,   168,  -219,
    -219,   119,   589,  -219,   340,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
     297,   297,   201,   525,   104,  -219,   128,   129,   210,  -219,
    -219,  -219,   447,    -1,  -219,   104,   134,   443,  -219,    82,
     135,   214,  -219,   615,    57,    57,  -219,   115,   144,  -219,
     136,   138,  -219,  -219,   191,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,   142,    -1,   145,   529,   529,  -219,   153,   340,
    -219,   730,   221,  -219,  -219,  -219,  -219,  -219,  -219,   340,
     340,  -219,  -219,  -219,   230,     3,  -219,  -219,  -219,   231,
     231,   549,  -219,    16,  -219,  -219,  -219,   156,  -219,   233,
     201,  -219,   154,  -219,    37,  -219,   115,    62,  -219,  -219,
    -219,  -219,  -219,  -219,   273,  -219,   162,   340,  -219,  -219,
     374,   241,   -27,   352,    29,   364,  -219,  -219,   615,  -219,
      57,   165,   273,   236,  -219,  -219,  -219,  -219,   661,  -219,
    -219,  -219,  -219,     5,    -2,   -24,  -219,   177,   170,   178,
    -219,    92,  -219,    65,  -219,   179,   173,  -219,  -219,    17,
     174,   560,   273,   247,   245,    29,  -219,  -219,   376,   273,
     273,   236,  -219,  -219,   189,  -219,   180,   190,   439,   249,
     253,  -219,   194,   181,   187,  -219,  -219,   104,   106,  -219,
     188,  -219,    43,   195,   198,   439,   310,  -219,  -219,   273,
     273,  -219,   196,   101,   615,  -219,   204,   274,  -219,  -219,
     273,   273,  -219,  -219,   103,  -219
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,    75,    71,     0,     0,     0,
       0,     8,     3,     4,     5,     6,     0,     7,     0,     0,
      25,     0,     0,    48,     0,    20,     0,   159,   160,   161,
     162,   163,   164,   165,   166,     0,     0,    19,    22,    23,
      21,    33,     0,     0,     0,     0,    24,    27,    18,     0,
       0,     0,     0,    47,    50,    71,    40,   167,   172,   173,
     174,   171,   168,   169,   170,     0,     0,    39,    36,    38,
       0,    37,    31,   176,   177,   178,   175,     0,     0,     0,
      34,    31,    70,     0,     0,    78,     0,    29,    17,    26,
      53,     0,     0,    46,    49,     0,    95,     0,     0,   184,
      56,    58,     0,    57,     0,   149,   150,   151,   152,   153,
     157,   158,   156,   144,   145,   148,   147,   146,   154,   155,
       0,     0,    10,     0,    32,    76,     0,    77,     0,    28,
      52,    51,     0,    43,    13,    42,     0,    56,   194,    58,
       0,     0,   198,   193,   197,     0,   196,     0,    57,   175,
       0,   186,   189,   180,     0,   179,   181,   183,    59,    30,
      54,    55,     0,    11,     0,    73,     0,    80,     0,     0,
      14,     0,     0,    12,    41,   118,   119,   120,   121,     0,
       0,   122,   123,    65,     0,     0,   195,    68,    69,     0,
       0,    95,   185,    95,   182,     9,    35,     0,    74,     0,
      10,    45,     0,    94,     0,    66,    67,     0,    62,    63,
      97,    93,    96,   188,    82,    79,     0,     0,    16,    64,
      56,     0,    58,    95,   100,    95,   142,   133,   136,   137,
     140,     0,    81,   135,   138,   141,    84,   139,   134,    15,
      44,    60,    61,    95,    97,     0,    90,   103,   102,    99,
     105,    97,   128,     0,   129,     0,     0,    72,    83,     0,
       0,    95,    82,     0,   107,   100,   126,   127,    95,    82,
      82,    88,    86,   143,    97,    89,     0,     0,    95,   111,
     106,   101,     0,     0,     0,    85,   104,   112,   113,   114,
       0,   115,    96,     0,     0,    95,     0,   125,    87,    82,
      82,    98,     0,    56,   132,   131,     0,   116,   109,   110,
      82,     0,   117,   108,     0,   124
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -219,  -219,  -219,    89,   -88,  -100,   -86,  -219,   275,   281,
    -219,  -219,   250,   -22,  -219,    61,   -13,  -219,   192,  -219,
    -219,  -219,   264,  -219,   -20,    49,    22,   -90,    -5,  -219,
     175,    -7,  -219,  -219,  -219,  -219,  -219,  -202,    11,    60,
    -219,  -219,  -107,   132,  -219,    59,  -219,  -219,  -219,  -219,
      30,    42,   185,  -219,  -219,    58,  -219,  -218,  -219,   257,
     -21,   -17,  -219,  -219,  -219,  -219,  -219,  -219,   -68,    95,
    -219,   146
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    11,   162,   133,   134,   226,    12,   227,    37,
      45,    46,    47,   135,    38,    39,    25,    68,   136,    14,
      52,    53,    54,    15,   228,    70,   229,   230,   145,   183,
     189,    16,    17,   197,    19,   126,   127,   307,   232,   233,
     272,   245,   146,   147,   234,   248,   249,   279,   280,   294,
     290,   308,   184,   235,   255,   256,   306,   236,   237,   120,
      41,   103,    73,    74,   155,   156,    99,    75,    76,   150,
     151,   152
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    50,    67,    40,    69,   171,   144,    72,    40,   206,
     142,   137,   231,    80,   258,   138,   139,    71,    81,     3,
      22,    84,   137,    87,     6,   153,   138,   139,   149,   223,
      24,     1,    90,   173,   163,   247,    57,    58,    59,    60,
      79,    61,    62,    63,    64,    65,   102,    57,    58,    59,
      60,   261,    61,    62,    63,    64,    65,    96,   262,    18,
     276,   124,    26,   173,   128,    24,    81,   283,   284,   129,
     154,   179,    42,   -91,   130,   131,   143,     4,    81,   148,
     -91,    43,     5,     6,     7,   172,     8,   159,     9,    66,
    -187,   140,    44,   140,    23,   207,   258,   141,   309,   270,
      66,    51,    20,   144,   140,    77,    81,   142,   141,   220,
     221,   170,   163,    82,   222,   223,   246,   224,   254,    85,
     218,   225,    24,   104,    83,   149,   187,   188,    10,   -31,
     -31,   187,   188,    88,    57,    58,    59,    60,    35,    61,
      62,    63,    64,    65,   198,   199,   238,   219,    93,   -71,
     170,    36,   201,   144,   275,    91,   250,   142,   204,   241,
     242,   254,   203,    81,   238,   179,    96,  -199,  -199,   160,
     161,   289,    97,   143,   212,   149,   148,    92,   -71,   -71,
     175,   176,   177,   178,   208,   209,   315,    66,   289,    98,
     104,   140,    36,   122,   238,   277,   123,   250,   125,   157,
     240,   238,   238,    96,   181,   182,   212,   132,   212,   -96,
     -96,   -96,   -96,   165,    21,   166,   167,   174,   253,   185,
     186,   192,   194,   143,   193,   195,   148,   202,   196,  -190,
    -190,   238,   238,   -96,   -96,   200,   205,   206,   214,   215,
     267,   217,   238,   238,   212,   239,   238,     6,   257,   259,
     263,   212,   264,   265,   268,   269,   287,   291,    79,   273,
     278,   292,   179,   285,   297,   286,   293,    55,   295,   296,
     298,   288,    56,   287,   291,   299,   304,    13,   292,   220,
     221,   301,   300,   310,   222,   223,   311,   224,   288,   216,
     312,   225,    57,    58,    59,    60,    89,    61,    62,    63,
      64,    65,    48,   100,    57,    58,    59,    60,   101,    61,
      62,    63,    64,    65,   266,   164,   303,    94,   305,   271,
     190,   101,   314,   211,   281,   302,   282,   121,    57,    58,
      59,    60,   191,    61,    62,    63,    64,    65,   260,   213,
       0,    57,    58,    59,    60,    66,    61,    62,    63,    64,
      65,    79,   313,     0,     0,     0,     0,    66,   244,     0,
       0,   140,     0,    79,     0,     0,     0,     0,     0,     0,
     251,    57,    58,    59,    60,    79,    61,    62,    63,    64,
      65,    66,   274,    57,    58,    59,    60,    79,    61,    62,
      63,    64,    65,     0,    66,    57,    58,    59,    60,     0,
      61,    62,    63,    64,    65,     0,     0,    57,    58,    59,
      60,     0,    61,    62,    63,    64,    65,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,   -92,     0,     0,
       0,   -71,   241,   242,   -92,     0,     0,   252,     0,   175,
     176,   177,   178,   -67,   -67,   251,  -130,   -71,     0,     0,
      79,  -130,     0,     0,     0,     0,   180,     0,   243,     0,
     -71,     0,     0,   181,   182,     0,     0,     0,     0,     0,
      57,    58,    59,    60,     0,    61,    62,    63,    64,    65,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      27,    28,    29,    30,    31,    32,    33,    34,     0,   168,
      27,    28,    29,    30,    31,    32,    33,    34,   175,   176,
     177,   178,   -67,   -67,    24,     0,   179,     0,     0,    78,
       0,     0,     0,     0,    79,   180,     0,     0,  -191,  -191,
      35,   132,   181,   182,   169,     0,    79,     0,     0,     0,
       0,     0,     0,    36,    57,    58,    59,    60,     0,    61,
      62,    63,    64,    65,     0,   210,    57,    58,    59,    60,
      79,    61,    62,    63,    64,    65,   274,     0,     0,     0,
       0,    79,    27,    28,    29,    30,    31,    32,    33,    34,
      57,    58,    59,    60,     0,    61,    62,    63,    64,    65,
       0,    57,    58,    59,    60,     0,    61,    62,    63,    64,
      65,   -56,   -56,   -56,   -56,   -56,     0,     0,     0,     0,
       0,     0,   -56,   -56,     0,   -56,     0,     0,     0,   -56,
     -56,   -56,   -56,    95,   -58,   -58,   -58,   -58,   -58,     0,
       0,     0,   -56,   -56,   -56,   -58,   -58,     0,   -58,     0,
       0,     0,   -58,   -58,   -58,   -58,     0,     0,    96,   105,
     106,   107,   108,   109,     0,   -58,   -58,   -58,     0,     0,
     110,   111,     0,   112,     0,     0,     0,   113,   114,   115,
     116,     0,     0,     0,   158,   105,   106,   107,   108,   109,
     117,   118,   119,     0,     0,     0,   110,   111,     0,   112,
       0,     0,     0,   113,   114,   115,   116,     0,   -57,   -57,
     -57,   -57,   -57,     0,     0,     0,   117,   118,   119,   -57,
     -57,     0,   -57,     0,     0,     0,   -57,   -57,   -57,   -57,
       0,  -175,  -175,  -175,  -175,  -175,     0,     0,     0,   -57,
     -57,   -57,  -175,  -175,     0,  -175,     0,     0,     0,  -175,
    -175,  -175,  -175,    27,    28,    29,    30,    31,    32,    33,
      34,     0,  -175,  -175,  -175,     0,     0,    49,    27,    28,
      29,    30,    31,    32,    33,    34,     0,     0,     0,     0,
       0,     0,    86,    27,    28,    29,    30,    31,    32,    33,
      34,     0,   168
};

static const yytype_int16 yycheck[] =
{
       7,    22,    24,    16,    24,     6,    96,    24,    21,     6,
      96,     6,   214,    35,   232,    10,    11,    24,    35,     4,
      10,    42,     6,    44,     6,    31,    10,    11,    96,    12,
      57,     3,    49,   133,   122,     6,    31,    32,    33,    34,
      11,    36,    37,    38,    39,    40,    66,    31,    32,    33,
      34,    75,    36,    37,    38,    39,    40,    84,    82,    84,
     262,    83,     6,   163,    85,    57,    83,   269,   270,    86,
      76,    73,     6,    75,    91,    92,    96,     0,    95,    96,
      82,     6,     5,     6,     7,    86,     9,   104,    11,    84,
      85,    88,     6,    88,    84,   185,   314,    92,   300,    82,
      84,    10,    84,   193,    88,    52,   123,   193,    92,     6,
       7,   132,   200,     6,    11,    12,   223,    14,   225,    84,
      83,    18,    57,    86,    57,   193,    69,    70,    51,    86,
      87,    69,    70,    85,    31,    32,    33,    34,    73,    36,
      37,    38,    39,    40,   165,   166,   214,    85,    85,    57,
     171,    86,   169,   243,   261,    57,   224,   243,   180,    58,
      59,   268,   179,   180,   232,    73,    84,    85,    86,   120,
     121,   278,    94,   193,   191,   243,   193,    57,    86,    87,
      65,    66,    67,    68,   189,   190,    83,    84,   295,    77,
      86,    88,    86,    82,   262,   263,    82,   265,    85,    31,
     217,   269,   270,    84,    89,    90,   223,     6,   225,    65,
      66,    67,    68,    85,   221,    86,     6,    83,   225,    84,
       6,    85,    31,   243,    86,    83,   243,     6,    83,    85,
      86,   299,   300,    89,    90,    82,     6,     6,    82,     6,
     253,    87,   310,   311,   261,    83,   314,     6,    83,    13,
      73,   268,    82,    75,    75,    82,   278,   278,    11,    85,
      15,   278,    73,    83,    83,    75,    17,     6,    15,    75,
      83,   278,    11,   295,   295,    87,   296,     2,   295,     6,
       7,    83,    87,    87,    11,    12,    82,    14,   295,   200,
      16,    18,    31,    32,    33,    34,    46,    36,    37,    38,
      39,    40,    21,     6,    31,    32,    33,    34,    11,    36,
      37,    38,    39,    40,   253,   123,     6,    53,   296,   259,
     145,    11,   311,   191,   265,   295,   268,    70,    31,    32,
      33,    34,   147,    36,    37,    38,    39,    40,   243,   193,
      -1,    31,    32,    33,    34,    84,    36,    37,    38,    39,
      40,    11,   310,    -1,    -1,    -1,    -1,    84,     6,    -1,
      -1,    88,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
       6,    31,    32,    33,    34,    11,    36,    37,    38,    39,
      40,    84,     6,    31,    32,    33,    34,    11,    36,    37,
      38,    39,    40,    -1,    84,    31,    32,    33,    34,    -1,
      36,    37,    38,    39,    40,    -1,    -1,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    75,    -1,    -1,
      -1,    57,    58,    59,    82,    -1,    -1,    73,    -1,    65,
      66,    67,    68,    69,    70,     6,    82,    73,    -1,    -1,
      11,    75,    -1,    -1,    -1,    -1,    82,    -1,    84,    -1,
      86,    -1,    -1,    89,    90,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      43,    44,    45,    46,    47,    48,    49,    50,    65,    66,
      67,    68,    69,    70,    57,    -1,    73,    -1,    -1,     6,
      -1,    -1,    -1,    -1,    11,    82,    -1,    -1,    85,    86,
      73,     6,    89,    90,    87,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    31,    32,    33,    34,    -1,    36,
      37,    38,    39,    40,    -1,     6,    31,    32,    33,    34,
      11,    36,    37,    38,    39,    40,     6,    -1,    -1,    -1,
      -1,    11,    43,    44,    45,    46,    47,    48,    49,    50,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      -1,    31,    32,    33,    34,    -1,    36,    37,    38,    39,
      40,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    -1,    74,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    91,    92,    93,    71,    72,    -1,    74,    -1,
      -1,    -1,    78,    79,    80,    81,    -1,    -1,    84,    60,
      61,    62,    63,    64,    -1,    91,    92,    93,    -1,    -1,
      71,    72,    -1,    74,    -1,    -1,    -1,    78,    79,    80,
      81,    -1,    -1,    -1,    85,    60,    61,    62,    63,    64,
      91,    92,    93,    -1,    -1,    -1,    71,    72,    -1,    74,
      -1,    -1,    -1,    78,    79,    80,    81,    -1,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    91,    92,    93,    71,
      72,    -1,    74,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    60,    61,    62,    63,    64,    -1,    -1,    -1,    91,
      92,    93,    71,    72,    -1,    74,    -1,    -1,    -1,    78,
      79,    80,    81,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    91,    92,    93,    -1,    -1,    57,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    52
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    96,     4,     0,     5,     6,     7,     9,    11,
      51,    97,   102,   103,   114,   118,   126,   127,    84,   129,
      84,   126,    10,    84,    57,   111,     6,    43,    44,    45,
      46,    47,    48,    49,    50,    73,    86,   104,   109,   110,
     111,   155,     6,     6,     6,   105,   106,   107,   104,    57,
     155,    10,   115,   116,   117,     6,    11,    31,    32,    33,
      34,    36,    37,    38,    39,    40,    84,   108,   112,   119,
     120,   126,   156,   157,   158,   162,   163,    52,     6,    11,
     108,   156,     6,    57,   155,    84,    57,   155,    85,   107,
     156,    57,    57,    85,   117,    82,    84,    94,    77,   161,
       6,    11,   119,   156,    86,    60,    61,    62,    63,    64,
      71,    72,    74,    78,    79,    80,    81,    91,    92,    93,
     154,   154,    82,    82,   108,    85,   130,   131,   155,   156,
     156,   156,     6,    99,   100,   108,   113,     6,    10,    11,
      88,    92,   101,   119,   122,   123,   137,   138,   156,   163,
     164,   165,   166,    31,    76,   159,   160,    31,    85,   156,
     120,   120,    98,    99,   113,    85,    86,     6,    52,    87,
     155,     6,    86,   100,    83,    65,    66,    67,    68,    73,
      82,    89,    90,   124,   147,    84,     6,    69,    70,   125,
     125,   147,    85,    86,    31,    83,    83,   128,   155,   155,
      82,   156,     6,   156,   108,     6,     6,   122,   123,   123,
       6,   138,   156,   166,    82,     6,    98,    87,    83,    85,
       6,     7,    11,    12,    14,    18,   101,   103,   119,   121,
     122,   132,   133,   134,   139,   148,   152,   153,   163,    83,
     156,    58,    59,    84,     6,   136,   137,     6,   140,   141,
     163,     6,    73,   126,   137,   149,   150,    83,   152,    13,
     164,    75,    82,    73,    82,    75,   110,   111,    75,    82,
      82,   134,   135,    85,     6,   137,   132,   163,    15,   142,
     143,   140,   150,   132,   132,    83,    75,   108,   126,   137,
     145,   155,   156,    17,   144,    15,    75,    83,    83,    87,
      87,    83,   145,     6,   119,   121,   151,   132,   146,   132,
      87,    82,    16,   146,   133,    83
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    96,    96,    96,    96,    96,    96,    97,
      98,    98,    99,    99,   100,   100,   101,   102,   103,   103,
     103,   104,   104,   104,   105,   105,   106,   106,   107,   107,
     108,   108,   109,   109,   110,   110,   111,   112,   112,   112,
     112,   112,   113,   113,    99,    99,   114,   115,   115,   116,
     116,   117,   118,   118,   119,   119,   120,   120,   120,   120,
     121,   121,   122,   122,   122,   123,   124,   124,   125,   125,
     126,   126,   127,   128,   128,   129,   129,   130,   130,   131,
     131,   132,   132,   133,   133,   134,   134,   135,   135,   136,
     136,   136,   136,   137,   137,   138,   138,   138,   139,   140,
     140,   141,   141,   140,   140,   140,   142,   142,   143,   143,
     144,   144,   145,   145,   145,   145,   146,   146,   147,   147,
     147,   147,   147,   147,   148,   148,   149,   149,   149,   150,
     150,   151,   151,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   153,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   155,
     155,   155,   155,   155,   155,   155,   155,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   157,   157,   158,
     159,   159,   160,   161,   162,   163,   164,   164,   165,   165,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     6,
       0,     1,     2,     1,     2,     5,     4,     4,     3,     2,
       2,     1,     1,     1,     1,     0,     2,     1,     3,     2,
       3,     1,     3,     1,     2,     5,     2,     1,     1,     1,
       1,     4,     1,     1,     5,     3,     4,     1,     0,     2,
       1,     3,     5,     4,     3,     3,     1,     1,     1,     3,
       2,     2,     3,     3,     4,     2,     2,     0,     1,     1,
       3,     1,    10,     0,     1,     0,     4,     1,     0,     4,
       2,     1,     0,     2,     1,     5,     3,     3,     1,     3,
       1,     1,     0,     3,     3,     0,     1,     1,     6,     1,
       0,     3,     1,     1,     4,     1,     1,     0,     5,     4,
       3,     0,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     9,     5,     2,     2,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     2,     2,     2,     4,     1,     0,     3,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1
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
  case 2: /* prog: PACKAGE IMPORTS  */
#line 25 "parser.y"
                      {printf("Find package and import\n");}
#line 1574 "parser.tab.c"
    break;

  case 17: /* var_block: VAR '(' var_definition ')'  */
#line 48 "parser.y"
                                      {printf("varblock\n");}
#line 1580 "parser.tab.c"
    break;

  case 33: /* simple_definition: type  */
#line 71 "parser.y"
                                       {printf("type def\n");}
#line 1586 "parser.tab.c"
    break;

  case 34: /* typeless_def: PEQ data_list  */
#line 74 "parser.y"
                            {printf("typeless definition\n");}
#line 1592 "parser.tab.c"
    break;

  case 46: /* const_block: CONST '(' const_block_definition ')'  */
#line 94 "parser.y"
                                                  {printf("constblock\n");}
#line 1598 "parser.tab.c"
    break;

  case 52: /* const_def: CONST CONST_ID type EQ data  */
#line 104 "parser.y"
                                       {printf("const type definition\n");}
#line 1604 "parser.tab.c"
    break;

  case 53: /* const_def: CONST CONST_ID EQ data  */
#line 105 "parser.y"
                                         {printf("const typeless definition\n");}
#line 1610 "parser.tab.c"
    break;

  case 55: /* expression: expression_args operator expression_args  */
#line 109 "parser.y"
                                                                   {printf("expression\n");}
#line 1616 "parser.tab.c"
    break;

  case 72: /* body: FUNCTION return_value id '(' parameters ')' type_def '{' statements '}'  */
#line 139 "parser.y"
                                                                              {printf("Find function defenition\n");}
#line 1622 "parser.tab.c"
    break;

  case 85: /* if_block: IF conditions '{' statements '}'  */
#line 165 "parser.y"
                                           {printf("ifblock!\n");}
#line 1628 "parser.tab.c"
    break;

  case 185: /* methods: METHOD '(' method_arguments ')'  */
#line 318 "parser.y"
                                         {printf("Method match\n");}
#line 1634 "parser.tab.c"
    break;


#line 1638 "parser.tab.c"

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

#line 340 "parser.y"


int main(int argc, char **argv)
{
#ifdef __linux__ 
    yyparse();

#elif _WIN32
    FILE* inputStream = fopen(argv[1], "r");
    if (inputStream == NULL)
    {
        printf("Can't found input file yyin.txt\n");
        exit(-1);
	}
    yyset_in(inputStream);
	yyparse();
    fclose(inputStream);
#endif
	return 0;

}

int yyerror(const char *msg)
{
	printf("Syntax error\n");

}

yywrap() {}
