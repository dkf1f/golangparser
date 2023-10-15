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
#line 1 "lab.yacc"

    #include <iostream>
	extern int yylineno;
	extern int line_counter;
	extern int yylex();
	bool error_ = 0;
    extern FILE* yyin;
    int num_error = 0;
    void yyerror(const char *s)
	{
        std::cout << "NO OK" << std::endl;
		std::cout << s << "line=" << yylineno << std::endl;
		error_ = 1;
	}

#line 87 "y.tab.c"

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
    PACKAGE = 258,                 /* PACKAGE  */
    IMPORTS = 259,                 /* IMPORTS  */
    FUNCTION = 260,                /* FUNCTION  */
    id = 261,                      /* id  */
    VAR = 262,                     /* VAR  */
    EOL = 263,                     /* EOL  */
    CONST = 264,                   /* CONST  */
    METHOD = 265,                  /* METHOD  */
    IF = 266,                      /* IF  */
    ELSE = 267,                    /* ELSE  */
    SWITCH = 268,                  /* SWITCH  */
    CASE = 269,                    /* CASE  */
    FALLTHROUGH = 270,             /* FALLTHROUGH  */
    DEFAULT = 271,                 /* DEFAULT  */
    FOR = 272,                     /* FOR  */
    BREAK = 273,                   /* BREAK  */
    RANGE = 274,                   /* RANGE  */
    NEW = 275,                     /* NEW  */
    SELECT = 276,                  /* SELECT  */
    RETURN = 277,                  /* RETURN  */
    MAP = 278,                     /* MAP  */
    GO = 279,                      /* GO  */
    GOTO = 280,                    /* GOTO  */
    INTERFACE = 281,               /* INTERFACE  */
    CHAN = 282,                    /* CHAN  */
    CONTINUE = 283,                /* CONTINUE  */
    DEFER = 284,                   /* DEFER  */
    CONST_INT = 285,               /* CONST_INT  */
    CONST_CHAR = 286,              /* CONST_CHAR  */
    CONST_STRING = 287,            /* CONST_STRING  */
    BOOL = 288,                    /* BOOL  */
    IOTA = 289,                    /* IOTA  */
    CONST_OCTAL = 290,             /* CONST_OCTAL  */
    CONST_HEX = 291,               /* CONST_HEX  */
    CONST_BIN = 292,               /* CONST_BIN  */
    FLOAT_HEX = 293,               /* FLOAT_HEX  */
    DECIMAL_FLOAT_LIT = 294,       /* DECIMAL_FLOAT_LIT  */
    HEX_FLOAT_LIT = 295,           /* HEX_FLOAT_LIT  */
    CONST_INT_ERR = 296,           /* CONST_INT_ERR  */
    CONST_BIN_ERR = 297,           /* CONST_BIN_ERR  */
    INT = 298,                     /* INT  */
    STRING = 299,                  /* STRING  */
    COMPLEXTYPE = 300,             /* COMPLEXTYPE  */
    BYTE = 301,                    /* BYTE  */
    FLOAT = 302,                   /* FLOAT  */
    RUNE = 303,                    /* RUNE  */
    UINT = 304,                    /* UINT  */
    BOOL_TYPE = 305,               /* BOOL_TYPE  */
    TYPE = 306,                    /* TYPE  */
    STRUCT = 307,                  /* STRUCT  */
    UINTPTR = 308,                 /* UINTPTR  */
    ERRORTYPE = 309,               /* ERRORTYPE  */
    ANYTYPE = 310,                 /* ANYTYPE  */
    COMPARABLE = 311,              /* COMPARABLE  */
    EQ = 312,                      /* EQ  */
    INC = 313,                     /* INC  */
    DEC = 314,                     /* DEC  */
    SUBEQ = 315,                   /* SUBEQ  */
    PLUSEQ = 316,                  /* PLUSEQ  */
    MULEQ = 317,                   /* MULEQ  */
    DIVEQ = 318,                   /* DIVEQ  */
    MODEQ = 319,                   /* MODEQ  */
    EQUAL = 320,                   /* EQUAL  */
    NOTEQUAL = 321,                /* NOTEQUAL  */
    GREATEROREQUAL = 322,          /* GREATEROREQUAL  */
    LESSOREQUAL = 323,             /* LESSOREQUAL  */
    AND = 324,                     /* AND  */
    OR = 325,                      /* OR  */
    LSHIFT = 326,                  /* LSHIFT  */
    RSHIFT = 327,                  /* RSHIFT  */
    PEQ = 328,                     /* PEQ  */
    XOR = 329,                     /* XOR  */
    SEMICOLON = 330,               /* SEMICOLON  */
    AMP_EXP = 331,                 /* AMP_EXP  */
    POINT = 332                    /* POINT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define PACKAGE 258
#define IMPORTS 259
#define FUNCTION 260
#define id 261
#define VAR 262
#define EOL 263
#define CONST 264
#define METHOD 265
#define IF 266
#define ELSE 267
#define SWITCH 268
#define CASE 269
#define FALLTHROUGH 270
#define DEFAULT 271
#define FOR 272
#define BREAK 273
#define RANGE 274
#define NEW 275
#define SELECT 276
#define RETURN 277
#define MAP 278
#define GO 279
#define GOTO 280
#define INTERFACE 281
#define CHAN 282
#define CONTINUE 283
#define DEFER 284
#define CONST_INT 285
#define CONST_CHAR 286
#define CONST_STRING 287
#define BOOL 288
#define IOTA 289
#define CONST_OCTAL 290
#define CONST_HEX 291
#define CONST_BIN 292
#define FLOAT_HEX 293
#define DECIMAL_FLOAT_LIT 294
#define HEX_FLOAT_LIT 295
#define CONST_INT_ERR 296
#define CONST_BIN_ERR 297
#define INT 298
#define STRING 299
#define COMPLEXTYPE 300
#define BYTE 301
#define FLOAT 302
#define RUNE 303
#define UINT 304
#define BOOL_TYPE 305
#define TYPE 306
#define STRUCT 307
#define UINTPTR 308
#define ERRORTYPE 309
#define ANYTYPE 310
#define COMPARABLE 311
#define EQ 312
#define INC 313
#define DEC 314
#define SUBEQ 315
#define PLUSEQ 316
#define MULEQ 317
#define DIVEQ 318
#define MODEQ 319
#define EQUAL 320
#define NOTEQUAL 321
#define GREATEROREQUAL 322
#define LESSOREQUAL 323
#define AND 324
#define OR 325
#define LSHIFT 326
#define RSHIFT 327
#define PEQ 328
#define XOR 329
#define SEMICOLON 330
#define AMP_EXP 331
#define POINT 332

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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
  YYSYMBOL_PACKAGE = 3,                    /* PACKAGE  */
  YYSYMBOL_IMPORTS = 4,                    /* IMPORTS  */
  YYSYMBOL_FUNCTION = 5,                   /* FUNCTION  */
  YYSYMBOL_id = 6,                         /* id  */
  YYSYMBOL_VAR = 7,                        /* VAR  */
  YYSYMBOL_EOL = 8,                        /* EOL  */
  YYSYMBOL_CONST = 9,                      /* CONST  */
  YYSYMBOL_METHOD = 10,                    /* METHOD  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_SWITCH = 13,                    /* SWITCH  */
  YYSYMBOL_CASE = 14,                      /* CASE  */
  YYSYMBOL_FALLTHROUGH = 15,               /* FALLTHROUGH  */
  YYSYMBOL_DEFAULT = 16,                   /* DEFAULT  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_BREAK = 18,                     /* BREAK  */
  YYSYMBOL_RANGE = 19,                     /* RANGE  */
  YYSYMBOL_NEW = 20,                       /* NEW  */
  YYSYMBOL_SELECT = 21,                    /* SELECT  */
  YYSYMBOL_RETURN = 22,                    /* RETURN  */
  YYSYMBOL_MAP = 23,                       /* MAP  */
  YYSYMBOL_GO = 24,                        /* GO  */
  YYSYMBOL_GOTO = 25,                      /* GOTO  */
  YYSYMBOL_INTERFACE = 26,                 /* INTERFACE  */
  YYSYMBOL_CHAN = 27,                      /* CHAN  */
  YYSYMBOL_CONTINUE = 28,                  /* CONTINUE  */
  YYSYMBOL_DEFER = 29,                     /* DEFER  */
  YYSYMBOL_CONST_INT = 30,                 /* CONST_INT  */
  YYSYMBOL_CONST_CHAR = 31,                /* CONST_CHAR  */
  YYSYMBOL_CONST_STRING = 32,              /* CONST_STRING  */
  YYSYMBOL_BOOL = 33,                      /* BOOL  */
  YYSYMBOL_IOTA = 34,                      /* IOTA  */
  YYSYMBOL_CONST_OCTAL = 35,               /* CONST_OCTAL  */
  YYSYMBOL_CONST_HEX = 36,                 /* CONST_HEX  */
  YYSYMBOL_CONST_BIN = 37,                 /* CONST_BIN  */
  YYSYMBOL_FLOAT_HEX = 38,                 /* FLOAT_HEX  */
  YYSYMBOL_DECIMAL_FLOAT_LIT = 39,         /* DECIMAL_FLOAT_LIT  */
  YYSYMBOL_HEX_FLOAT_LIT = 40,             /* HEX_FLOAT_LIT  */
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
  YYSYMBOL_AMP_EXP = 76,                   /* AMP_EXP  */
  YYSYMBOL_POINT = 77,                     /* POINT  */
  YYSYMBOL_78_ = 78,                       /* '+'  */
  YYSYMBOL_79_ = 79,                       /* '-'  */
  YYSYMBOL_80_ = 80,                       /* '*'  */
  YYSYMBOL_81_ = 81,                       /* '/'  */
  YYSYMBOL_82_ = 82,                       /* '('  */
  YYSYMBOL_83_ = 83,                       /* ')'  */
  YYSYMBOL_84_ = 84,                       /* ','  */
  YYSYMBOL_85_ = 85,                       /* '{'  */
  YYSYMBOL_86_ = 86,                       /* '}'  */
  YYSYMBOL_87_ = 87,                       /* '['  */
  YYSYMBOL_88_ = 88,                       /* ']'  */
  YYSYMBOL_89_ = 89,                       /* ':'  */
  YYSYMBOL_90_ = 90,                       /* '!'  */
  YYSYMBOL_91_ = 91,                       /* '>'  */
  YYSYMBOL_92_ = 92,                       /* '<'  */
  YYSYMBOL_93_ = 93,                       /* '%'  */
  YYSYMBOL_94_ = 94,                       /* '&'  */
  YYSYMBOL_95_ = 95,                       /* '|'  */
  YYSYMBOL_YYACCEPT = 96,                  /* $accept  */
  YYSYMBOL_prog = 97,                      /* prog  */
  YYSYMBOL_variables = 98,                 /* variables  */
  YYSYMBOL_definitions = 99,               /* definitions  */
  YYSYMBOL_var_definition = 100,           /* var_definition  */
  YYSYMBOL_const_definition = 101,         /* const_definition  */
  YYSYMBOL_begin_const_definition = 102,   /* begin_const_definition  */
  YYSYMBOL_mass = 103,                     /* mass  */
  YYSYMBOL_mass_len = 104,                 /* mass_len  */
  YYSYMBOL_mass_index = 105,               /* mass_index  */
  YYSYMBOL_mass_len_list = 106,            /* mass_len_list  */
  YYSYMBOL_var_def_list = 107,             /* var_def_list  */
  YYSYMBOL_var_def = 108,                  /* var_def  */
  YYSYMBOL_data_list = 109,                /* data_list  */
  YYSYMBOL_simple_definition = 110,        /* simple_definition  */
  YYSYMBOL_typeless_def = 111,             /* typeless_def  */
  YYSYMBOL_other_definitions = 112,        /* other_definitions  */
  YYSYMBOL_other = 113,                    /* other  */
  YYSYMBOL_list = 114,                     /* list  */
  YYSYMBOL_struct_def = 115,               /* struct_def  */
  YYSYMBOL_struct_body = 116,              /* struct_body  */
  YYSYMBOL_struct_list = 117,              /* struct_list  */
  YYSYMBOL_struct_contain = 118,           /* struct_contain  */
  YYSYMBOL_struct_init = 119,              /* struct_init  */
  YYSYMBOL_expression = 120,               /* expression  */
  YYSYMBOL_expression_args = 121,          /* expression_args  */
  YYSYMBOL_single_expression = 122,        /* single_expression  */
  YYSYMBOL_logical_expression = 123,       /* logical_expression  */
  YYSYMBOL_log_arguments = 124,            /* log_arguments  */
  YYSYMBOL_logical_condition = 125,        /* logical_condition  */
  YYSYMBOL_logical_operator = 126,         /* logical_operator  */
  YYSYMBOL_id_list = 127,                  /* id_list  */
  YYSYMBOL_body = 128,                     /* body  */
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
  YYSYMBOL_eq_op = 139,                    /* eq_op  */
  YYSYMBOL_for_loop = 140,                 /* for_loop  */
  YYSYMBOL_for_def = 141,                  /* for_def  */
  YYSYMBOL_for_cond = 142,                 /* for_cond  */
  YYSYMBOL_for_act = 143,                  /* for_act  */
  YYSYMBOL_actions = 144,                  /* actions  */
  YYSYMBOL_function_call = 145,            /* function_call  */
  YYSYMBOL_operator = 146,                 /* operator  */
  YYSYMBOL_type = 147,                     /* type  */
  YYSYMBOL_data = 148,                     /* data  */
  YYSYMBOL_float_lit = 149,                /* float_lit  */
  YYSYMBOL_methods = 150,                  /* methods  */
  YYSYMBOL_method_arguments = 151,         /* method_arguments  */
  YYSYMBOL_arg_list = 152,                 /* arg_list  */
  YYSYMBOL_arguments = 153                 /* arguments  */
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
#define YYLAST   1374

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  344

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
       2,     2,     2,    90,     2,     2,     2,    93,    94,     2,
      82,    83,    80,    78,    84,    79,     2,    81,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,     2,
      92,     2,    91,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    87,     2,    88,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,    95,    86,     2,     2,     2,     2,
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
       0,    30,    30,    31,    32,    33,    37,    38,    39,    40,
      41,    42,    47,    48,    49,    51,    52,    56,    57,    58,
      59,    61,    62,    63,    64,    65,    66,    71,    72,    73,
      74,    75,    78,    79,    80,    81,    82,    84,    85,    87,
      88,    89,    90,    95,    96,    98,    99,   100,   103,   104,
     106,   107,   108,   109,   110,   113,   114,   115,   118,   119,
     120,   123,   124,   125,   126,   127,   129,   130,   133,   136,
     137,   139,   140,   142,   143,   145,   151,   152,   155,   156,
     157,   158,   159,   162,   163,   164,   165,   168,   169,   170,
     172,   173,   175,   176,   177,   179,   180,   182,   183,   184,
     185,   189,   190,   197,   198,   199,   202,   203,   205,   206,
     207,   209,   210,   213,   214,   219,   220,   223,   224,   226,
     227,   228,   229,   233,   234,   235,   236,   238,   239,   240,
     241,   282,   283,   284,   285,   286,   287,   288,   292,   293,
     296,   297,   298,   302,   303,   305,   306,   309,   310,   311,
     312,   313,   314,   315,   316,   321,   322,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     365,   366,   371,   373,   374,   376,   377,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390
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
  "FUNCTION", "id", "VAR", "EOL", "CONST", "METHOD", "IF", "ELSE",
  "SWITCH", "CASE", "FALLTHROUGH", "DEFAULT", "FOR", "BREAK", "RANGE",
  "NEW", "SELECT", "RETURN", "MAP", "GO", "GOTO", "INTERFACE", "CHAN",
  "CONTINUE", "DEFER", "CONST_INT", "CONST_CHAR", "CONST_STRING", "BOOL",
  "IOTA", "CONST_OCTAL", "CONST_HEX", "CONST_BIN", "FLOAT_HEX",
  "DECIMAL_FLOAT_LIT", "HEX_FLOAT_LIT", "CONST_INT_ERR", "CONST_BIN_ERR",
  "INT", "STRING", "COMPLEXTYPE", "BYTE", "FLOAT", "RUNE", "UINT",
  "BOOL_TYPE", "TYPE", "STRUCT", "UINTPTR", "ERRORTYPE", "ANYTYPE",
  "COMPARABLE", "EQ", "INC", "DEC", "SUBEQ", "PLUSEQ", "MULEQ", "DIVEQ",
  "MODEQ", "EQUAL", "NOTEQUAL", "GREATEROREQUAL", "LESSOREQUAL", "AND",
  "OR", "LSHIFT", "RSHIFT", "PEQ", "XOR", "SEMICOLON", "AMP_EXP", "POINT",
  "'+'", "'-'", "'*'", "'/'", "'('", "')'", "','", "'{'", "'}'", "'['",
  "']'", "':'", "'!'", "'>'", "'<'", "'%'", "'&'", "'|'", "$accept",
  "prog", "variables", "definitions", "var_definition", "const_definition",
  "begin_const_definition", "mass", "mass_len", "mass_index",
  "mass_len_list", "var_def_list", "var_def", "data_list",
  "simple_definition", "typeless_def", "other_definitions", "other",
  "list", "struct_def", "struct_body", "struct_list", "struct_contain",
  "struct_init", "expression", "expression_args", "single_expression",
  "logical_expression", "log_arguments", "logical_condition",
  "logical_operator", "id_list", "body", "return_value", "parameters",
  "parameter_list", "statements", "statement", "if_block", "else_block",
  "conditions", "condition", "cond_args", "eq_op", "for_loop", "for_def",
  "for_cond", "for_act", "actions", "function_call", "operator", "type",
  "data", "float_lit", "methods", "method_arguments", "arg_list",
  "arguments", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-245)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-208)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      29,    43,   209,  -245,  -245,   -30,   -22,     7,     8,    53,
    -245,  -245,   785,  -245,    94,    98,   919,    24,   110,   785,
     110,   785,    71,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,   406,   485,   132,   347,  -245,   831,  -245,  -245,  -245,
      91,   436,    70,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,    67,  -245,   919,    75,   110,  -245,   800,
    -245,     5,    79,   548,  -245,    84,   908,  1138,   644,   104,
    -245,  1163,  1163,   119,    57,   839,   127,   980,   134,   104,
     127,  -245,   -22,   -22,  -245,   129,  -245,  1005,  1041,  -245,
    -245,  -245,   464,   347,   890,   145,   898,  -245,   142,  -245,
    -245,   919,   174,  -245,    79,   816,   644,   644,  -245,   119,
     177,   229,   919,  1215,   944,  1077,   919,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,   644,   644,  -245,  -245,  1230,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  1247,   303,  -245,  1215,  -245,    24,
      24,  -245,  -245,  -245,   672,   104,  1163,    57,   127,    67,
     347,   153,  -245,   154,   157,   237,  -245,   104,   919,  1163,
    1163,  1163,  1163,   644,   845,   159,   229,  -245,  -245,   104,
     163,   229,   919,  -245,  -245,  -245,  -245,   -52,    57,  -245,
     -22,  -245,  -245,   612,     9,    50,   161,   166,   722,  -245,
     142,  -245,   876,   898,   -22,   104,  1163,  1163,   168,  -245,
    -245,  -245,  -245,  -245,   -29,    24,   530,  -245,  -245,  -245,
    1102,   671,  -245,  -245,  -245,  -245,   315,   171,   245,    24,
     229,   543,  -245,  -245,   685,   176,  1262,   627,   180,  -245,
    1163,  -245,    57,    57,   179,   315,   251,  -245,  -245,  -245,
    -245,   315,  -245,   183,  -245,  -245,   165,   735,  -245,   260,
     165,   -18,    33,    57,   -24,  -245,   -34,    57,   195,   188,
       1,   266,   266,  -245,  -245,    -1,   189,  -245,   326,    90,
     271,  -245,  1163,    57,    57,  1250,  -245,   196,   197,  -245,
    -245,  -245,   165,  -245,   -22,   199,    64,  1230,   315,    48,
    -245,  -245,   427,   315,  1270,   108,  -245,  -245,   315,   251,
    -245,  -245,   919,  1238,   -22,  -245,   150,   210,    24,  -245,
      57,   194,   217,   208,  1282,  -245,   213,    59,    24,  -245,
    -245,  -245,   683,  -245,  -245,  -245,   -13,  1163,  -245,   215,
      54,   315,   280,  -245
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,   103,    98,     0,     0,     0,
       3,     5,     0,     4,     0,     0,     0,    99,    16,     0,
       0,     0,     0,   172,   173,   174,   175,   176,   177,   178,
     179,   127,     0,     0,     0,     8,     0,    13,    14,    12,
      54,     0,     0,   184,   185,   186,   187,   189,   182,   183,
     181,   190,   191,     0,   188,     0,     0,    15,    44,     0,
       6,     0,    17,     0,     7,     0,    98,    64,     0,    63,
      58,    62,     0,    61,    59,     0,     0,    49,     0,    55,
       0,    49,    97,    78,    81,     0,    34,     0,     0,    79,
      36,   180,   127,     0,     0,     0,   107,    37,     0,     9,
      43,     0,    46,    11,    19,    20,     0,     0,    10,    18,
       0,    69,     0,     0,    99,     0,     0,   162,   163,   164,
     165,   166,   170,   171,   169,   157,   158,   161,   160,   159,
     167,   168,     0,     0,    95,    96,   127,   131,   132,   133,
     134,   135,   136,   137,   127,     0,    60,     0,    57,   100,
      80,    35,    33,    32,    78,    50,    51,    52,     0,    79,
       0,     0,   104,     0,   106,     0,    38,    45,     0,    25,
      26,    21,    22,     0,     0,     0,    70,    72,   124,    66,
       0,    67,     0,    82,    48,    76,    77,   129,   126,   128,
     129,   123,    31,     0,     0,     0,    49,     0,    80,    53,
      79,   105,     0,     0,   109,    47,    23,    24,     0,    73,
      68,    71,    65,   125,   130,   130,    78,    41,    30,    40,
      49,     0,    28,    27,    39,    56,   112,     0,     0,   110,
      69,    80,    42,    29,    78,    81,   127,   127,     0,   147,
     150,   151,   153,     0,     0,   111,   149,   154,   114,   152,
     148,   112,   108,     0,    83,    84,   127,    80,    90,     0,
     127,   129,     0,   120,   129,   142,     0,   143,     0,     0,
       0,     0,     0,   102,   113,     0,     0,    74,    78,    81,
       0,   206,   201,   205,   204,    79,   200,     0,   193,   196,
      85,    86,   127,    91,    92,     0,   130,   127,   112,   130,
     140,   141,   127,   112,    94,     0,    87,    88,   112,   118,
     116,   101,     0,    80,   202,   155,   127,     0,    93,   192,
     119,     0,     0,     0,    94,    89,     0,     0,   203,   195,
     156,   115,     0,   139,   117,    75,    78,   146,   145,     0,
      80,     0,     0,   138
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -245,  -245,   293,   187,  -245,  -245,   242,   -72,  -245,   -40,
    -245,  -245,   247,   -28,  -245,    39,    40,   114,   181,  -245,
      78,   -94,  -145,  -245,   -31,    60,    -9,  -236,   -45,  -242,
    -213,    20,  -245,  -245,  -245,  -245,  -183,   -23,    52,  -245,
    -245,   -26,   185,   255,  -245,  -245,    42,  -245,  -239,  -245,
     -63,    65,   -14,  -245,  -244,  -238,  -245,    15
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,   239,    35,    56,    61,    62,   146,    36,    17,
     193,    57,    58,    69,    37,    38,    39,    70,   180,    11,
     175,   176,   177,   281,   240,    72,   241,   242,   243,   258,
     136,    12,    13,    15,   163,   164,   244,   245,   246,   310,
     262,   284,    75,   259,   247,   268,   269,   339,   248,   249,
     132,    40,    89,    54,   250,   287,   288,   289
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,    94,    53,    87,    79,    74,   274,   304,   148,   133,
     236,     6,   286,     6,     6,   293,   286,    77,    81,   181,
     283,   112,   295,    31,   283,   133,   114,    19,    21,   271,
     272,   211,     1,   -98,   305,    16,   211,   115,    59,    32,
      63,    98,   149,   150,   182,   254,   255,     3,   286,   112,
      33,    73,    14,   181,   317,   112,   283,  -121,    55,    22,
     -98,   156,    87,    16,   155,    16,   157,  -121,   276,    16,
     271,   293,   286,   167,    16,   169,   171,    59,    77,   159,
     283,   105,   293,   109,   308,   179,   199,    81,   103,    18,
      20,   238,   271,   221,    88,   222,    76,    80,   178,    81,
      41,    91,   184,   274,    42,   -99,    95,   133,   297,   133,
     188,    55,   290,   291,   198,   321,     6,   194,   298,   179,
     323,   182,   189,    65,   102,   326,   134,   135,   110,    87,
     189,   196,   -99,    81,    33,    55,   223,   182,    82,  -122,
     205,    55,   206,   116,   133,   335,   200,   214,    92,  -122,
     215,    55,    96,    88,    81,    97,   278,   158,    99,   161,
     279,   165,    71,   106,   229,   195,   170,   172,   213,   111,
     110,   278,   260,  -207,  -207,   279,   231,   134,   135,   220,
      43,    44,    45,    46,    47,    48,    49,    50,   116,    51,
      52,   325,   185,   186,   257,    43,    44,    45,    46,    47,
      48,    49,    50,    33,    51,    52,    60,   184,    64,     4,
     263,   267,   145,    73,     5,     6,     7,   151,     8,   147,
      88,   296,   189,   189,   299,   282,   306,   307,   162,   282,
     166,   168,    68,   207,   173,   174,   201,   202,   313,   209,
     238,   203,   285,   204,   280,   210,   285,    68,  -194,   212,
     224,   252,   225,   230,   318,   238,   251,   266,   260,   280,
       9,   282,   270,   275,   324,   273,   294,   227,   228,   277,
     302,   320,   304,   303,   328,   311,   267,   314,   285,   315,
     331,   316,   319,   189,   327,   282,   234,     7,   189,     8,
     235,   236,   332,   330,   333,    10,   340,   237,    81,   334,
     341,   337,   285,   104,   100,   300,   301,   219,   253,     6,
      43,    44,    45,    46,    47,    48,    49,    50,   342,    51,
      52,   234,     7,   338,     8,   235,   236,   309,   197,   191,
     144,   329,   237,    43,    44,    45,    46,    47,    48,    49,
      50,     0,    51,    52,   322,    43,    44,    45,    46,    47,
      48,    49,    50,    83,    51,    52,     0,    84,     0,     0,
       0,     0,    68,     0,     0,     0,   343,     0,     0,     0,
     238,     0,     0,     0,     0,     0,     0,    43,    44,    45,
      46,    47,    48,    49,    50,     0,    51,    52,     0,   192,
       0,   137,   138,   139,   140,   -94,   -94,    68,     0,   112,
       0,     0,   141,     0,     0,   238,     0,     0,     0,  -198,
    -198,   312,    66,    16,     0,     0,    67,   142,   143,     0,
       0,     0,     0,     0,    85,     0,     0,     0,     0,    68,
       0,     0,     0,   187,     0,    86,    43,    44,    45,    46,
      47,    48,    49,    50,     0,    51,    52,     0,     0,    23,
      24,    25,    26,    27,    28,    29,    30,    43,    44,    45,
      46,    47,    48,    49,    50,     0,    51,    52,     0,     0,
     154,     0,     0,     0,    84,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,    29,    30,     0,    68,     0,
       0,    78,     0,    34,    43,    44,    45,    46,    47,    48,
      49,    50,  -144,    51,    52,     0,     0,    23,    24,    25,
      26,    27,    28,    29,    30,    43,    44,    45,    46,    47,
      48,    49,    50,    93,    51,    52,     0,     0,    23,    24,
      25,    26,    27,    28,    29,    30,   -98,     0,     0,     0,
     -98,     0,     0,     0,     0,     0,    68,     0,     0,   -99,
       0,    34,     0,   -99,     6,     0,     0,     0,     0,     0,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,     0,   -98,
     -98,     0,    34,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,     0,   -99,   -99,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,    27,    28,    29,    30,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,     0,
       0,     0,   -98,     0,   -98,   113,   -98,    16,   216,     0,
       0,     0,    67,     0,     0,   -99,     0,   -99,     0,   -99,
      55,   108,    33,   264,     0,    34,     0,     0,     0,     0,
       0,     0,    43,    44,    45,    46,    47,    48,    49,    50,
      83,    51,    52,     0,    84,     0,     0,    43,    44,    45,
      46,    47,    48,    49,    50,     0,    51,    52,     0,     0,
       0,     0,     0,     0,    43,    44,    45,    46,    47,    48,
      49,    50,     0,    51,    52,     0,     0,     0,     0,   336,
       0,     0,     0,    84,    68,     0,   217,     0,   218,     0,
     265,    43,    44,    45,    46,    47,    48,    49,    50,     0,
      51,    52,  -144,    43,    44,    45,    46,    47,    48,    49,
      50,     0,    51,    52,     0,     0,    68,     0,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,     0,  -129,  -129,  -129,
    -129,     0,   -98,   254,   255,   112,     0,     0,  -129,     0,
     137,   138,   139,   140,   -94,   -94,     0,   233,   -98,    16,
       0,   141,     0,  -129,  -129,    68,     0,   256,     0,   -98,
       0,     0,    16,     0,     0,     0,   142,   143,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,     0,  -130,  -130,  -130,
    -130,     0,   -99,   290,   291,   182,     0,     0,  -130,     0,
     137,   138,   139,   140,   -94,   -94,     0,     0,   -99,    55,
       0,   141,     0,  -130,  -130,     0,     0,   292,     0,   -99,
       0,     0,    55,     0,     0,     0,   142,   143,    23,    24,
      25,    26,    27,    28,    29,    30,     0,     0,     0,     0,
       0,     0,    31,    23,    24,    25,    26,    27,    28,    29,
      30,     0,     0,     0,     0,     0,     0,   101,    32,    23,
      24,    25,    26,    27,    28,    29,    30,     0,     0,    33,
       0,     0,    34,   107,    23,    24,    25,    26,    27,    28,
      29,    30,     0,     0,    33,     0,     0,    34,    23,    24,
      25,    26,    27,    28,    29,    30,     0,   208,     0,     0,
      33,     0,     0,    34,   137,   138,   139,   140,     0,     0,
       0,    90,     0,     0,     0,   141,     0,     0,    34,    23,
      24,    25,    26,    27,    28,    29,    30,     0,     0,     0,
     142,   143,    34,    23,    24,    25,    26,    27,    28,    29,
      30,    23,    24,    25,    26,    27,    28,    29,    30,    43,
      44,    45,    46,    47,    48,    49,    50,     0,    51,    52,
       0,   226,     0,    34,     0,     0,     0,     0,   -78,   -78,
     -78,   -78,   -78,  -129,  -129,  -129,  -129,   160,     0,   -78,
     -78,   112,   -78,     0,  -129,    34,   -78,   -78,   -78,   -78,
       0,     0,     0,   113,     0,    16,     0,     0,     0,  -129,
    -129,   -78,   -78,   -78,   -80,   -80,   -80,   -80,   -80,  -130,
    -130,  -130,  -130,     0,     0,   -80,   -80,   182,   -80,     0,
    -130,     0,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
       0,    55,     0,     0,     0,  -130,  -130,   -80,   -80,   -80,
     -79,   -79,   -79,   -79,   -79,  -128,  -128,  -128,  -128,     0,
       0,   -79,   -79,     0,   -79,     0,  -128,     0,   -79,   -79,
     -79,   -79,     0,     0,     0,   117,   118,   119,   120,   121,
       0,  -128,  -128,   -79,   -79,   -79,   122,   123,     0,   124,
       0,     0,     0,   125,   126,   127,   128,     0,     0,     0,
       0,     0,     0,   152,     0,     0,     0,     0,   129,   130,
     131,   117,   118,   119,   120,   121,     0,     0,     0,     0,
       0,     0,   122,   123,     0,   124,     0,     0,     0,   125,
     126,   127,   128,     0,     0,     0,     0,     0,     0,   153,
       0,     0,     0,     0,   129,   130,   131,   117,   118,   119,
     120,   121,     0,     0,     0,     0,     0,     0,   122,   123,
       0,   124,     0,     0,     0,   125,   126,   127,   128,     0,
     183,     0,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
     129,   130,   131,   -79,   -79,     0,   -79,     0,     0,     0,
     -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,     0,
       0,   232,     0,     0,     0,   -79,   -79,   -79,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,     0,     0,     0,   -81,
     -81,     0,   -81,     0,     0,     0,   -81,   -81,   -81,   -81,
       0,   174,     0,   117,   118,   119,   120,   121,     0,     0,
       0,   -81,   -81,   -81,   122,   123,   187,   124,     0,     0,
       0,   125,   126,   127,   128,    43,    44,    45,    46,    47,
      48,    49,    50,   190,    51,    52,   129,   130,   131,     0,
      43,    44,    45,    46,    47,    48,    49,    50,   261,    51,
      52,     0,     0,     0,     0,     0,     0,    43,    44,    45,
      46,    47,    48,    49,    50,     0,    51,    52,     0,     0,
       0,     0,    43,    44,    45,    46,    47,    48,    49,    50,
       0,    51,    52,   137,   138,   139,   140,   -94,   -94,     0,
       0,   182,     0,     0,   141,  -128,  -128,  -128,  -128,     0,
       0,  -199,  -199,     0,     0,    55,  -128,     0,     0,   142,
     143,     0,     0,  -197,  -197,   137,   138,   139,   140,     0,
       0,  -128,  -128,     0,     0,     0,   141,   137,   138,   139,
     140,     0,     0,     0,     0,     0,     0,    16,   141,     0,
       0,   142,   143,     0,     0,     0,     0,     0,     0,    55,
       0,     0,     0,   142,   143
};

static const yytype_int16 yycheck[] =
{
      31,    41,    16,    34,    32,    31,   245,     6,    80,    72,
      11,     6,   256,     6,     6,   257,   260,    31,    32,   113,
     256,    73,   260,    57,   260,    88,    66,     7,     8,   242,
     243,   176,     3,    57,   270,    87,   181,    68,    18,    73,
      20,    55,    82,    83,    73,    58,    59,     4,   292,    73,
      84,    31,    82,   147,   292,    73,   292,    75,    87,     6,
      84,    92,    93,    87,    92,    87,    92,    85,   251,    87,
     283,   313,   316,   101,    87,   106,   107,    57,    92,    93,
     316,    61,   324,    63,    85,   113,   158,   101,    83,    82,
      82,    90,   305,    84,    34,    86,    31,    32,   112,   113,
       6,    36,   116,   342,     6,    57,    41,   170,    75,   172,
     136,    87,    58,    59,   154,   298,     6,   145,    85,   147,
     303,    73,   136,    52,    59,   308,    69,    70,    63,   160,
     144,   145,    84,   147,    84,    87,    86,    73,     6,    75,
     168,    87,   173,    84,   207,    86,   160,   187,    57,    85,
     190,    87,    82,    93,   168,    88,     6,    92,    83,    94,
      10,    96,   193,    84,   204,   145,   106,   107,   182,    85,
     105,     6,    82,    83,    84,    10,   216,    69,    70,   193,
      30,    31,    32,    33,    34,    35,    36,    37,    84,    39,
      40,    83,   132,   133,   234,    30,    31,    32,    33,    34,
      35,    36,    37,    84,    39,    40,    19,   221,    21,     0,
     236,   237,    85,   193,     5,     6,     7,    88,     9,    85,
     160,   261,   236,   237,   264,   256,   271,   272,    83,   260,
      88,    57,    82,   173,    57,     6,    83,    83,   278,   174,
      90,    84,   256,     6,    94,    86,   260,    82,    83,    86,
      89,     6,    86,    85,   294,    90,    85,   237,    82,    94,
      51,   292,    82,    12,   304,    86,     6,   202,   203,    86,
      75,   297,     6,    85,   314,    86,   302,     6,   292,    83,
      86,    84,    83,   297,   312,   316,     6,     7,   302,     9,
      10,    11,    75,    83,    86,     2,   336,    17,   312,    86,
      85,   332,   316,    61,    57,   266,   266,   193,   230,     6,
      30,    31,    32,    33,    34,    35,    36,    37,   341,    39,
      40,     6,     7,   332,     9,    10,    11,   275,   147,   144,
      75,   316,    17,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    39,    40,   302,    30,    31,    32,    33,    34,
      35,    36,    37,     6,    39,    40,    -1,    10,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    39,    40,    -1,    86,
      -1,    65,    66,    67,    68,    69,    70,    82,    -1,    73,
      -1,    -1,    76,    -1,    -1,    90,    -1,    -1,    -1,    83,
      84,    85,     6,    87,    -1,    -1,    10,    91,    92,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,     6,    -1,    88,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    39,    40,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    39,    40,    -1,    -1,
       6,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    82,    -1,
      -1,     6,    -1,    87,    30,    31,    32,    33,    34,    35,
      36,    37,    75,    39,    40,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    30,    31,    32,    33,    34,
      35,    36,    37,    87,    39,    40,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,     6,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,     6,
      -1,    87,    -1,    10,     6,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    39,
      40,    -1,    87,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    84,    85,    86,    87,     6,    -1,
      -1,    -1,    10,    -1,    -1,    82,    -1,    84,    -1,    86,
      87,    83,    84,     6,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
       6,    39,    40,    -1,    10,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,     6,
      -1,    -1,    -1,    10,    82,    -1,    84,    -1,    86,    -1,
      73,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      39,    40,    85,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    39,    40,    -1,    -1,    82,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    65,    66,    67,
      68,    -1,    57,    58,    59,    73,    -1,    -1,    76,    -1,
      65,    66,    67,    68,    69,    70,    -1,    86,    73,    87,
      -1,    76,    -1,    91,    92,    82,    -1,    82,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    91,    92,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    65,    66,    67,
      68,    -1,    57,    58,    59,    73,    -1,    -1,    76,    -1,
      65,    66,    67,    68,    69,    70,    -1,    -1,    73,    87,
      -1,    76,    -1,    91,    92,    -1,    -1,    82,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    91,    92,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    57,    73,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    84,
      -1,    -1,    87,    57,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    84,    -1,    -1,    87,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    -1,    -1,
      84,    -1,    -1,    87,    65,    66,    67,    68,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    76,    -1,    -1,    87,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      91,    92,    87,    43,    44,    45,    46,    47,    48,    49,
      50,    43,    44,    45,    46,    47,    48,    49,    50,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    39,    40,
      -1,    85,    -1,    87,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    87,    -1,    71,
      72,    73,    74,    -1,    76,    87,    78,    79,    80,    81,
      -1,    -1,    -1,    85,    -1,    87,    -1,    -1,    -1,    91,
      92,    93,    94,    95,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    -1,    71,    72,    73,    74,    -1,
      76,    -1,    78,    79,    80,    81,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    91,    92,    93,    94,    95,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      -1,    71,    72,    -1,    74,    -1,    76,    -1,    78,    79,
      80,    81,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      -1,    91,    92,    93,    94,    95,    71,    72,    -1,    74,
      -1,    -1,    -1,    78,    79,    80,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    93,    94,
      95,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    -1,    74,    -1,    -1,    -1,    78,
      79,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    -1,    93,    94,    95,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      -1,    74,    -1,    -1,    -1,    78,    79,    80,    81,    -1,
      83,    -1,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      93,    94,    95,    71,    72,    -1,    74,    -1,    -1,    -1,
      78,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    93,    94,    95,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    -1,    74,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,     6,    -1,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    93,    94,    95,    71,    72,     6,    74,    -1,    -1,
      -1,    78,    79,    80,    81,    30,    31,    32,    33,    34,
      35,    36,    37,     6,    39,    40,    93,    94,    95,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,     6,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    39,    40,    65,    66,    67,    68,    69,    70,    -1,
      -1,    73,    -1,    -1,    76,    65,    66,    67,    68,    -1,
      -1,    83,    84,    -1,    -1,    87,    76,    -1,    -1,    91,
      92,    -1,    -1,    83,    84,    65,    66,    67,    68,    -1,
      -1,    91,    92,    -1,    -1,    -1,    76,    65,    66,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    87,    76,    -1,
      -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    91,    92
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    97,     4,     0,     5,     6,     7,     9,    51,
      98,   115,   127,   128,    82,   129,    87,   105,    82,   127,
      82,   127,     6,    43,    44,    45,    46,    47,    48,    49,
      50,    57,    73,    84,    87,    99,   104,   110,   111,   112,
     147,     6,     6,    30,    31,    32,    33,    34,    35,    36,
      37,    39,    40,   148,   149,    87,   100,   107,   108,   127,
      99,   101,   102,   127,    99,    52,     6,    10,    82,   109,
     113,   120,   121,   127,   137,   138,   147,   148,     6,   109,
     147,   148,     6,     6,    10,    77,    88,   120,   121,   148,
      80,   147,    57,    87,   105,   147,    82,    88,   148,    83,
     108,    57,   147,    83,   102,   127,    84,    57,    83,   127,
     147,    85,    73,    85,   105,   120,    84,    60,    61,    62,
      63,    64,    71,    72,    74,    78,    79,    80,    81,    93,
      94,    95,   146,   146,    69,    70,   126,    65,    66,    67,
      68,    76,    91,    92,   139,    85,   103,    85,   103,   105,
     105,    88,    88,    88,     6,   109,   120,   137,   147,   148,
      87,   147,    83,   130,   131,   147,    88,   109,    57,   120,
     121,   120,   121,    57,     6,   116,   117,   118,   148,   109,
     114,   117,    73,    83,   148,   121,   121,     6,   137,   148,
       6,   138,    86,   106,   109,   127,   148,   114,   105,   103,
     148,    83,    83,    84,     6,   109,   120,   121,    52,   147,
      86,   118,    86,   148,   105,   105,     6,    84,    86,   113,
     148,    84,    86,    86,    89,    86,    85,   147,   147,   105,
      85,   105,    89,    86,     6,    10,    11,    17,    90,    98,
     120,   122,   123,   124,   132,   133,   134,   140,   144,   145,
     150,    85,     6,   116,    58,    59,    82,   105,   125,   139,
      82,     6,   136,   137,     6,    73,   127,   137,   141,   142,
      82,   126,   126,    86,   144,    12,   132,    86,     6,    10,
      94,   119,   120,   123,   137,   148,   150,   151,   152,   153,
      58,    59,    82,   125,     6,   151,   105,    75,    85,   105,
     111,   112,    75,    85,     6,   123,   124,   124,    85,   134,
     135,    86,    85,   105,     6,    83,    84,   151,   105,    83,
     137,   132,   142,   132,   105,    83,   132,   109,   105,   153,
      83,    86,    75,    86,    86,    86,     6,   120,   122,   143,
     105,    85,   133,    86
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    97,    97,    97,    98,    98,    98,    98,
      98,    98,    99,    99,    99,   100,   100,   101,   101,   101,
     101,   102,   102,   102,   102,   102,   102,   103,   103,   103,
     103,   103,   104,   104,   104,   104,   104,   105,   105,   106,
     106,   106,   106,   107,   107,   108,   108,   108,   109,   109,
     110,   110,   110,   110,   110,   111,   111,   111,   112,   112,
     112,   113,   113,   113,   113,   113,   114,   114,   115,   116,
     116,   117,   117,   118,   118,   119,   120,   120,   121,   121,
     121,   121,   121,   122,   122,   122,   122,   123,   123,   123,
     124,   124,   125,   125,   125,   126,   126,   127,   127,   127,
     127,   128,   128,   129,   129,   129,   130,   130,   131,   131,
     131,   132,   132,   133,   133,   134,   134,   135,   135,   136,
     136,   136,   136,   137,   137,   137,   137,   138,   138,   138,
     138,   139,   139,   139,   139,   139,   139,   139,   140,   140,
     141,   141,   141,   142,   142,   143,   143,   144,   144,   144,
     144,   144,   144,   144,   144,   145,   145,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     149,   149,   150,   151,   151,   152,   152,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     3,     3,     2,     4,
       4,     4,     1,     1,     1,     1,     0,     1,     2,     2,
       2,     3,     3,     4,     4,     3,     3,     3,     3,     4,
       3,     2,     3,     3,     2,     3,     2,     3,     4,     2,
       2,     2,     3,     2,     1,     3,     2,     4,     3,     1,
       3,     3,     3,     4,     1,     2,     5,     3,     2,     2,
       3,     1,     1,     1,     1,     4,     1,     1,     6,     0,
       1,     2,     1,     2,     5,     4,     3,     3,     1,     1,
       2,     1,     3,     2,     2,     3,     3,     3,     3,     4,
       2,     3,     2,     3,     0,     1,     1,     3,     1,     2,
       4,    10,     9,     0,     4,     5,     1,     0,     4,     2,
       3,     1,     0,     2,     1,     5,     3,     3,     1,     3,
       1,     1,     2,     3,     3,     4,     3,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     9,     5,
       2,     2,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     0,     3,     1,     1,     1,     2,
       1,     1,     2,     3,     1,     1,     1,     1
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
#line 30 "lab.yacc"
                      {printf("Find package and import\n");}
#line 1886 "y.tab.c"
    break;

  case 9: /* variables: VAR '(' var_definition ')'  */
#line 40 "lab.yacc"
                                             {printf("varblock\n");}
#line 1892 "y.tab.c"
    break;

  case 54: /* simple_definition: type  */
#line 110 "lab.yacc"
                                       {printf("type def\n");}
#line 1898 "y.tab.c"
    break;

  case 55: /* typeless_def: PEQ data_list  */
#line 113 "lab.yacc"
                            {printf("typeless definition\n");}
#line 1904 "y.tab.c"
    break;

  case 77: /* expression: expression_args operator expression_args  */
#line 152 "lab.yacc"
                                                                   {printf("expression\n");}
#line 1910 "y.tab.c"
    break;

  case 101: /* body: FUNCTION return_value id '(' parameters ')' type '{' statements '}'  */
#line 189 "lab.yacc"
                                                                          {printf("Find function defenition\n");}
#line 1916 "y.tab.c"
    break;

  case 102: /* body: FUNCTION return_value id '(' parameters ')' '{' statements '}'  */
#line 190 "lab.yacc"
                                                                {printf("Find function defenition\n");}
#line 1922 "y.tab.c"
    break;

  case 115: /* if_block: IF conditions '{' statements '}'  */
#line 219 "lab.yacc"
                                           {printf("ifblock!\n");}
#line 1928 "y.tab.c"
    break;

  case 192: /* methods: METHOD '(' method_arguments ')'  */
#line 371 "lab.yacc"
                                         {printf("Method match\n");}
#line 1934 "y.tab.c"
    break;


#line 1938 "y.tab.c"

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

#line 395 "lab.yacc"


int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
	yyparse();
        fclose(yyin);
	if(error_ == 0)
		printf("OK\n");
        
}
