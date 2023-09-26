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

#include <stdio.h>
#include <stdlib.h>
extern int line_counter;


#line 78 "parser.tab.c"

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
  YYSYMBOL_CONST_INT = 21,                 /* CONST_INT  */
  YYSYMBOL_CONST_FLOAT = 22,               /* CONST_FLOAT  */
  YYSYMBOL_CONST_CHAR = 23,                /* CONST_CHAR  */
  YYSYMBOL_CONST_STRING = 24,              /* CONST_STRING  */
  YYSYMBOL_BOOL = 25,                      /* BOOL  */
  YYSYMBOL_INT = 26,                       /* INT  */
  YYSYMBOL_STRING = 27,                    /* STRING  */
  YYSYMBOL_COMPLEX = 28,                   /* COMPLEX  */
  YYSYMBOL_BYTE = 29,                      /* BYTE  */
  YYSYMBOL_FLOAT = 30,                     /* FLOAT  */
  YYSYMBOL_RUNE = 31,                      /* RUNE  */
  YYSYMBOL_UINT = 32,                      /* UINT  */
  YYSYMBOL_BOOL_TYPE = 33,                 /* BOOL_TYPE  */
  YYSYMBOL_EQ = 34,                        /* EQ  */
  YYSYMBOL_INC = 35,                       /* INC  */
  YYSYMBOL_DEC = 36,                       /* DEC  */
  YYSYMBOL_SUBEQ = 37,                     /* SUBEQ  */
  YYSYMBOL_PLUSEQ = 38,                    /* PLUSEQ  */
  YYSYMBOL_MULEQ = 39,                     /* MULEQ  */
  YYSYMBOL_DIVEQ = 40,                     /* DIVEQ  */
  YYSYMBOL_MODEQ = 41,                     /* MODEQ  */
  YYSYMBOL_EQUAL = 42,                     /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 43,                  /* NOTEQUAL  */
  YYSYMBOL_GREATEROREQUAL = 44,            /* GREATEROREQUAL  */
  YYSYMBOL_LESSOREQUAL = 45,               /* LESSOREQUAL  */
  YYSYMBOL_AND = 46,                       /* AND  */
  YYSYMBOL_OR = 47,                        /* OR  */
  YYSYMBOL_LSHIFT = 48,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 49,                    /* RSHIFT  */
  YYSYMBOL_PEQ = 50,                       /* PEQ  */
  YYSYMBOL_XOR = 51,                       /* XOR  */
  YYSYMBOL_SEMICOLON = 52,                 /* SEMICOLON  */
  YYSYMBOL_53_ = 53,                       /* '+'  */
  YYSYMBOL_54_ = 54,                       /* '-'  */
  YYSYMBOL_55_ = 55,                       /* '*'  */
  YYSYMBOL_56_ = 56,                       /* '/'  */
  YYSYMBOL_57_ = 57,                       /* '('  */
  YYSYMBOL_58_ = 58,                       /* ')'  */
  YYSYMBOL_59_ = 59,                       /* ','  */
  YYSYMBOL_60_ = 60,                       /* '!'  */
  YYSYMBOL_61_ = 61,                       /* '{'  */
  YYSYMBOL_62_ = 62,                       /* '}'  */
  YYSYMBOL_63_ = 63,                       /* ':'  */
  YYSYMBOL_64_ = 64,                       /* '>'  */
  YYSYMBOL_65_ = 65,                       /* '<'  */
  YYSYMBOL_66_ = 66,                       /* '%'  */
  YYSYMBOL_67_ = 67,                       /* '&'  */
  YYSYMBOL_68_ = 68,                       /* '|'  */
  YYSYMBOL_YYACCEPT = 69,                  /* $accept  */
  YYSYMBOL_prog = 70,                      /* prog  */
  YYSYMBOL_var_block = 71,                 /* var_block  */
  YYSYMBOL_variables = 72,                 /* variables  */
  YYSYMBOL_definitions = 73,               /* definitions  */
  YYSYMBOL_var_definition = 74,            /* var_definition  */
  YYSYMBOL_var_def_list = 75,              /* var_def_list  */
  YYSYMBOL_var_def = 76,                   /* var_def  */
  YYSYMBOL_data_list = 77,                 /* data_list  */
  YYSYMBOL_simple_definition = 78,         /* simple_definition  */
  YYSYMBOL_typeless_def = 79,              /* typeless_def  */
  YYSYMBOL_other_definitions = 80,         /* other_definitions  */
  YYSYMBOL_other = 81,                     /* other  */
  YYSYMBOL_const_block = 82,               /* const_block  */
  YYSYMBOL_const_block_definition = 83,    /* const_block_definition  */
  YYSYMBOL_const_block_def_list = 84,      /* const_block_def_list  */
  YYSYMBOL_const_block_def = 85,           /* const_block_def  */
  YYSYMBOL_const_def = 86,                 /* const_def  */
  YYSYMBOL_expression = 87,                /* expression  */
  YYSYMBOL_expression_args = 88,           /* expression_args  */
  YYSYMBOL_single_expression = 89,         /* single_expression  */
  YYSYMBOL_logical_expression = 90,        /* logical_expression  */
  YYSYMBOL_log_arguments = 91,             /* log_arguments  */
  YYSYMBOL_logical_condition = 92,         /* logical_condition  */
  YYSYMBOL_logical_operator = 93,          /* logical_operator  */
  YYSYMBOL_id_list = 94,                   /* id_list  */
  YYSYMBOL_body = 95,                      /* body  */
  YYSYMBOL_parameters = 96,                /* parameters  */
  YYSYMBOL_parameter_list = 97,            /* parameter_list  */
  YYSYMBOL_statements = 98,                /* statements  */
  YYSYMBOL_statement = 99,                 /* statement  */
  YYSYMBOL_if_block = 100,                 /* if_block  */
  YYSYMBOL_else_block = 101,               /* else_block  */
  YYSYMBOL_conditions = 102,               /* conditions  */
  YYSYMBOL_condition = 103,                /* condition  */
  YYSYMBOL_cond_args = 104,                /* cond_args  */
  YYSYMBOL_switch_case = 105,              /* switch_case  */
  YYSYMBOL_switch_arg = 106,               /* switch_arg  */
  YYSYMBOL_switch_arg_list = 107,          /* switch_arg_list  */
  YYSYMBOL_cases = 108,                    /* cases  */
  YYSYMBOL_case_list = 109,                /* case_list  */
  YYSYMBOL_default_case = 110,             /* default_case  */
  YYSYMBOL_case_args = 111,                /* case_args  */
  YYSYMBOL_case_block = 112,               /* case_block  */
  YYSYMBOL_eq_op = 113,                    /* eq_op  */
  YYSYMBOL_for_loop = 114,                 /* for_loop  */
  YYSYMBOL_for_def = 115,                  /* for_def  */
  YYSYMBOL_for_cond = 116,                 /* for_cond  */
  YYSYMBOL_for_act = 117,                  /* for_act  */
  YYSYMBOL_for_statements = 118,           /* for_statements  */
  YYSYMBOL_for_actions = 119,              /* for_actions  */
  YYSYMBOL_for_if_block = 120,             /* for_if_block  */
  YYSYMBOL_actions = 121,                  /* actions  */
  YYSYMBOL_function_call = 122,            /* function_call  */
  YYSYMBOL_operator = 123,                 /* operator  */
  YYSYMBOL_type = 124,                     /* type  */
  YYSYMBOL_data = 125,                     /* data  */
  YYSYMBOL_methods = 126,                  /* methods  */
  YYSYMBOL_method_arguments = 127,         /* method_arguments  */
  YYSYMBOL_arg_list = 128,                 /* arg_list  */
  YYSYMBOL_arguments = 129                 /* arguments  */
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
#define YYLAST   568

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  173
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  257

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


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
       2,     2,     2,    60,     2,     2,     2,    66,    67,     2,
      57,    58,    55,    53,    59,    54,     2,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    63,     2,
      65,     2,    64,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,    68,    62,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    19,    19,    20,    21,    22,    23,    24,    27,    29,
      30,    32,    33,    34,    36,    37,    39,    40,    42,    43,
      45,    46,    48,    49,    52,    55,    57,    58,    59,    62,
      64,    65,    67,    68,    70,    72,    73,    76,    77,    80,
      81,    84,    85,    88,    89,    90,    92,    94,    95,    97,
      98,   100,   101,   105,   108,   109,   111,   112,   114,   115,
     118,   119,   124,   125,   128,   129,   131,   132,   133,   134,
     138,   139,   141,   142,   143,   148,   150,   151,   153,   154,
     156,   157,   158,   161,   162,   164,   165,   168,   169,   172,
     173,   174,   175,   177,   178,   181,   182,   183,   184,   185,
     186,   190,   191,   194,   195,   196,   200,   201,   203,   204,
     206,   207,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   219,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   232,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   251,   252,   253,
     254,   255,   256,   257,   258,   260,   261,   262,   263,   264,
     265,   267,   269,   270,   272,   273,   276,   277,   278,   279,
     280,   281,   282,   283
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
  "RANGE", "CONST_INT", "CONST_FLOAT", "CONST_CHAR", "CONST_STRING",
  "BOOL", "INT", "STRING", "COMPLEX", "BYTE", "FLOAT", "RUNE", "UINT",
  "BOOL_TYPE", "EQ", "INC", "DEC", "SUBEQ", "PLUSEQ", "MULEQ", "DIVEQ",
  "MODEQ", "EQUAL", "NOTEQUAL", "GREATEROREQUAL", "LESSOREQUAL", "AND",
  "OR", "LSHIFT", "RSHIFT", "PEQ", "XOR", "SEMICOLON", "'+'", "'-'", "'*'",
  "'/'", "'('", "')'", "','", "'!'", "'{'", "'}'", "':'", "'>'", "'<'",
  "'%'", "'&'", "'|'", "$accept", "prog", "var_block", "variables",
  "definitions", "var_definition", "var_def_list", "var_def", "data_list",
  "simple_definition", "typeless_def", "other_definitions", "other",
  "const_block", "const_block_definition", "const_block_def_list",
  "const_block_def", "const_def", "expression", "expression_args",
  "single_expression", "logical_expression", "log_arguments",
  "logical_condition", "logical_operator", "id_list", "body", "parameters",
  "parameter_list", "statements", "statement", "if_block", "else_block",
  "conditions", "condition", "cond_args", "switch_case", "switch_arg",
  "switch_arg_list", "cases", "case_list", "default_case", "case_args",
  "case_block", "eq_op", "for_loop", "for_def", "for_cond", "for_act",
  "for_statements", "for_actions", "for_if_block", "actions",
  "function_call", "operator", "type", "data", "methods",
  "method_arguments", "arg_list", "arguments", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-217)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-168)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,    39,   282,  -217,  -217,     6,  -217,     4,     8,  -217,
    -217,  -217,  -217,   311,  -217,    12,    73,   311,   517,    74,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,   363,   161,
      81,  -217,  -217,  -217,  -217,    65,   535,   526,    42,    73,
    -217,  -217,   161,    68,    76,    54,    74,  -217,   309,    56,
    -217,  -217,  -217,  -217,  -217,    55,  -217,   341,   341,    61,
     362,  -217,    55,  -217,  -217,   161,    57,    63,   117,   161,
    -217,  -217,  -217,  -217,   161,   161,  -217,  -217,    82,   161,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,  -217,  -217,  -217,   481,   481,    55,    64,   535,
    -217,  -217,  -217,  -217,   426,  -217,    70,   122,   341,     0,
       0,  -217,    53,   435,  -217,    75,    72,  -217,  -217,  -217,
    -217,  -217,  -217,   252,   128,  -217,  -217,  -217,  -217,   161,
    -217,  -217,  -217,   129,     3,  -217,  -217,  -217,   140,   140,
     490,  -217,   133,   271,   142,    14,    20,   229,  -217,   341,
    -217,     0,    89,   252,   146,  -217,  -217,  -217,  -217,   383,
    -217,  -217,  -217,    53,    25,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,  -217,    82,    24,   -12,  -217,   103,   104,   116,
    -217,   -18,  -217,   -17,  -217,   118,   108,  -217,  -217,     7,
    -217,   121,   510,   252,   163,   160,    20,  -217,  -217,   139,
     252,   252,   146,  -217,  -217,   126,  -217,   125,   137,   434,
     173,   165,  -217,   143,   130,   132,  -217,  -217,    55,    61,
    -217,   134,  -217,   -29,   135,   147,   434,   516,  -217,  -217,
     252,   252,  -217,   136,    15,   341,  -217,   141,   188,  -217,
    -217,   252,  -217,  -217,  -217,   200,  -217,  -217,   341,  -217,
       0,  -217,  -217,  -217,  -217,  -217,   223
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,     0,    52,     0,     0,     3,
       4,     5,     6,     0,     7,     0,    15,     0,     0,    31,
     147,   148,   149,   150,   151,   152,   153,   154,     0,     0,
       0,    10,    12,    13,    11,    23,    55,     0,     0,    14,
      17,     9,     0,     0,     0,     0,    30,    33,    52,     0,
     155,   156,   157,   158,   159,    28,    25,    27,     0,    26,
      21,   160,    24,    21,    51,     0,     0,    54,     0,     0,
      19,     8,    16,    36,     0,     0,    29,    32,    72,     0,
     137,   138,   139,   140,   141,   145,   146,   144,   132,   133,
     136,   135,   134,   142,   143,     0,     0,    22,     0,     0,
      57,    18,    35,    34,    39,   170,     0,     0,   169,   173,
       0,   172,     0,    40,   160,     0,   162,   165,    20,    39,
      37,    40,    38,    59,     0,    95,    96,    97,    98,     0,
      99,   100,    46,     0,     0,   171,    49,    50,     0,     0,
      72,   161,    72,    39,     0,    72,    77,    72,   122,   125,
     126,   129,     0,    58,   124,   127,   130,    61,   128,   123,
      56,    71,    47,    48,     0,    43,    44,    74,    70,    73,
     164,    41,    42,    72,    74,     0,    67,    80,    79,    76,
      82,    74,   105,     0,   106,     0,     0,    53,    60,     0,
      45,     0,    72,    59,     0,    84,    77,   103,   104,    72,
      59,    59,    65,    63,   131,    74,    66,     0,     0,    72,
      88,    83,    78,     0,     0,     0,    62,    81,    89,    90,
      91,     0,    92,    73,     0,     0,    72,     0,   102,    64,
      59,    59,    75,     0,    39,   109,   108,     0,    93,    86,
      87,    59,   111,    94,    85,     0,   101,   112,   115,   116,
     119,   117,   120,   110,   114,   118,   160
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -217,  -217,  -217,    -2,   191,  -217,  -217,   171,    -1,  -217,
      29,    32,  -217,  -217,  -217,  -217,   170,  -217,   -26,   -40,
    -216,   -72,   -48,  -217,   107,    -6,  -217,  -217,  -217,  -120,
    -217,    37,  -217,  -217,  -132,    87,   -14,    36,  -217,  -217,
    -217,  -217,     2,    -8,   124,    -7,  -217,    40,  -217,  -217,
    -217,  -217,    96,    -3,   197,   -13,   -21,   -64,    83,  -217,
     115
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     9,   148,    31,    38,    39,    40,   218,    32,
      33,    34,    56,    11,    45,    46,    47,    12,   149,    58,
     150,   151,   110,   132,   138,    13,    14,    66,    67,   238,
     153,   154,   203,   175,   111,   112,   155,   178,   179,   210,
     211,   225,   221,   239,   133,   156,   185,   186,   237,   245,
     253,   254,   157,   158,    95,    35,   121,    61,   115,   116,
     117
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,    17,    57,   152,     1,    43,   109,    60,    63,   163,
       6,   236,    15,   176,   114,   184,   -52,    28,    18,   145,
     174,    73,    59,    68,    70,    49,   177,    55,    62,   249,
     -21,    49,   129,    29,   -21,    50,    51,    52,    53,    54,
     192,   -52,    30,     3,    63,   -52,   136,   137,   101,   193,
     171,   172,   108,   102,   103,   120,   122,   113,   118,   159,
     206,    16,   164,   106,    97,    19,   -69,   184,   201,    36,
     109,   136,   137,   207,   129,   -69,   -68,   220,   114,    37,
     214,   215,   180,   190,    44,   -68,   124,    64,   104,   159,
     165,   166,   105,    49,   220,   125,   126,   127,   128,    65,
      71,   109,    74,    50,    51,    52,    53,    54,   161,   114,
      75,   240,    76,    78,    79,    98,   108,   130,   131,   169,
      30,   113,    99,   100,   169,   123,   169,   134,   135,   159,
     208,   142,   180,   141,   160,   162,   159,   159,    17,   104,
    -163,   183,   106,   105,    49,   205,   163,   108,     6,   107,
      49,   187,   113,   194,    50,    51,    52,    53,    54,   189,
      50,    51,    52,    53,    54,   195,   159,   159,   196,   200,
     199,   169,    49,   250,    49,   209,   129,   159,   169,   204,
     226,   256,    50,    51,    52,    53,    54,   216,   223,   217,
     224,  -107,   228,   106,   229,   227,   222,   230,   231,   241,
     107,   235,   242,   219,   243,   223,   143,   144,    41,   232,
      72,    49,   197,   222,   146,   198,    77,   139,   147,   248,
     219,    50,    51,    52,    53,    54,   202,   168,   233,  -113,
    -113,   251,   212,   244,  -113,   181,   140,  -113,   252,   213,
      49,  -113,   255,   247,  -113,  -113,  -113,  -113,  -113,   188,
      50,    51,    52,    53,    54,    96,   191,   170,   143,   144,
     106,     0,   246,    49,   145,     0,   146,     0,     0,     0,
     147,     0,     0,    50,    51,    52,    53,    54,     0,   182,
       0,     0,     4,  -113,     0,  -113,     0,     5,     6,     7,
    -107,     8,     0,     0,     0,     0,     0,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   171,   172,     0,     0,
       0,     0,   106,   125,   126,   127,   128,   -48,   -48,     0,
       0,   -52,     0,     0,     0,     0,     0,     0,   173,     0,
     -52,     0,     0,     0,     0,   130,   131,    20,    21,    22,
      23,    24,    25,    26,    27,    28,   -39,   -39,   -39,   -39,
     -39,     0,     0,     0,     0,     0,     0,   -39,   -39,     0,
     -39,    29,   -39,   -39,   -39,   -39,     0,     0,     0,    48,
      30,     0,     0,     0,    49,   -39,   -39,   -39,    80,    81,
      82,    83,    84,     0,    50,    51,    52,    53,    54,    85,
      86,     0,    87,     0,    88,    89,    90,    91,     0,   -40,
     -40,   -40,   -40,   -40,     0,     0,     0,    92,    93,    94,
     -40,   -40,     0,   -40,     0,   -40,   -40,   -40,   -40,     0,
    -160,  -160,  -160,  -160,  -160,     0,     0,     0,   -40,   -40,
     -40,  -160,  -160,     0,  -160,     0,  -160,  -160,  -160,  -160,
     181,     0,     0,     0,     0,    49,     0,     0,     0,  -160,
    -160,  -160,     0,     0,     0,    50,    51,    52,    53,    54,
      20,    21,    22,    23,    24,    25,    26,    27,   125,   126,
     127,   128,   -48,   -48,     0,     0,   129,   -73,   -73,   -73,
     -73,     0,     0,     0,  -167,  -167,     0,   119,     0,     0,
     130,   131,    49,  -166,  -166,     0,   167,     0,     0,   -73,
     -73,    49,    50,    51,    52,    53,    54,     0,     0,     0,
       0,    50,    51,    52,    53,    54,   205,     0,     0,     0,
       0,    49,   234,     0,     0,     0,     0,    49,     0,     0,
       0,    50,    51,    52,    53,    54,     0,    50,    51,    52,
      53,    54,     0,    20,    21,    22,    23,    24,    25,    26,
      27,    42,    20,    21,    22,    23,    24,    25,    26,    27,
      69,    20,    21,    22,    23,    24,    25,    26,    27
};

static const yytype_int16 yycheck[] =
{
       2,     7,    28,   123,     3,    18,    78,    28,    29,     6,
       6,   227,     6,   145,    78,   147,    34,    34,    10,    12,
       6,    42,    28,    36,    37,    11,     6,    28,    29,   245,
      59,    11,    50,    50,    63,    21,    22,    23,    24,    25,
      52,    59,    59,     4,    65,    63,    46,    47,    69,    61,
      35,    36,    78,    74,    75,    95,    96,    78,    79,   123,
     192,    57,   134,    60,    65,    57,    52,   199,    61,    57,
     142,    46,    47,   193,    50,    61,    52,   209,   142,     6,
     200,   201,   146,    58,    10,    61,    99,     6,     6,   153,
     138,   139,    10,    11,   226,    42,    43,    44,    45,    34,
      58,   173,    34,    21,    22,    23,    24,    25,   129,   173,
      34,   231,    58,    57,    59,    58,   142,    64,    65,   140,
      59,   142,    59,     6,   145,    61,   147,    57,     6,   193,
     194,    59,   196,    58,     6,     6,   200,   201,   144,     6,
      58,   147,    60,    10,    11,     6,     6,   173,     6,    67,
      11,    62,   173,    50,    21,    22,    23,    24,    25,    13,
      21,    22,    23,    24,    25,    61,   230,   231,    52,    61,
      52,   192,    11,   245,    11,    15,    50,   241,   199,    58,
      15,   245,    21,    22,    23,    24,    25,    62,   209,    52,
      17,    52,    62,    60,    62,    52,   209,    63,    63,    63,
      67,   227,    61,   209,    16,   226,     6,     7,    17,    62,
      39,    11,   183,   226,    14,   183,    46,   110,    18,   245,
     226,    21,    22,    23,    24,    25,   189,   140,   226,     6,
       7,   245,   196,   241,    11,     6,   112,    14,   245,   199,
      11,    18,   245,   245,    21,    22,    23,    24,    25,   153,
      21,    22,    23,    24,    25,    58,   173,   142,     6,     7,
      60,    -1,    62,    11,    12,    -1,    14,    -1,    -1,    -1,
      18,    -1,    -1,    21,    22,    23,    24,    25,    -1,    50,
      -1,    -1,     0,    60,    -1,    62,    -1,     5,     6,     7,
      61,     9,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    60,    42,    43,    44,    45,    46,    47,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      59,    -1,    -1,    -1,    -1,    64,    65,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      51,    50,    53,    54,    55,    56,    -1,    -1,    -1,     6,
      59,    -1,    -1,    -1,    11,    66,    67,    68,    37,    38,
      39,    40,    41,    -1,    21,    22,    23,    24,    25,    48,
      49,    -1,    51,    -1,    53,    54,    55,    56,    -1,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    66,    67,    68,
      48,    49,    -1,    51,    -1,    53,    54,    55,    56,    -1,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    66,    67,
      68,    48,    49,    -1,    51,    -1,    53,    54,    55,    56,
       6,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    66,
      67,    68,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    42,    43,
      44,    45,    46,    47,    -1,    -1,    50,    42,    43,    44,
      45,    -1,    -1,    -1,    58,    59,    -1,     6,    -1,    -1,
      64,    65,    11,    58,    59,    -1,     6,    -1,    -1,    64,
      65,    11,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,     6,    -1,    -1,    -1,
      -1,    11,     6,    -1,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    21,    22,    23,
      24,    25,    -1,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    26,    27,    28,    29,    30,    31,    32,    33
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    70,     4,     0,     5,     6,     7,     9,    71,
      72,    82,    86,    94,    95,     6,    57,    94,    10,    57,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    50,
      59,    73,    78,    79,    80,   124,    57,     6,    74,    75,
      76,    73,    34,   124,    10,    83,    84,    85,     6,    11,
      21,    22,    23,    24,    25,    77,    81,    87,    88,    94,
     125,   126,    77,   125,     6,    34,    96,    97,   124,    34,
     124,    58,    76,   125,    34,    34,    58,    85,    57,    59,
      37,    38,    39,    40,    41,    48,    49,    51,    53,    54,
      55,    56,    66,    67,    68,   123,   123,    77,    58,    59,
       6,   125,   125,   125,     6,    10,    60,    67,    87,    90,
      91,   103,   104,   125,   126,   127,   128,   129,   125,     6,
      88,   125,    88,    61,   124,    42,    43,    44,    45,    50,
      64,    65,    92,   113,    57,     6,    46,    47,    93,    93,
     113,    58,    59,     6,     7,    12,    14,    18,    72,    87,
      89,    90,    98,    99,   100,   105,   114,   121,   122,   126,
       6,   125,     6,     6,    90,    91,    91,     6,   104,   125,
     129,    35,    36,    57,     6,   102,   103,     6,   106,   107,
     126,     6,    50,    94,   103,   115,   116,    62,   121,    13,
      58,   127,    52,    61,    50,    61,    52,    79,    80,    52,
      61,    61,   100,   101,    58,     6,   103,    98,   126,    15,
     108,   109,   106,   116,    98,    98,    62,    52,    77,    94,
     103,   111,   124,   125,    17,   110,    15,    52,    62,    62,
      63,    63,    62,   111,     6,    87,    89,   117,    98,   112,
      98,    63,    61,    16,   112,   118,    62,    72,    87,    89,
      90,   105,   114,   119,   120,   122,   126
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    70,    70,    70,    70,    71,    72,
      72,    73,    73,    73,    74,    74,    75,    75,    76,    76,
      77,    77,    78,    78,    79,    80,    81,    81,    81,    82,
      83,    83,    84,    84,    85,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    90,    90,    91,    92,    92,    93,
      93,    94,    94,    95,    96,    96,    97,    97,    98,    98,
      99,    99,   100,   100,   101,   101,   102,   102,   102,   102,
     103,   103,   104,   104,   104,   105,   106,   106,   107,   107,
     106,   106,   106,   108,   108,   109,   109,   110,   110,   111,
     111,   111,   111,   112,   112,   113,   113,   113,   113,   113,
     113,   114,   114,   115,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   120,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   122,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   124,   124,   124,
     124,   124,   124,   124,   124,   125,   125,   125,   125,   125,
     125,   126,   127,   127,   128,   128,   129,   129,   129,   129,
     129,   129,   129,   129
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     4,     3,
       2,     1,     1,     1,     1,     0,     2,     1,     3,     2,
       3,     1,     3,     1,     2,     2,     1,     1,     1,     4,
       1,     0,     2,     1,     3,     5,     4,     3,     3,     1,
       1,     2,     2,     3,     3,     4,     2,     2,     0,     1,
       1,     3,     1,     8,     1,     0,     4,     2,     1,     0,
       2,     1,     5,     3,     3,     1,     3,     1,     1,     0,
       3,     3,     0,     1,     1,     6,     1,     0,     3,     1,
       1,     4,     1,     1,     0,     5,     4,     3,     0,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     9,     5,     2,     2,     1,     1,     0,     1,     1,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     0,     3,     1,     1,     1,     1,     1,
       1,     2,     1,     1
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
#line 19 "parser.y"
                      {printf("Find package and import\n");}
#line 1456 "parser.tab.c"
    break;

  case 8: /* var_block: VAR '(' var_definition ')'  */
#line 27 "parser.y"
                                      {printf("varblock\n");}
#line 1462 "parser.tab.c"
    break;

  case 23: /* simple_definition: type  */
#line 49 "parser.y"
                                       {printf("type def\n");}
#line 1468 "parser.tab.c"
    break;

  case 24: /* typeless_def: PEQ data_list  */
#line 52 "parser.y"
                            {printf("typeless definition\n");}
#line 1474 "parser.tab.c"
    break;

  case 29: /* const_block: CONST '(' const_block_definition ')'  */
#line 62 "parser.y"
                                                  {printf("constblock\n");}
#line 1480 "parser.tab.c"
    break;

  case 35: /* const_def: CONST CONST_ID type EQ data  */
#line 72 "parser.y"
                                       {printf("const type definition\n");}
#line 1486 "parser.tab.c"
    break;

  case 36: /* const_def: CONST CONST_ID EQ data  */
#line 73 "parser.y"
                                         {printf("const typeless definition\n");}
#line 1492 "parser.tab.c"
    break;

  case 38: /* expression: expression_args operator expression_args  */
#line 77 "parser.y"
                                                                   {printf("expression\n");}
#line 1498 "parser.tab.c"
    break;

  case 53: /* body: FUNCTION id '(' parameters ')' '{' statements '}'  */
#line 105 "parser.y"
                                                        {printf("Find function defenition\n");}
#line 1504 "parser.tab.c"
    break;

  case 62: /* if_block: IF conditions '{' statements '}'  */
#line 124 "parser.y"
                                           {printf("ifblock!\n");}
#line 1510 "parser.tab.c"
    break;

  case 161: /* methods: METHOD '(' method_arguments ')'  */
#line 267 "parser.y"
                                         {printf("Method match\n");}
#line 1516 "parser.tab.c"
    break;


#line 1520 "parser.tab.c"

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

#line 287 "parser.y"


int main()
{
    yyparse();
    //printf("Parsing Successful\n");
    return 0;
}

int yyerror(const char *msg)
{
	printf("Parsing Failed\nLine Number: %d %s\n",line_counter,msg);
	//success = 0;
	return 0;
}

yywrap() {}
