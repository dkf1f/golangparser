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
    NEG_CONST_INT = 290,           /* NEG_CONST_INT  */
    CONST_OCTAL = 291,             /* CONST_OCTAL  */
    CONST_HEX = 292,               /* CONST_HEX  */
    CONST_BIN = 293,               /* CONST_BIN  */
    FLOAT_HEX = 294,               /* FLOAT_HEX  */
    CONST_INT_ERR = 295,           /* CONST_INT_ERR  */
    CONST_BIN_ERR = 296,           /* CONST_BIN_ERR  */
    INT = 297,                     /* INT  */
    STRING = 298,                  /* STRING  */
    COMPLEXTYPE = 299,             /* COMPLEXTYPE  */
    BYTE = 300,                    /* BYTE  */
    FLOAT = 301,                   /* FLOAT  */
    RUNE = 302,                    /* RUNE  */
    UINT = 303,                    /* UINT  */
    BOOL_TYPE = 304,               /* BOOL_TYPE  */
    TYPE = 305,                    /* TYPE  */
    STRUCT = 306,                  /* STRUCT  */
    UINTPTR = 307,                 /* UINTPTR  */
    ERRORTYPE = 308,               /* ERRORTYPE  */
    ANYTYPE = 309,                 /* ANYTYPE  */
    COMPARABLE = 310,              /* COMPARABLE  */
    EQ = 311,                      /* EQ  */
    INC = 312,                     /* INC  */
    DEC = 313,                     /* DEC  */
    SUBEQ = 314,                   /* SUBEQ  */
    PLUSEQ = 315,                  /* PLUSEQ  */
    MULEQ = 316,                   /* MULEQ  */
    DIVEQ = 317,                   /* DIVEQ  */
    MODEQ = 318,                   /* MODEQ  */
    EQUAL = 319,                   /* EQUAL  */
    NOTEQUAL = 320,                /* NOTEQUAL  */
    GREATEROREQUAL = 321,          /* GREATEROREQUAL  */
    LESSOREQUAL = 322,             /* LESSOREQUAL  */
    AND = 323,                     /* AND  */
    OR = 324,                      /* OR  */
    LSHIFT = 325,                  /* LSHIFT  */
    RSHIFT = 326,                  /* RSHIFT  */
    PEQ = 327,                     /* PEQ  */
    XOR = 328,                     /* XOR  */
    SEMICOLON = 329,               /* SEMICOLON  */
    EXPONENT = 330,                /* EXPONENT  */
    HEX_EXPONENT = 331             /* HEX_EXPONENT  */
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
#define NEG_CONST_INT 290
#define CONST_OCTAL 291
#define CONST_HEX 292
#define CONST_BIN 293
#define FLOAT_HEX 294
#define CONST_INT_ERR 295
#define CONST_BIN_ERR 296
#define INT 297
#define STRING 298
#define COMPLEXTYPE 299
#define BYTE 300
#define FLOAT 301
#define RUNE 302
#define UINT 303
#define BOOL_TYPE 304
#define TYPE 305
#define STRUCT 306
#define UINTPTR 307
#define ERRORTYPE 308
#define ANYTYPE 309
#define COMPARABLE 310
#define EQ 311
#define INC 312
#define DEC 313
#define SUBEQ 314
#define PLUSEQ 315
#define MULEQ 316
#define DIVEQ 317
#define MODEQ 318
#define EQUAL 319
#define NOTEQUAL 320
#define GREATEROREQUAL 321
#define LESSOREQUAL 322
#define AND 323
#define OR 324
#define LSHIFT 325
#define RSHIFT 326
#define PEQ 327
#define XOR 328
#define SEMICOLON 329
#define EXPONENT 330
#define HEX_EXPONENT 331

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
  YYSYMBOL_NEG_CONST_INT = 35,             /* NEG_CONST_INT  */
  YYSYMBOL_CONST_OCTAL = 36,               /* CONST_OCTAL  */
  YYSYMBOL_CONST_HEX = 37,                 /* CONST_HEX  */
  YYSYMBOL_CONST_BIN = 38,                 /* CONST_BIN  */
  YYSYMBOL_FLOAT_HEX = 39,                 /* FLOAT_HEX  */
  YYSYMBOL_CONST_INT_ERR = 40,             /* CONST_INT_ERR  */
  YYSYMBOL_CONST_BIN_ERR = 41,             /* CONST_BIN_ERR  */
  YYSYMBOL_INT = 42,                       /* INT  */
  YYSYMBOL_STRING = 43,                    /* STRING  */
  YYSYMBOL_COMPLEXTYPE = 44,               /* COMPLEXTYPE  */
  YYSYMBOL_BYTE = 45,                      /* BYTE  */
  YYSYMBOL_FLOAT = 46,                     /* FLOAT  */
  YYSYMBOL_RUNE = 47,                      /* RUNE  */
  YYSYMBOL_UINT = 48,                      /* UINT  */
  YYSYMBOL_BOOL_TYPE = 49,                 /* BOOL_TYPE  */
  YYSYMBOL_TYPE = 50,                      /* TYPE  */
  YYSYMBOL_STRUCT = 51,                    /* STRUCT  */
  YYSYMBOL_UINTPTR = 52,                   /* UINTPTR  */
  YYSYMBOL_ERRORTYPE = 53,                 /* ERRORTYPE  */
  YYSYMBOL_ANYTYPE = 54,                   /* ANYTYPE  */
  YYSYMBOL_COMPARABLE = 55,                /* COMPARABLE  */
  YYSYMBOL_EQ = 56,                        /* EQ  */
  YYSYMBOL_INC = 57,                       /* INC  */
  YYSYMBOL_DEC = 58,                       /* DEC  */
  YYSYMBOL_SUBEQ = 59,                     /* SUBEQ  */
  YYSYMBOL_PLUSEQ = 60,                    /* PLUSEQ  */
  YYSYMBOL_MULEQ = 61,                     /* MULEQ  */
  YYSYMBOL_DIVEQ = 62,                     /* DIVEQ  */
  YYSYMBOL_MODEQ = 63,                     /* MODEQ  */
  YYSYMBOL_EQUAL = 64,                     /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 65,                  /* NOTEQUAL  */
  YYSYMBOL_GREATEROREQUAL = 66,            /* GREATEROREQUAL  */
  YYSYMBOL_LESSOREQUAL = 67,               /* LESSOREQUAL  */
  YYSYMBOL_AND = 68,                       /* AND  */
  YYSYMBOL_OR = 69,                        /* OR  */
  YYSYMBOL_LSHIFT = 70,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 71,                    /* RSHIFT  */
  YYSYMBOL_PEQ = 72,                       /* PEQ  */
  YYSYMBOL_XOR = 73,                       /* XOR  */
  YYSYMBOL_SEMICOLON = 74,                 /* SEMICOLON  */
  YYSYMBOL_EXPONENT = 75,                  /* EXPONENT  */
  YYSYMBOL_HEX_EXPONENT = 76,              /* HEX_EXPONENT  */
  YYSYMBOL_77_ = 77,                       /* '+'  */
  YYSYMBOL_78_ = 78,                       /* '-'  */
  YYSYMBOL_79_ = 79,                       /* '*'  */
  YYSYMBOL_80_ = 80,                       /* '/'  */
  YYSYMBOL_81_ = 81,                       /* '('  */
  YYSYMBOL_82_ = 82,                       /* ')'  */
  YYSYMBOL_83_ = 83,                       /* ','  */
  YYSYMBOL_84_ = 84,                       /* '{'  */
  YYSYMBOL_85_ = 85,                       /* '}'  */
  YYSYMBOL_86_ = 86,                       /* '!'  */
  YYSYMBOL_87_ = 87,                       /* '>'  */
  YYSYMBOL_88_ = 88,                       /* '<'  */
  YYSYMBOL_89_ = 89,                       /* '%'  */
  YYSYMBOL_90_ = 90,                       /* '&'  */
  YYSYMBOL_91_ = 91,                       /* '|'  */
  YYSYMBOL_92_ = 92,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 93,                  /* $accept  */
  YYSYMBOL_prog = 94,                      /* prog  */
  YYSYMBOL_var_block = 95,                 /* var_block  */
  YYSYMBOL_variables = 96,                 /* variables  */
  YYSYMBOL_definitions = 97,               /* definitions  */
  YYSYMBOL_var_definition = 98,            /* var_definition  */
  YYSYMBOL_var_def_list = 99,              /* var_def_list  */
  YYSYMBOL_var_def = 100,                  /* var_def  */
  YYSYMBOL_data_list = 101,                /* data_list  */
  YYSYMBOL_simple_definition = 102,        /* simple_definition  */
  YYSYMBOL_typeless_def = 103,             /* typeless_def  */
  YYSYMBOL_other_definitions = 104,        /* other_definitions  */
  YYSYMBOL_other = 105,                    /* other  */
  YYSYMBOL_list = 106,                     /* list  */
  YYSYMBOL_struct_def = 107,               /* struct_def  */
  YYSYMBOL_struct_body = 108,              /* struct_body  */
  YYSYMBOL_struct_list = 109,              /* struct_list  */
  YYSYMBOL_struct_contain = 110,           /* struct_contain  */
  YYSYMBOL_struct_init = 111,              /* struct_init  */
  YYSYMBOL_const_block = 112,              /* const_block  */
  YYSYMBOL_const_block_definition = 113,   /* const_block_definition  */
  YYSYMBOL_const_block_def_list = 114,     /* const_block_def_list  */
  YYSYMBOL_const_block_def = 115,          /* const_block_def  */
  YYSYMBOL_const_def = 116,                /* const_def  */
  YYSYMBOL_expression = 117,               /* expression  */
  YYSYMBOL_expression_args = 118,          /* expression_args  */
  YYSYMBOL_single_expression = 119,        /* single_expression  */
  YYSYMBOL_logical_expression = 120,       /* logical_expression  */
  YYSYMBOL_log_arguments = 121,            /* log_arguments  */
  YYSYMBOL_logical_condition = 122,        /* logical_condition  */
  YYSYMBOL_logical_operator = 123,         /* logical_operator  */
  YYSYMBOL_id_list = 124,                  /* id_list  */
  YYSYMBOL_body = 125,                     /* body  */
  YYSYMBOL_type_def = 126,                 /* type_def  */
  YYSYMBOL_return_value = 127,             /* return_value  */
  YYSYMBOL_parameters = 128,               /* parameters  */
  YYSYMBOL_parameter_list = 129,           /* parameter_list  */
  YYSYMBOL_statements = 130,               /* statements  */
  YYSYMBOL_statement = 131,                /* statement  */
  YYSYMBOL_if_block = 132,                 /* if_block  */
  YYSYMBOL_else_block = 133,               /* else_block  */
  YYSYMBOL_conditions = 134,               /* conditions  */
  YYSYMBOL_condition = 135,                /* condition  */
  YYSYMBOL_cond_args = 136,                /* cond_args  */
  YYSYMBOL_eq_op = 137,                    /* eq_op  */
  YYSYMBOL_for_loop = 138,                 /* for_loop  */
  YYSYMBOL_for_def = 139,                  /* for_def  */
  YYSYMBOL_for_cond = 140,                 /* for_cond  */
  YYSYMBOL_for_act = 141,                  /* for_act  */
  YYSYMBOL_actions = 142,                  /* actions  */
  YYSYMBOL_function_call = 143,            /* function_call  */
  YYSYMBOL_operator = 144,                 /* operator  */
  YYSYMBOL_type = 145,                     /* type  */
  YYSYMBOL_data = 146,                     /* data  */
  YYSYMBOL_float_lit = 147,                /* float_lit  */
  YYSYMBOL_decimal_float_lit = 148,        /* decimal_float_lit  */
  YYSYMBOL_hex_exponent = 149,             /* hex_exponent  */
  YYSYMBOL_hex_float_lit = 150,            /* hex_float_lit  */
  YYSYMBOL_methods = 151,                  /* methods  */
  YYSYMBOL_method_arguments = 152,         /* method_arguments  */
  YYSYMBOL_arg_list = 153,                 /* arg_list  */
  YYSYMBOL_arguments = 154                 /* arguments  */
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
#define YYLAST   620

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  170
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  266

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   331


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
       2,     2,     2,    86,     2,     2,     2,    89,    90,     2,
      81,    82,    79,    77,    83,    78,    92,    80,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      88,     2,    87,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    91,    85,     2,     2,     2,     2,
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
      75,    76
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    31,    31,    32,    33,    34,    35,    36,    37,    40,
      42,    43,    47,    48,    49,    51,    52,    54,    55,    57,
      58,    59,    62,    63,    65,    66,    69,    70,    73,    75,
      76,    77,    78,    79,    81,    82,    85,    88,    89,    91,
      92,    94,    95,    97,   103,   105,   106,   108,   109,   111,
     113,   114,   118,   119,   122,   123,   124,   125,   127,   128,
     131,   132,   133,   135,   137,   138,   140,   141,   143,   144,
     148,   151,   152,   154,   155,   158,   159,   161,   162,   164,
     165,   168,   169,   174,   175,   178,   179,   181,   182,   183,
     184,   188,   189,   191,   192,   193,   231,   232,   233,   234,
     235,   236,   240,   241,   244,   245,   246,   250,   251,   253,
     254,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     269,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   288,   289,   290,   291,
     292,   293,   294,   295,   297,   298,   299,   300,   302,   303,
     304,   306,   310,   311,   314,   320,   322,   326,   328,   329,
     331,   332,   335,   336,   337,   338,   339,   340,   341,   342,
     343
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
  "IOTA", "NEG_CONST_INT", "CONST_OCTAL", "CONST_HEX", "CONST_BIN",
  "FLOAT_HEX", "CONST_INT_ERR", "CONST_BIN_ERR", "INT", "STRING",
  "COMPLEXTYPE", "BYTE", "FLOAT", "RUNE", "UINT", "BOOL_TYPE", "TYPE",
  "STRUCT", "UINTPTR", "ERRORTYPE", "ANYTYPE", "COMPARABLE", "EQ", "INC",
  "DEC", "SUBEQ", "PLUSEQ", "MULEQ", "DIVEQ", "MODEQ", "EQUAL", "NOTEQUAL",
  "GREATEROREQUAL", "LESSOREQUAL", "AND", "OR", "LSHIFT", "RSHIFT", "PEQ",
  "XOR", "SEMICOLON", "EXPONENT", "HEX_EXPONENT", "'+'", "'-'", "'*'",
  "'/'", "'('", "')'", "','", "'{'", "'}'", "'!'", "'>'", "'<'", "'%'",
  "'&'", "'|'", "'.'", "$accept", "prog", "var_block", "variables",
  "definitions", "var_definition", "var_def_list", "var_def", "data_list",
  "simple_definition", "typeless_def", "other_definitions", "other",
  "list", "struct_def", "struct_body", "struct_list", "struct_contain",
  "struct_init", "const_block", "const_block_definition",
  "const_block_def_list", "const_block_def", "const_def", "expression",
  "expression_args", "single_expression", "logical_expression",
  "log_arguments", "logical_condition", "logical_operator", "id_list",
  "body", "type_def", "return_value", "parameters", "parameter_list",
  "statements", "statement", "if_block", "else_block", "conditions",
  "condition", "cond_args", "eq_op", "for_loop", "for_def", "for_cond",
  "for_act", "actions", "function_call", "operator", "type", "data",
  "float_lit", "decimal_float_lit", "hex_exponent", "hex_float_lit",
  "methods", "method_arguments", "arg_list", "arguments", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-175)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-171)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21,    30,   247,  -175,  -175,   -50,  -175,     4,    27,    45,
    -175,  -175,  -175,  -175,  -175,    72,  -175,    48,    63,    65,
      72,   544,    67,     8,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,   253,     6,    86,  -175,  -175,  -175,  -175,    22,
     508,    41,    43,    65,  -175,   270,  -175,   581,    71,    84,
      79,    67,  -175,    92,   368,   425,    95,  -175,  -175,  -175,
    -175,  -175,  -175,   123,   263,   119,  -175,   447,   447,   120,
     469,  -175,  -175,  -175,   130,   119,  -175,  -175,   581,   125,
     508,  -175,  -175,   581,   159,  -175,   581,   581,  -175,  -175,
     210,   367,   189,   190,  -175,  -175,  -175,   401,  -175,   581,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,   263,   263,   367,   119,  -175,
     140,   145,   223,   119,   581,  -175,  -175,   559,   153,   210,
    -175,   119,   154,   210,  -175,  -175,  -175,  -175,  -175,  -175,
     160,   508,   508,  -175,   119,   162,  -175,  -175,  -175,  -175,
    -175,   171,  -175,   238,   210,   194,  -175,   172,   303,   177,
      74,   204,   179,  -175,  -175,   447,  -175,     7,     7,   176,
     194,   250,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,    51,  -175,  -175,  -175,   258,    51,    -7,
     -56,  -175,   108,  -175,   -43,  -175,   -37,  -175,   191,   186,
       5,  -175,  -175,   262,   262,  -175,  -175,    -5,   497,    53,
     268,  -175,   447,     7,  -175,   184,  -175,   195,   196,  -175,
    -175,   199,   581,   377,   194,   387,  -175,  -175,   147,   194,
     108,    78,  -175,  -175,   194,   250,  -175,   581,  -175,  -175,
      64,  -175,  -175,   206,  -175,   197,  -175,  -175,   213,   218,
    -175,   219,   -35,  -175,  -175,   299,  -175,  -175,  -175,   109,
     447,  -175,   214,   194,   132,  -175
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,    73,    69,     0,     0,     0,
       3,     4,     8,     5,     6,     0,     7,     0,     0,    16,
       0,     0,    46,     0,   136,   137,   138,   139,   140,   141,
     142,   143,     0,     0,     0,    11,    13,    14,    12,    25,
       0,     0,     0,    15,    18,     0,    10,     0,     0,     0,
       0,    45,    48,     0,    69,    32,   147,   148,   149,   150,
     145,   146,   144,     0,     0,    31,    28,    30,     0,    29,
      23,   151,   152,   153,     0,    26,    23,    68,     0,     0,
      76,     9,    17,     0,    20,    51,     0,     0,    44,    47,
      37,     0,     0,     0,   156,    54,    56,     0,    55,     0,
     126,   127,   128,   129,   130,   134,   135,   133,   121,   122,
     125,   124,   123,   131,   132,     0,     0,     0,    24,    74,
       0,    75,     0,    19,     0,    50,    49,     0,     0,    38,
      40,    34,     0,    35,   154,   155,    57,    22,    52,    53,
       0,    71,     0,    78,    21,     0,    41,    36,    39,    33,
      27,     0,    72,     0,    37,    80,    77,     0,    54,    56,
      93,    93,     0,   119,   111,   114,   115,   117,     0,     0,
      79,   113,   118,    82,   116,   112,    42,    58,    59,    96,
      97,    98,    99,    93,   100,   101,    63,     0,    93,    95,
       0,    88,     0,    94,    95,   106,     0,   107,     0,     0,
       0,    66,    67,     0,     0,    70,    81,     0,    54,    56,
       0,   169,   165,   168,   167,    55,   164,     0,   158,   161,
      64,     0,     0,    93,    80,    93,   104,   105,    93,    80,
      65,     0,    60,    61,    80,    86,    84,     0,   166,   120,
      93,   157,    92,    95,    87,     0,    95,    91,     0,     0,
      62,     0,     0,   160,    83,     0,   103,    85,    43,    54,
     110,   109,     0,     0,     0,   102
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -175,  -175,   304,   305,   288,  -175,  -175,   267,   -25,  -175,
     115,   124,  -175,   205,  -175,   167,   -68,  -108,  -175,  -175,
    -175,  -175,   272,  -175,   -32,    66,    69,  -174,   -14,  -175,
     157,    -2,  -175,  -175,  -175,  -175,  -175,   -36,    70,   121,
    -175,  -175,   -97,   102,   148,  -175,  -175,   111,  -175,  -166,
    -175,   273,   -18,   -31,  -175,  -175,  -175,  -175,  -168,   155,
    -175,   114
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,   163,   164,    35,    42,    43,    44,   131,    36,
      37,    38,    66,   132,    12,   128,   129,   130,   211,    13,
      50,    51,    52,    14,   165,    68,   166,   167,   168,   186,
     203,    15,    16,   151,    18,   120,   121,   169,   170,   171,
     236,   190,   214,   192,   187,   172,   198,   199,   262,   173,
     174,   115,    39,    98,    71,    72,    94,    73,   175,   217,
     218,   219
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      67,    70,    76,    48,   206,    20,   160,    65,    75,   213,
       6,   230,    74,   -69,   213,   216,    85,    45,   223,    32,
     216,   148,    79,   133,     1,   148,   231,    84,   224,   222,
      69,    17,    97,    21,     3,    33,    56,    57,    58,    59,
     -69,    45,    60,    61,    62,    63,    34,    76,    99,   133,
     258,    23,    76,   118,    40,   125,   126,   208,   123,    53,
      76,   209,   122,   191,   197,   222,   213,   -89,   137,    41,
     208,     6,   216,    49,   209,   201,   202,   -89,    78,   234,
     189,    56,    57,    58,    59,    19,    76,    60,    61,    62,
      63,   162,    77,    76,    56,    57,    58,    59,   206,   144,
      60,    61,    62,    63,    56,    57,    58,    59,    22,   146,
      60,    61,    62,    63,    24,    25,    26,    27,    28,    29,
      30,    31,    80,   152,   153,    81,   244,    86,    32,   193,
     193,   197,    64,  -159,   188,  -170,  -170,   162,   158,     7,
      87,   210,   159,   160,    33,    64,   201,   202,   -90,   161,
     162,   212,   215,   243,   210,    34,   212,   215,   -90,   196,
     250,    88,    56,    57,    58,    59,   177,   178,    60,    61,
      62,    63,   179,   180,   181,   182,    90,    56,    57,    58,
      59,   138,   139,    60,    61,    62,    63,    92,   245,   232,
     233,   242,   193,   249,   193,   184,   185,   193,   251,    93,
     158,     7,    99,    34,   159,   160,    76,   119,   212,   215,
     194,   161,   252,    64,   117,   124,   127,   265,   162,   134,
     135,  -108,   141,   260,    56,    57,    58,    59,   142,   143,
      60,    61,    62,    63,    56,    57,    58,    59,   147,   149,
      60,    61,    62,    63,   156,   150,   154,     4,   -94,   -94,
     -94,   -94,     5,     6,     7,   155,     8,   176,   188,    54,
     200,   205,   207,    55,   220,   228,  -162,  -162,   230,    95,
     229,   -94,   -94,    96,   238,    64,   195,   239,   222,   240,
     162,   241,   254,    56,    57,    58,    59,   255,  -108,    60,
      61,    62,    63,    56,    57,    58,    59,     9,   263,    60,
      61,    62,    63,   256,   257,   259,    10,    11,    46,    96,
      82,   226,    24,    25,    26,    27,    28,    29,    30,    31,
     227,   157,   140,    89,   261,   204,    83,   247,   235,    56,
      57,    58,    59,   264,    64,    60,    61,    62,    63,   248,
     225,   116,     0,   221,    64,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,    34,   253,     0,     0,     0,     0,   -69,
     177,   178,     0,     0,     0,     0,     0,   179,   180,   181,
     182,   -65,   -65,   127,     0,   -69,     0,     0,     0,     0,
      64,     0,     0,   243,   183,     0,   -69,     0,     0,     0,
     184,   185,     0,   246,     0,     0,     0,    56,    57,    58,
      59,     0,     0,    60,    61,    62,    63,    56,    57,    58,
      59,     0,     0,    60,    61,    62,    63,    56,    57,    58,
      59,     0,     0,    60,    61,    62,    63,   -54,   -54,   -54,
     -54,   -54,     0,     0,     0,     0,     0,     0,   -54,   -54,
       0,   -54,     0,     0,     0,   -54,   -54,   -54,   -54,     0,
       0,     0,    91,     0,     0,     0,     0,   -54,   -54,   -54,
     100,   101,   102,   103,   104,     0,     0,     0,     0,     0,
       0,   105,   106,     0,   107,     0,     0,     0,   108,   109,
     110,   111,     0,   136,   -56,   -56,   -56,   -56,   -56,     0,
     112,   113,   114,     0,     0,   -56,   -56,     0,   -56,     0,
       0,     0,   -56,   -56,   -56,   -56,   100,   101,   102,   103,
     104,     0,     0,     0,   -56,   -56,   -56,   105,   106,     0,
     107,     0,     0,     0,   108,   109,   110,   111,   -55,   -55,
     -55,   -55,   -55,     0,     0,     0,   112,   113,   114,   -55,
     -55,     0,   -55,     0,     0,     0,   -55,   -55,   -55,   -55,
      24,    25,    26,    27,    28,    29,    30,    31,   -55,   -55,
     -55,   179,   180,   181,   182,   -65,   -65,     0,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -163,
    -163,   237,     0,     0,   184,   185,    24,    25,    26,    27,
      28,    29,    30,    31,     0,     0,     0,     0,     0,     0,
      47,    24,    25,    26,    27,    28,    29,    30,    31,     0,
     145,    56,    57,    58,    59,     0,     0,    60,    61,    62,
      63
};

static const yytype_int16 yycheck[] =
{
      32,    32,    33,    21,   170,     7,    11,    32,    33,   183,
       6,     6,     6,    56,   188,   183,    47,    19,    74,    56,
     188,   129,    40,    91,     3,   133,   200,    45,    84,    72,
      32,    81,    64,     6,     4,    72,    30,    31,    32,    33,
      83,    43,    36,    37,    38,    39,    83,    78,    83,   117,
      85,     6,    83,    78,     6,    86,    87,     6,    83,    51,
      91,    10,    80,   160,   161,    72,   240,    74,    99,     6,
       6,     6,   240,     6,    10,    68,    69,    84,    56,    84,
       6,    30,    31,    32,    33,    81,   117,    36,    37,    38,
      39,    86,     6,   124,    30,    31,    32,    33,   264,   124,
      36,    37,    38,    39,    30,    31,    32,    33,    81,   127,
      36,    37,    38,    39,    42,    43,    44,    45,    46,    47,
      48,    49,    81,   141,   142,    82,   223,    56,    56,   160,
     161,   228,    81,    82,    81,    82,    83,    86,     6,     7,
      56,    90,    10,    11,    72,    81,    68,    69,    74,    17,
      86,   183,   183,     6,    90,    83,   188,   188,    84,   161,
      82,    82,    30,    31,    32,    33,    57,    58,    36,    37,
      38,    39,    64,    65,    66,    67,    84,    30,    31,    32,
      33,   115,   116,    36,    37,    38,    39,    92,   224,   203,
     204,   222,   223,   229,   225,    87,    88,   228,   234,    76,
       6,     7,    83,    83,    10,    11,   237,    82,   240,   240,
       6,    17,   237,    81,    84,    56,     6,    85,    86,    30,
      30,    74,    82,   255,    30,    31,    32,    33,    83,     6,
      36,    37,    38,    39,    30,    31,    32,    33,    85,    85,
      36,    37,    38,    39,     6,    85,    84,     0,    64,    65,
      66,    67,     5,     6,     7,    84,     9,    85,    81,     6,
      81,    85,    12,    10,     6,    74,    82,    83,     6,     6,
      84,    87,    88,    10,     6,    81,    72,    82,    72,    83,
      86,    82,    85,    30,    31,    32,    33,    74,    84,    36,
      37,    38,    39,    30,    31,    32,    33,    50,    84,    36,
      37,    38,    39,    85,    85,     6,     2,     2,    20,    10,
      43,   196,    42,    43,    44,    45,    46,    47,    48,    49,
     196,   154,   117,    51,   255,   168,    56,   225,   207,    30,
      31,    32,    33,   263,    81,    36,    37,    38,    39,   228,
     192,    68,    -1,   188,    81,    42,    43,    44,    45,    46,
      47,    48,    49,    83,   240,    -1,    -1,    -1,    -1,    56,
      57,    58,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,     6,    -1,    72,    -1,    -1,    -1,    -1,
      81,    -1,    -1,     6,    81,    -1,    83,    -1,    -1,    -1,
      87,    88,    -1,     6,    -1,    -1,    -1,    30,    31,    32,
      33,    -1,    -1,    36,    37,    38,    39,    30,    31,    32,
      33,    -1,    -1,    36,    37,    38,    39,    30,    31,    32,
      33,    -1,    -1,    36,    37,    38,    39,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      -1,    73,    -1,    -1,    -1,    77,    78,    79,    80,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    89,    90,    91,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    -1,    73,    -1,    -1,    -1,    77,    78,
      79,    80,    -1,    82,    59,    60,    61,    62,    63,    -1,
      89,    90,    91,    -1,    -1,    70,    71,    -1,    73,    -1,
      -1,    -1,    77,    78,    79,    80,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    89,    90,    91,    70,    71,    -1,
      73,    -1,    -1,    -1,    77,    78,    79,    80,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    89,    90,    91,    70,
      71,    -1,    73,    -1,    -1,    -1,    77,    78,    79,    80,
      42,    43,    44,    45,    46,    47,    48,    49,    89,    90,
      91,    64,    65,    66,    67,    68,    69,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    -1,    -1,    87,    88,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    30,    31,    32,    33,    -1,    -1,    36,    37,    38,
      39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    94,     4,     0,     5,     6,     7,     9,    50,
      95,    96,   107,   112,   116,   124,   125,    81,   127,    81,
     124,     6,    81,     6,    42,    43,    44,    45,    46,    47,
      48,    49,    56,    72,    83,    97,   102,   103,   104,   145,
       6,     6,    98,    99,   100,   124,    97,    56,   145,     6,
     113,   114,   115,    51,     6,    10,    30,    31,    32,    33,
      36,    37,    38,    39,    81,   101,   105,   117,   118,   124,
     146,   147,   148,   150,     6,   101,   146,     6,    56,   145,
      81,    82,   100,    56,   145,   146,    56,    56,    82,   115,
      84,    84,    92,    76,   149,     6,    10,   117,   146,    83,
      59,    60,    61,    62,    63,    70,    71,    73,    77,    78,
      79,    80,    89,    90,    91,   144,   144,    84,   101,    82,
     128,   129,   145,   101,    56,   146,   146,     6,   108,   109,
     110,   101,   106,   109,    30,    30,    82,   146,   118,   118,
     106,    82,    83,     6,   101,    51,   145,    85,   110,    85,
      85,   126,   145,   145,    84,    84,     6,   108,     6,    10,
      11,    17,    86,    95,    96,   117,   119,   120,   121,   130,
     131,   132,   138,   142,   143,   151,    85,    57,    58,    64,
      65,    66,    67,    81,    87,    88,   122,   137,    81,     6,
     134,   135,   136,   146,     6,    72,   124,   135,   139,   140,
      81,    68,    69,   123,   123,    85,   142,    12,     6,    10,
      90,   111,   117,   120,   135,   146,   151,   152,   153,   154,
       6,   152,    72,    74,    84,   137,   103,   104,    74,    84,
       6,   120,   121,   121,    84,   132,   133,    84,     6,    82,
      83,    82,   146,     6,   135,   130,     6,   136,   140,   130,
      82,   130,   101,   154,    85,    74,    85,    85,    85,     6,
     117,   119,   141,    84,   131,    85
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    94,    94,    94,    94,    95,
      96,    96,    97,    97,    97,    98,    98,    99,    99,   100,
     100,   100,   101,   101,   102,   102,   103,   103,   104,   105,
     105,   105,   105,   105,   106,   106,   107,   108,   108,   109,
     109,   110,   110,   111,   112,   113,   113,   114,   114,   115,
     116,   116,   117,   117,   118,   118,   118,   118,   119,   119,
     120,   120,   120,   121,   122,   122,   123,   123,   124,   124,
     125,   126,   126,   127,   127,   128,   128,   129,   129,   130,
     130,   131,   131,   132,   132,   133,   133,   134,   134,   134,
     134,   135,   135,   136,   136,   136,   137,   137,   137,   137,
     137,   137,   138,   138,   139,   139,   139,   140,   140,   141,
     141,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     143,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   145,   145,   145,   145,
     145,   145,   145,   145,   146,   146,   146,   146,   146,   146,
     146,   146,   147,   147,   148,   149,   150,   151,   152,   152,
     153,   153,   154,   154,   154,   154,   154,   154,   154,   154,
     154
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     4,
       3,     2,     1,     1,     1,     1,     0,     2,     1,     3,
       2,     4,     3,     1,     3,     1,     2,     5,     2,     1,
       1,     1,     1,     4,     1,     1,     6,     0,     1,     2,
       1,     2,     5,     4,     4,     1,     0,     2,     1,     3,
       5,     4,     3,     3,     1,     1,     1,     3,     2,     2,
       3,     3,     4,     2,     2,     0,     1,     1,     3,     1,
      10,     0,     1,     0,     4,     1,     0,     4,     2,     1,
       0,     2,     1,     5,     3,     3,     1,     3,     1,     1,
       0,     3,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     9,     5,     2,     2,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     2,     4,     1,     0,
       3,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1
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
#line 31 "lab.yacc"
                      {printf("Find package and import\n");}
#line 1704 "y.tab.c"
    break;

  case 9: /* var_block: VAR '(' var_definition ')'  */
#line 40 "lab.yacc"
                                      {printf("varblock\n");}
#line 1710 "y.tab.c"
    break;

  case 25: /* simple_definition: type  */
#line 66 "lab.yacc"
                                       {printf("type def\n");}
#line 1716 "y.tab.c"
    break;

  case 26: /* typeless_def: PEQ data_list  */
#line 69 "lab.yacc"
                            {printf("typeless definition\n");}
#line 1722 "y.tab.c"
    break;

  case 44: /* const_block: CONST '(' const_block_definition ')'  */
#line 103 "lab.yacc"
                                                  {printf("constblock\n");}
#line 1728 "y.tab.c"
    break;

  case 50: /* const_def: CONST id type EQ data  */
#line 113 "lab.yacc"
                                 {printf("const type definition\n");}
#line 1734 "y.tab.c"
    break;

  case 51: /* const_def: CONST id EQ data  */
#line 114 "lab.yacc"
                                   {printf("const typeless definition\n");}
#line 1740 "y.tab.c"
    break;

  case 53: /* expression: expression_args operator expression_args  */
#line 119 "lab.yacc"
                                                                   {printf("expression\n");}
#line 1746 "y.tab.c"
    break;

  case 70: /* body: FUNCTION return_value id '(' parameters ')' type_def '{' statements '}'  */
#line 148 "lab.yacc"
                                                                              {printf("Find function defenition\n");}
#line 1752 "y.tab.c"
    break;

  case 83: /* if_block: IF conditions '{' statements '}'  */
#line 174 "lab.yacc"
                                           {printf("ifblock!\n");}
#line 1758 "y.tab.c"
    break;

  case 157: /* methods: METHOD '(' method_arguments ')'  */
#line 326 "lab.yacc"
                                         {printf("Method match\n");}
#line 1764 "y.tab.c"
    break;


#line 1768 "y.tab.c"

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

#line 348 "lab.yacc"


int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
	yyparse();
        fclose(yyin);
	if(error_ == 0)
		printf("OK\n");
        
}
