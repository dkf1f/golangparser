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
#line 1 "lab2.yacc"

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
    RUNE_LIT = 296,                /* RUNE_LIT  */
    IMAGINARY_LIT = 297,           /* IMAGINARY_LIT  */
    CONST_INT_ERR = 298,           /* CONST_INT_ERR  */
    CONST_BIN_ERR = 299,           /* CONST_BIN_ERR  */
    INT = 300,                     /* INT  */
    STRING = 301,                  /* STRING  */
    COMPLEXTYPE = 302,             /* COMPLEXTYPE  */
    BYTE = 303,                    /* BYTE  */
    FLOAT = 304,                   /* FLOAT  */
    RUNE = 305,                    /* RUNE  */
    UINT = 306,                    /* UINT  */
    BOOL_TYPE = 307,               /* BOOL_TYPE  */
    TYPE = 308,                    /* TYPE  */
    STRUCT = 309,                  /* STRUCT  */
    UINTPTR = 310,                 /* UINTPTR  */
    ERRORTYPE = 311,               /* ERRORTYPE  */
    ANYTYPE = 312,                 /* ANYTYPE  */
    COMPARABLE = 313,              /* COMPARABLE  */
    ADDEQ = 314,                   /* ADDEQ  */
    DECEQ = 315,                   /* DECEQ  */
    OREQ = 316,                    /* OREQ  */
    XOREQ = 317,                   /* XOREQ  */
    MULEQ = 318,                   /* MULEQ  */
    DIVEQ = 319,                   /* DIVEQ  */
    MODEQ = 320,                   /* MODEQ  */
    LSHIFTEQ = 321,                /* LSHIFTEQ  */
    RSHIFTEQ = 322,                /* RSHIFTEQ  */
    ANDEQ = 323,                   /* ANDEQ  */
    ANDXOREQ = 324,                /* ANDXOREQ  */
    EQ = 325,                      /* EQ  */
    INC = 326,                     /* INC  */
    DEC = 327,                     /* DEC  */
    EQUAL = 328,                   /* EQUAL  */
    NOTEQUAL = 329,                /* NOTEQUAL  */
    GREATEROREQUAL = 330,          /* GREATEROREQUAL  */
    LESSOREQUAL = 331,             /* LESSOREQUAL  */
    AND = 332,                     /* AND  */
    OR = 333,                      /* OR  */
    LSHIFT = 334,                  /* LSHIFT  */
    RSHIFT = 335,                  /* RSHIFT  */
    PEQ = 336,                     /* PEQ  */
    XOR = 337,                     /* XOR  */
    SEMICOLON = 338,               /* SEMICOLON  */
    AMP_EXP = 339,                 /* AMP_EXP  */
    POINT = 340,                   /* POINT  */
    POINTER = 341                  /* POINTER  */
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
#define RUNE_LIT 296
#define IMAGINARY_LIT 297
#define CONST_INT_ERR 298
#define CONST_BIN_ERR 299
#define INT 300
#define STRING 301
#define COMPLEXTYPE 302
#define BYTE 303
#define FLOAT 304
#define RUNE 305
#define UINT 306
#define BOOL_TYPE 307
#define TYPE 308
#define STRUCT 309
#define UINTPTR 310
#define ERRORTYPE 311
#define ANYTYPE 312
#define COMPARABLE 313
#define ADDEQ 314
#define DECEQ 315
#define OREQ 316
#define XOREQ 317
#define MULEQ 318
#define DIVEQ 319
#define MODEQ 320
#define LSHIFTEQ 321
#define RSHIFTEQ 322
#define ANDEQ 323
#define ANDXOREQ 324
#define EQ 325
#define INC 326
#define DEC 327
#define EQUAL 328
#define NOTEQUAL 329
#define GREATEROREQUAL 330
#define LESSOREQUAL 331
#define AND 332
#define OR 333
#define LSHIFT 334
#define RSHIFT 335
#define PEQ 336
#define XOR 337
#define SEMICOLON 338
#define AMP_EXP 339
#define POINT 340
#define POINTER 341

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
  YYSYMBOL_RUNE_LIT = 41,                  /* RUNE_LIT  */
  YYSYMBOL_IMAGINARY_LIT = 42,             /* IMAGINARY_LIT  */
  YYSYMBOL_CONST_INT_ERR = 43,             /* CONST_INT_ERR  */
  YYSYMBOL_CONST_BIN_ERR = 44,             /* CONST_BIN_ERR  */
  YYSYMBOL_INT = 45,                       /* INT  */
  YYSYMBOL_STRING = 46,                    /* STRING  */
  YYSYMBOL_COMPLEXTYPE = 47,               /* COMPLEXTYPE  */
  YYSYMBOL_BYTE = 48,                      /* BYTE  */
  YYSYMBOL_FLOAT = 49,                     /* FLOAT  */
  YYSYMBOL_RUNE = 50,                      /* RUNE  */
  YYSYMBOL_UINT = 51,                      /* UINT  */
  YYSYMBOL_BOOL_TYPE = 52,                 /* BOOL_TYPE  */
  YYSYMBOL_TYPE = 53,                      /* TYPE  */
  YYSYMBOL_STRUCT = 54,                    /* STRUCT  */
  YYSYMBOL_UINTPTR = 55,                   /* UINTPTR  */
  YYSYMBOL_ERRORTYPE = 56,                 /* ERRORTYPE  */
  YYSYMBOL_ANYTYPE = 57,                   /* ANYTYPE  */
  YYSYMBOL_COMPARABLE = 58,                /* COMPARABLE  */
  YYSYMBOL_ADDEQ = 59,                     /* ADDEQ  */
  YYSYMBOL_DECEQ = 60,                     /* DECEQ  */
  YYSYMBOL_OREQ = 61,                      /* OREQ  */
  YYSYMBOL_XOREQ = 62,                     /* XOREQ  */
  YYSYMBOL_MULEQ = 63,                     /* MULEQ  */
  YYSYMBOL_DIVEQ = 64,                     /* DIVEQ  */
  YYSYMBOL_MODEQ = 65,                     /* MODEQ  */
  YYSYMBOL_LSHIFTEQ = 66,                  /* LSHIFTEQ  */
  YYSYMBOL_RSHIFTEQ = 67,                  /* RSHIFTEQ  */
  YYSYMBOL_ANDEQ = 68,                     /* ANDEQ  */
  YYSYMBOL_ANDXOREQ = 69,                  /* ANDXOREQ  */
  YYSYMBOL_EQ = 70,                        /* EQ  */
  YYSYMBOL_INC = 71,                       /* INC  */
  YYSYMBOL_DEC = 72,                       /* DEC  */
  YYSYMBOL_EQUAL = 73,                     /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 74,                  /* NOTEQUAL  */
  YYSYMBOL_GREATEROREQUAL = 75,            /* GREATEROREQUAL  */
  YYSYMBOL_LESSOREQUAL = 76,               /* LESSOREQUAL  */
  YYSYMBOL_AND = 77,                       /* AND  */
  YYSYMBOL_OR = 78,                        /* OR  */
  YYSYMBOL_LSHIFT = 79,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 80,                    /* RSHIFT  */
  YYSYMBOL_PEQ = 81,                       /* PEQ  */
  YYSYMBOL_XOR = 82,                       /* XOR  */
  YYSYMBOL_SEMICOLON = 83,                 /* SEMICOLON  */
  YYSYMBOL_AMP_EXP = 84,                   /* AMP_EXP  */
  YYSYMBOL_POINT = 85,                     /* POINT  */
  YYSYMBOL_POINTER = 86,                   /* POINTER  */
  YYSYMBOL_87_ = 87,                       /* '{'  */
  YYSYMBOL_88_ = 88,                       /* '}'  */
  YYSYMBOL_89_ = 89,                       /* ':'  */
  YYSYMBOL_90_ = 90,                       /* '.'  */
  YYSYMBOL_91_ = 91,                       /* '('  */
  YYSYMBOL_92_ = 92,                       /* ')'  */
  YYSYMBOL_93_ = 93,                       /* '['  */
  YYSYMBOL_94_ = 94,                       /* ']'  */
  YYSYMBOL_95_ = 95,                       /* ','  */
  YYSYMBOL_96_ = 96,                       /* '*'  */
  YYSYMBOL_97_ = 97,                       /* '/'  */
  YYSYMBOL_98_ = 98,                       /* '%'  */
  YYSYMBOL_99_ = 99,                       /* '&'  */
  YYSYMBOL_100_ = 100,                     /* '-'  */
  YYSYMBOL_101_ = 101,                     /* '|'  */
  YYSYMBOL_102_ = 102,                     /* '+'  */
  YYSYMBOL_103_ = 103,                     /* '<'  */
  YYSYMBOL_104_ = 104,                     /* '>'  */
  YYSYMBOL_105_ = 105,                     /* '!'  */
  YYSYMBOL_106_ = 106,                     /* '~'  */
  YYSYMBOL_YYACCEPT = 107,                 /* $accept  */
  YYSYMBOL_prog = 108,                     /* prog  */
  YYSYMBOL_TopLevelDecl = 109,             /* TopLevelDecl  */
  YYSYMBOL_FunctionDecl = 110,             /* FunctionDecl  */
  YYSYMBOL_MethodDecl = 111,               /* MethodDecl  */
  YYSYMBOL_Receiver = 112,                 /* Receiver  */
  YYSYMBOL_Statement = 113,                /* Statement  */
  YYSYMBOL_ForStmt = 114,                  /* ForStmt  */
  YYSYMBOL_ForClause = 115,                /* ForClause  */
  YYSYMBOL_InitStmt = 116,                 /* InitStmt  */
  YYSYMBOL_Condition = 117,                /* Condition  */
  YYSYMBOL_PostStmt = 118,                 /* PostStmt  */
  YYSYMBOL_RangeClause = 119,              /* RangeClause  */
  YYSYMBOL_DeferStmt = 120,                /* DeferStmt  */
  YYSYMBOL_Declaration = 121,              /* Declaration  */
  YYSYMBOL_GoStmt = 122,                   /* GoStmt  */
  YYSYMBOL_ReturnStmt = 123,               /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 124,                /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 125,             /* ContinueStmt  */
  YYSYMBOL_GotoStmt = 126,                 /* GotoStmt  */
  YYSYMBOL_Label = 127,                    /* Label  */
  YYSYMBOL_SelectStmt = 128,               /* SelectStmt  */
  YYSYMBOL_CommClauseList = 129,           /* CommClauseList  */
  YYSYMBOL_CommClause = 130,               /* CommClause  */
  YYSYMBOL_CommCase = 131,                 /* CommCase  */
  YYSYMBOL_RecvStmt = 132,                 /* RecvStmt  */
  YYSYMBOL_IfStmt = 133,                   /* IfStmt  */
  YYSYMBOL_SwitchStmt = 134,               /* SwitchStmt  */
  YYSYMBOL_ExprSwitchStmt = 135,           /* ExprSwitchStmt  */
  YYSYMBOL_ExprCaseClauseList = 136,       /* ExprCaseClauseList  */
  YYSYMBOL_ExprCaseClause = 137,           /* ExprCaseClause  */
  YYSYMBOL_ExprSwitchCase = 138,           /* ExprSwitchCase  */
  YYSYMBOL_ConstDecl = 139,                /* ConstDecl  */
  YYSYMBOL_ConstSpecList = 140,            /* ConstSpecList  */
  YYSYMBOL_ConstSpec = 141,                /* ConstSpec  */
  YYSYMBOL_ConstExpr = 142,                /* ConstExpr  */
  YYSYMBOL_TypeDecl = 143,                 /* TypeDecl  */
  YYSYMBOL_TypeSpecList = 144,             /* TypeSpecList  */
  YYSYMBOL_TypeSpec = 145,                 /* TypeSpec  */
  YYSYMBOL_AliasDecl = 146,                /* AliasDecl  */
  YYSYMBOL_TypeDef = 147,                  /* TypeDef  */
  YYSYMBOL_TypeParameters = 148,           /* TypeParameters  */
  YYSYMBOL_TypeParamList = 149,            /* TypeParamList  */
  YYSYMBOL_TypeParamDecl = 150,            /* TypeParamDecl  */
  YYSYMBOL_TypeConstraint = 151,           /* TypeConstraint  */
  YYSYMBOL_VarDecl = 152,                  /* VarDecl  */
  YYSYMBOL_VarSpecList = 153,              /* VarSpecList  */
  YYSYMBOL_VarSpec = 154,                  /* VarSpec  */
  YYSYMBOL_SimpleStmt = 155,               /* SimpleStmt  */
  YYSYMBOL_EmptyStatement = 156,           /* EmptyStatement  */
  YYSYMBOL_SendStmt = 157,                 /* SendStmt  */
  YYSYMBOL_Channel = 158,                  /* Channel  */
  YYSYMBOL_IncDecStmt = 159,               /* IncDecStmt  */
  YYSYMBOL_Assignment = 160,               /* Assignment  */
  YYSYMBOL_Expression = 161,               /* Expression  */
  YYSYMBOL_binary_op = 162,                /* binary_op  */
  YYSYMBOL_mul_op = 163,                   /* mul_op  */
  YYSYMBOL_add_op = 164,                   /* add_op  */
  YYSYMBOL_rel_op = 165,                   /* rel_op  */
  YYSYMBOL_UnaryExpr = 166,                /* UnaryExpr  */
  YYSYMBOL_PrimaryExpr = 167,              /* PrimaryExpr  */
  YYSYMBOL_Operand = 168,                  /* Operand  */
  YYSYMBOL_BasicLit = 169,                 /* BasicLit  */
  YYSYMBOL_CompositeLit = 170,             /* CompositeLit  */
  YYSYMBOL_LiteralType = 171,              /* LiteralType  */
  YYSYMBOL_LiteralValue = 172,             /* LiteralValue  */
  YYSYMBOL_ElementList = 173,              /* ElementList  */
  YYSYMBOL_KeyedElement = 174,             /* KeyedElement  */
  YYSYMBOL_Key = 175,                      /* Key  */
  YYSYMBOL_Element = 176,                  /* Element  */
  YYSYMBOL_int_lit = 177,                  /* int_lit  */
  YYSYMBOL_imaginary_lit = 178,            /* imaginary_lit  */
  YYSYMBOL_float_lit = 179,                /* float_lit  */
  YYSYMBOL_FunctionLit = 180,              /* FunctionLit  */
  YYSYMBOL_Block = 181,                    /* Block  */
  YYSYMBOL_Statements = 182,               /* Statements  */
  YYSYMBOL_Selector = 183,                 /* Selector  */
  YYSYMBOL_Slice = 184,                    /* Slice  */
  YYSYMBOL_TypeAssertion = 185,            /* TypeAssertion  */
  YYSYMBOL_ExpressionList = 186,           /* ExpressionList  */
  YYSYMBOL_Type = 187,                     /* Type  */
  YYSYMBOL_TypeArgs = 188,                 /* TypeArgs  */
  YYSYMBOL_TypeList = 189,                 /* TypeList  */
  YYSYMBOL_TypeName = 190,                 /* TypeName  */
  YYSYMBOL_ArrayType = 191,                /* ArrayType  */
  YYSYMBOL_StructType = 192,               /* StructType  */
  YYSYMBOL_DeclList = 193,                 /* DeclList  */
  YYSYMBOL_FieldDecl = 194,                /* FieldDecl  */
  YYSYMBOL_EmbeddedField = 195,            /* EmbeddedField  */
  YYSYMBOL_PointerType = 196,              /* PointerType  */
  YYSYMBOL_FunctionType = 197,             /* FunctionType  */
  YYSYMBOL_Signature = 198,                /* Signature  */
  YYSYMBOL_Parameters = 199,               /* Parameters  */
  YYSYMBOL_ParameterList = 200,            /* ParameterList  */
  YYSYMBOL_ParameterDecl = 201,            /* ParameterDecl  */
  YYSYMBOL_IdentifierList = 202,           /* IdentifierList  */
  YYSYMBOL_InterfaceType = 203,            /* InterfaceType  */
  YYSYMBOL_InterfaceElemList = 204,        /* InterfaceElemList  */
  YYSYMBOL_InterfaceElem = 205,            /* InterfaceElem  */
  YYSYMBOL_TypeElem = 206,                 /* TypeElem  */
  YYSYMBOL_TypeTerm = 207,                 /* TypeTerm  */
  YYSYMBOL_SliceType = 208,                /* SliceType  */
  YYSYMBOL_MapType = 209,                  /* MapType  */
  YYSYMBOL_ChannelType = 210               /* ChannelType  */
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
#define YYLAST   2818

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  104
/* YYNRULES -- Number of rules.  */
#define YYNRULES  308
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  515

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   341


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
       2,     2,     2,   105,     2,     2,     2,    98,    99,     2,
      91,    92,    96,   102,    95,   100,    90,    97,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,     2,
     103,     2,   104,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    93,     2,    94,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,   101,    88,   106,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    29,    29,    30,    33,    34,    35,    37,    38,    39,
      40,    42,    43,    45,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    64,    65,    66,
      67,    70,    73,    74,    76,    77,    79,    80,    83,    84,
      85,    87,    89,    90,    91,    93,    95,    96,    99,   100,
     102,   103,   105,   106,   108,   110,   111,   113,   114,   115,
     116,   117,   118,   120,   121,   122,   126,   127,   128,   129,
     130,   131,   136,   140,   141,   142,   143,   145,   146,   148,
     149,   149,   164,   165,   166,   168,   169,   170,   171,   173,
     174,   177,   178,   179,   181,   182,   183,   183,   185,   189,
     191,   192,   193,   195,   196,   198,   200,   203,   204,   205,
     207,   208,   209,   210,   211,   214,   215,   216,   217,   218,
     222,   224,   225,   227,   228,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   245,
     246,   249,   250,   251,   252,   253,   255,   256,   257,   258,
     259,   260,   261,   263,   264,   265,   266,   268,   269,   270,
     271,   272,   273,   276,   277,   278,   279,   280,   281,   282,
     283,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   304,   305,   306,   309,
     310,   311,   312,   313,   315,   317,   318,   319,   320,   321,
     322,   323,   325,   326,   328,   329,   330,   331,   332,   335,
     337,   338,   339,   341,   342,   344,   345,   347,   348,   349,
     352,   353,   356,   357,   358,   359,   362,   363,   364,   367,
     369,   371,   372,   375,   378,   379,   380,   381,   382,   383,
     386,   399,   400,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   416,   417,   419,   420,
     422,   423,   427,   428,   431,   432,   434,   435,   437,   438,
     439,   440,   442,   443,   444,   445,   448,   452,   454,   455,
     456,   457,   458,   460,   461,   462,   465,   466,   468,   469,
     470,   471,   474,   475,   478,   479,   481,   482,   484,   485,
     487,   488,   492,   493,   497,   500,   505,   506,   507
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
  "DECIMAL_FLOAT_LIT", "HEX_FLOAT_LIT", "RUNE_LIT", "IMAGINARY_LIT",
  "CONST_INT_ERR", "CONST_BIN_ERR", "INT", "STRING", "COMPLEXTYPE", "BYTE",
  "FLOAT", "RUNE", "UINT", "BOOL_TYPE", "TYPE", "STRUCT", "UINTPTR",
  "ERRORTYPE", "ANYTYPE", "COMPARABLE", "ADDEQ", "DECEQ", "OREQ", "XOREQ",
  "MULEQ", "DIVEQ", "MODEQ", "LSHIFTEQ", "RSHIFTEQ", "ANDEQ", "ANDXOREQ",
  "EQ", "INC", "DEC", "EQUAL", "NOTEQUAL", "GREATEROREQUAL", "LESSOREQUAL",
  "AND", "OR", "LSHIFT", "RSHIFT", "PEQ", "XOR", "SEMICOLON", "AMP_EXP",
  "POINT", "POINTER", "'{'", "'}'", "':'", "'.'", "'('", "')'", "'['",
  "']'", "','", "'*'", "'/'", "'%'", "'&'", "'-'", "'|'", "'+'", "'<'",
  "'>'", "'!'", "'~'", "$accept", "prog", "TopLevelDecl", "FunctionDecl",
  "MethodDecl", "Receiver", "Statement", "ForStmt", "ForClause",
  "InitStmt", "Condition", "PostStmt", "RangeClause", "DeferStmt",
  "Declaration", "GoStmt", "ReturnStmt", "BreakStmt", "ContinueStmt",
  "GotoStmt", "Label", "SelectStmt", "CommClauseList", "CommClause",
  "CommCase", "RecvStmt", "IfStmt", "SwitchStmt", "ExprSwitchStmt",
  "ExprCaseClauseList", "ExprCaseClause", "ExprSwitchCase", "ConstDecl",
  "ConstSpecList", "ConstSpec", "ConstExpr", "TypeDecl", "TypeSpecList",
  "TypeSpec", "AliasDecl", "TypeDef", "TypeParameters", "TypeParamList",
  "TypeParamDecl", "TypeConstraint", "VarDecl", "VarSpecList", "VarSpec",
  "SimpleStmt", "EmptyStatement", "SendStmt", "Channel", "IncDecStmt",
  "Assignment", "Expression", "binary_op", "mul_op", "add_op", "rel_op",
  "UnaryExpr", "PrimaryExpr", "Operand", "BasicLit", "CompositeLit",
  "LiteralType", "LiteralValue", "ElementList", "KeyedElement", "Key",
  "Element", "int_lit", "imaginary_lit", "float_lit", "FunctionLit",
  "Block", "Statements", "Selector", "Slice", "TypeAssertion",
  "ExpressionList", "Type", "TypeArgs", "TypeList", "TypeName",
  "ArrayType", "StructType", "DeclList", "FieldDecl", "EmbeddedField",
  "PointerType", "FunctionType", "Signature", "Parameters",
  "ParameterList", "ParameterDecl", "IdentifierList", "InterfaceType",
  "InterfaceElemList", "InterfaceElem", "TypeElem", "TypeTerm",
  "SliceType", "MapType", "ChannelType", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-413)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-293)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      42,    37,    62,  -413,  -413,    25,    32,    50,    55,  -413,
    -413,  -413,  -413,  -413,  -413,  -413,    43,    20,    94,  -413,
     -23,    30,  -413,   409,    46,  -413,   449,   -38,    47,  -413,
    -413,  -413,   100,    61,    83,   335,   576,  -413,    40,    81,
     158,    61,   100,  -413,    18,   100,    61,    85,    78,   103,
     634,   111,  2115,   190,   576,  1263,   576,   159,  -413,  -413,
    -413,  -413,  -413,  -413,  -413,  -413,  -413,   138,   100,  2115,
    -413,   161,   576,   576,  -413,   141,   229,    -6,   142,     8,
      83,   974,  -413,    76,  -413,  -413,  -413,   144,    48,   576,
    -413,    83,  -413,  -413,  -413,  -413,   232,   576,  -413,   576,
       7,    38,  -413,    23,    61,   149,  -413,  -413,  -413,  -413,
    -413,  -413,  -413,  -413,  -413,  -413,  -413,  2115,  2115,  1341,
    2115,  1142,  2115,  2115,  2115,  2115,  2115,  2714,  -413,    67,
     150,  -413,  -413,   160,  -413,  -413,  -413,  -413,  -413,   157,
    -413,  -413,  -413,  -413,   576,   154,   576,  2426,  -413,  2115,
    -413,  -413,   157,  2115,  -413,  -413,  -413,  -413,  -413,   165,
     100,  -413,   576,  -413,  -413,   152,  -413,    98,  2153,  2231,
    -413,  1379,   249,   173,  2115,  2115,   249,   249,  2115,   669,
    -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,
    -413,  -413,  -413,  -413,  -413,  -413,   175,  -413,  -413,  2362,
    -413,   873,   672,    15,   116,  -413,   104,  -413,  -413,  -413,
    -413,   169,   171,   125,   174,    61,  -413,   181,    19,  -413,
    -413,    52,  -413,   265,   169,   184,    11,   241,   576,    83,
     268,  -413,  -413,   113,  -413,  2554,  -413,     6,  -413,   201,
    -413,   118,   197,  -413,  -413,  -413,  -413,  -413,  -413,  -413,
    -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,
    -413,  -413,  -413,  -413,  -413,  -413,  -413,  2115,  -413,  -413,
    -413,    58,  1012,  1457,  -413,  -413,  -413,  1495,  -413,  2115,
    -413,  -413,  -413,   576,   199,   157,   157,  -413,  -413,  -413,
       8,   211,   747,  1104,   213,  1894,  2115,    83,   217,    83,
    -413,   747,  -413,   733,    73,  -413,  -413,    63,   157,  2714,
    -413,  -413,  2714,    98,  2316,  2115,  -413,  -413,  -413,  -413,
    2115,  2115,  2115,  2115,  2115,  2115,  2115,  2115,  2115,  2115,
    2115,  2115,  2115,  2115,  -413,   209,  -413,   576,  -413,   212,
     576,  -413,  -413,  -413,   265,   218,   169,  -413,  -413,  -413,
    -413,   271,  -413,  -413,  -413,  1573,  2115,  -413,   576,  2714,
    -413,   576,    61,    66,  1611,  1225,  -413,  1225,   -19,    88,
     222,   223,   227,   228,  1689,  2394,  -413,    97,  2714,  -413,
     576,  -413,  2115,   305,  2115,  -413,   230,   188,   233,  2269,
     188,  2714,  -413,  2115,  -413,  -413,  1727,  1805,  2153,  -413,
    -413,    77,  -413,   235,  2714,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,  -413,
    -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,  2714,  -413,
    -413,  -413,   236,    83,   313,   242,  -413,  1843,   243,  -413,
    1921,  -413,  2458,  1999,  -413,   231,   244,  -413,  2037,  -413,
    2586,    22,   157,  -413,  -413,   974,  1104,  2618,   239,   238,
    2714,  2115,  2115,  -413,  -413,  2490,   -35,   252,  -413,  -413,
     974,  -413,   169,  -413,  -413,  -413,  -413,   123,  2115,  -413,
    -413,  2522,  -413,  -413,  -413,   325,  -413,  -413,   974,   255,
     188,  -413,  2153,  2714,  2714,  2115,  2115,   974,  -413,  2650,
    2115,  -413,    22,  -413,   257,  -413,  -413,  2714,  2714,  -413,
    2682,  -413,  -413,  -413,  -413
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     0,     0,     0,     3,
       5,     6,     4,    42,    43,    44,     0,     0,     0,    12,
     292,     0,   107,     0,     0,    82,    88,   102,     0,    91,
      96,    97,     0,     0,     9,   282,     0,   284,     0,   287,
     290,     0,     0,   109,     0,   111,     0,   243,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,   248,   250,
     249,   251,   252,   253,   254,   255,    84,     0,    86,     0,
      87,     0,     0,     0,    93,     0,    95,     0,   104,     0,
      10,   120,     8,     0,   281,   291,   283,     0,     0,     0,
     289,     0,   293,   108,   110,   277,     0,     0,   245,     0,
       0,     0,   306,     0,     0,   190,   225,   199,   200,   201,
     224,   223,   222,   227,   228,   198,   226,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   242,   139,   163,
     171,   191,   192,     0,   203,   195,   197,   196,   193,   114,
     205,   204,   207,   208,     0,     0,     0,     0,   276,     0,
      83,    85,    90,     0,    98,    99,    92,    94,   100,     0,
       0,   302,     0,   105,   106,   301,     7,   190,   120,   120,
      20,    33,    49,     0,    47,     0,    53,    51,     0,     0,
     232,    25,    26,    13,    15,    16,    17,    18,    19,    24,
      22,    23,    72,    14,   119,   117,     0,   118,   115,   116,
      21,     0,     0,     0,   292,   279,     0,   285,   286,   288,
      11,   244,   259,     0,     0,   302,   295,     0,   297,   299,
     307,   292,   265,     0,   275,     0,   267,   271,     0,     0,
       0,   167,   170,   190,   212,   220,   203,     0,   214,     0,
     216,     0,     0,   168,   169,   165,   164,   166,   157,   158,
     162,   161,   142,   141,   149,   150,   154,   152,   146,   147,
     148,   151,   153,   155,   156,   159,   160,     0,   145,   144,
     143,     0,     0,     0,   186,   187,   188,     0,   202,     0,
     308,   247,   304,     0,     0,   113,    89,   101,   103,   303,
       0,     0,   242,     0,     0,   242,     0,     0,     0,     0,
      32,   242,    30,     0,     0,    54,    48,     0,    46,    45,
      52,    50,    41,   190,   116,     0,   123,   124,   230,   231,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   278,     0,   246,     0,   256,     0,
       0,   298,   294,   296,     0,   260,   274,   273,   264,   266,
     270,   269,   229,   189,   210,     0,     0,   194,     0,   140,
     233,     0,     0,   190,     0,     0,   185,     0,     0,     0,
     248,   250,   253,   254,     0,     0,   175,     0,   241,   262,
       0,   300,     0,    69,     0,    81,     0,    78,     0,     0,
       0,    40,    28,    35,    29,    27,     0,     0,     0,    62,
      56,     0,    58,     0,   121,   128,   130,   138,   135,   131,
     129,   132,   133,   134,   137,   136,   127,   126,   125,   280,
     258,   257,   305,   261,   272,   268,   211,   213,   220,   203,
     215,   206,     0,   277,     0,     0,   178,     0,     0,   183,
       0,   237,     0,     0,   176,     0,     0,   172,     0,   263,
       0,     0,    80,    76,    77,   120,     0,     0,     0,     0,
      34,     0,     0,    61,    60,   242,     0,     0,    55,    57,
     120,   240,   189,   180,   179,   182,   181,     0,     0,   235,
     236,     0,   177,   174,   173,    68,    70,    71,    79,     0,
       0,    75,     0,    38,    39,     0,     0,    59,   184,     0,
       0,   234,     0,    74,     0,    31,    36,    63,    64,   239,
       0,    66,    67,    73,   238
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -413,  -413,  -413,  -413,  -413,  -413,  -190,  -413,  -413,  -413,
    -413,  -413,  -413,  -413,   344,  -413,  -413,  -413,  -413,  -413,
      49,  -413,  -413,   -47,  -413,  -413,  -412,  -413,  -413,  -369,
    -413,  -413,  -413,   282,   348,  -413,  -413,   280,   352,  -413,
    -413,   336,   204,  -413,  -413,  -413,   321,   361,  -163,  -413,
     -30,  -413,  -413,  -413,   -51,  -413,  -413,  -413,  -413,   -75,
    -413,  -413,  -413,  -413,  -413,   -99,  -413,    14,  -413,    16,
    -413,  -413,  -413,  -413,   -34,  -396,  -413,  -413,  -413,   -45,
     582,  -202,    33,  -213,   151,   276,   145,  -413,  -413,  -413,
    -413,   -18,   369,     9,  -413,    -5,  -413,   162,  -413,   -76,
    -413,   424,   501,  -413
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     9,    10,    11,    18,   180,   181,   297,   298,
     459,   505,   299,   182,   183,   184,   185,   186,   187,   188,
     306,   189,   401,   402,   403,   463,   190,   191,   192,   386,
     387,   388,    13,    67,    68,    70,    14,    75,    76,    30,
      31,    33,    77,    78,   163,    15,    44,    45,   193,   194,
     195,   196,   197,   198,   127,   267,   268,   269,   270,   128,
     129,   130,   131,   132,   133,   134,   237,   238,   239,   240,
     135,   136,   137,   138,   200,   201,   274,   275,   276,   202,
     145,    98,   213,   224,   140,   141,   225,   226,   227,    60,
      61,    34,    35,    38,    39,   203,    62,   217,   218,   219,
     165,   142,   143,    65
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,    23,    26,   164,   147,   291,   294,   139,   300,   336,
     346,   319,    40,   215,   161,    80,    23,   221,   454,    26,
     236,   458,   347,    91,   152,   215,    20,    79,    95,   221,
     199,    16,    72,   168,   278,   495,    20,    92,    20,   486,
      23,     3,   231,   232,   220,     1,   166,   243,   244,   245,
     246,   247,    20,    27,    20,    32,    20,   210,  -260,   488,
     279,    27,     4,    26,   360,   144,   435,     5,   235,     6,
     147,     7,    42,   436,   497,   241,   437,   398,    40,   399,
     236,    46,   204,    40,  -260,   332,   229,   489,   158,   159,
     511,   398,   206,   399,   354,   216,   333,   208,   228,    48,
      41,   355,    49,    50,   285,    36,    20,   223,   286,    81,
      93,   222,    37,   162,   162,     8,    17,   292,   295,   223,
     301,   504,    43,    21,   309,   162,   303,   312,   314,   308,
      51,   423,    86,    36,    17,    87,    32,   302,    66,    74,
    -260,    24,   344,   332,   424,  -260,    28,    42,  -260,   361,
     199,   400,    17,  -209,   397,    79,   434,   271,   272,    97,
     273,    36,    53,    46,    47,   468,   304,    54,   205,    55,
      81,    99,    56,   438,    58,    96,    88,    58,    97,  -292,
     439,    48,   446,   440,    49,    50,    58,    58,   230,   447,
     100,    58,   448,    42,   236,   352,   334,   341,   103,   335,
    -209,    58,   384,   230,   385,    58,    96,    58,  -243,    97,
     357,    42,    51,   279,   381,   498,   359,   144,   279,   338,
     339,   228,   375,    58,    58,   310,   311,   368,   378,   149,
     150,   153,   377,   156,    58,    27,   207,   160,   211,   230,
      58,   277,   235,    89,    53,   391,   281,   119,    58,    54,
      58,    55,   279,   290,    56,   305,   236,   429,   383,   287,
     307,   315,    97,   392,   404,   394,   337,   395,   340,   342,
     336,   345,   348,   350,   353,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   417,   418,   232,
     356,   358,   243,   380,   382,    58,   389,    58,   319,    59,
     393,   419,    59,   425,   235,   428,   421,   319,   344,  -205,
    -204,    59,    59,    58,  -207,  -208,    59,   451,   453,   472,
     241,   492,   455,   442,   470,   482,    59,   491,   471,   506,
      59,   450,    59,   496,   473,   475,   483,   502,   457,   452,
      46,    47,   460,   503,   433,   513,    12,   465,    59,    59,
     151,   416,   418,   466,   469,    25,   157,   236,    48,    59,
      29,    49,    50,    73,   288,    59,    94,    22,   464,   427,
     420,   349,   430,    59,    19,    59,     0,     0,     0,    58,
     343,     0,     0,     0,     0,     0,   378,     0,     0,    51,
       0,     0,   481,   467,     0,   477,     0,   378,     0,   352,
       0,     0,     0,     0,   199,   235,     0,     0,     0,     0,
     493,   494,     0,     0,    46,    47,   485,   487,     0,   199,
      59,    53,    59,   370,     0,     0,    83,   499,    55,     0,
       0,    56,    48,     0,    58,    49,    50,   199,    59,     0,
       0,   199,     0,     0,   507,   508,   199,    63,     0,   510,
      63,     0,     0,     0,    46,    47,     0,     0,     0,    63,
      63,     0,     0,    51,    63,     0,     0,     0,   512,     0,
       0,     0,    48,     0,    63,    49,    50,     0,    63,    52,
      63,     0,     0,     0,     0,     0,     0,     0,    58,     0,
       0,    58,     0,     0,     0,    53,    63,    63,     0,     0,
      54,     0,    55,    51,    59,    56,     0,    63,     0,    58,
       0,     0,    58,    63,     0,     0,   370,     0,   370,    69,
       0,    63,     0,    63,    64,     0,     0,    64,     0,     0,
       0,    58,     0,     0,     0,    53,    64,    64,     0,     0,
      54,    64,    55,     0,     0,    56,     0,     0,   371,     0,
       0,    64,     0,     0,     0,    64,     0,    64,     0,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    63,     0,
      63,     0,     0,    64,    64,     0,     0,     0,     0,     0,
       0,    46,    47,     0,    64,     0,    63,     0,     0,     0,
      64,     0,     0,     0,     0,     0,     0,     0,    64,    48,
      64,     0,    49,    50,     0,    57,     0,     0,    71,     0,
       0,     0,     0,    59,     0,     0,    59,    84,    85,     0,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
      51,     0,   102,     0,    59,     0,     0,    59,   148,    46,
      47,   371,     0,   371,     0,    64,     0,    64,     0,     0,
       0,     0,    63,     0,   154,   155,    59,    48,     0,     0,
      49,    50,    53,    64,     0,     0,     0,    54,     0,    55,
       0,   209,    56,     0,   104,   313,     6,     0,     7,   212,
     168,   214,   169,     0,   170,     0,   171,   172,    51,     0,
     173,   174,    48,   175,   176,     0,   372,   177,   178,   106,
     107,   108,   109,     0,   110,   111,   112,    63,   113,   114,
     115,   116,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     8,    51,     0,    54,   280,    55,   282,    64,
      56,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,     0,   289,     0,     0,     0,     0,     0,
       0,   117,     0,     0,     0,   118,   179,   234,     0,     0,
     120,    63,   121,     0,    63,   122,     0,   279,   123,   124,
       0,   125,     0,   373,   126,     0,     0,     0,     0,     0,
       0,     0,    63,     0,    64,    63,     0,     0,     0,   372,
       0,   372,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   396,    63,     0,     0,     0,     0,     0,
     351,     0,     0,     0,     0,     0,     0,     0,   316,   317,
     248,   249,   250,   251,   252,   253,   254,   255,   279,   256,
    -116,   257,     0,  -122,    81,     0,     0,     0,    64,     0,
       0,    64,     0,   258,   259,   260,   261,   262,   263,   264,
     265,   266,     0,     0,   369,     0,     0,     0,     0,    64,
       0,     0,    64,     0,     0,   379,   373,     0,   373,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   104,   167,
       6,    64,     7,     0,   168,     0,   169,     0,   170,     0,
     171,   172,     0,     0,   173,   174,    48,   175,   176,     0,
       0,   177,   178,   106,   107,   108,   109,     0,   110,   111,
     112,     0,   113,   114,   115,   116,     0,     0,     0,   212,
       0,     0,   422,     0,     0,     0,     8,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     431,     0,     0,   432,     0,     0,     0,     0,     0,   148,
       0,     0,     0,     0,     0,   117,     0,     0,     0,   118,
     179,   318,   449,     0,   120,     0,   121,     0,     0,   122,
       0,     0,   123,   124,     0,   125,     0,     0,   126,   104,
     167,     6,     0,     7,     0,   168,     0,   169,     0,   170,
       0,   171,   172,     0,     0,   173,   174,    48,   175,   176,
       0,     0,   177,   178,   106,   107,   108,   109,     0,   110,
     111,   112,     0,   113,   114,   115,   116,   362,   363,     0,
       0,     0,     0,     0,     0,     0,     0,     8,    51,     0,
       0,     0,     0,     0,     0,    48,     0,     0,    49,    50,
       0,     0,   106,   107,   108,   109,     0,   110,   111,   112,
       0,   113,   114,   115,   116,     0,   117,     0,     0,     0,
     118,   179,     0,     0,     0,   120,    51,   121,     0,     0,
     122,     0,     0,   123,   124,     0,   125,     0,     0,   126,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   117,     0,     0,     0,   364,   119,
       0,     0,     0,   365,   366,   121,     0,     0,   367,   104,
     233,   123,   124,     0,   125,     0,     0,   126,   384,     0,
     385,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,     0,     0,     0,   106,   107,   108,   109,     0,   110,
     111,   112,     0,   113,   114,   115,   116,   104,   105,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,     0,
       0,     0,   106,   107,   108,   109,     0,   110,   111,   112,
       0,   113,   114,   115,   116,     0,   117,     0,     0,     0,
     118,   119,   234,     0,     0,   120,    51,   121,     0,     0,
     122,     0,     0,   123,   124,     0,   125,     0,     0,   126,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   117,     0,     0,   242,   118,   119,
     362,   363,     0,   120,     0,   121,   146,     0,   122,     0,
       0,   123,   124,     0,   125,     0,     0,   126,    48,     0,
       0,    49,    50,     0,     0,   106,   107,   108,   109,     0,
     110,   111,   112,     0,   113,   114,   115,   116,   104,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,   106,   107,   108,   109,     0,   110,   111,
     112,     0,   113,   114,   115,   116,     0,   117,     0,     0,
       0,   364,   119,     0,     0,     0,   365,    51,   121,     0,
       0,   367,     0,     0,   123,   124,     0,   125,     0,     0,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,   104,   233,     0,   118,
     119,     0,     0,     0,   120,     0,   121,   146,     0,   122,
       0,     0,   123,   124,    48,   125,     0,     0,   126,     0,
       0,   106,   107,   108,   109,     0,   110,   111,   112,     0,
     113,   114,   115,   116,   104,   167,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,   296,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,   106,
     107,   108,   109,     0,   110,   111,   112,     0,   113,   114,
     115,   116,     0,   117,     0,     0,     0,   118,   119,   234,
       0,     0,   120,    51,   121,     0,     0,   122,     0,     0,
     123,   124,     0,   125,     0,     0,   126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,   104,   105,     0,   118,   179,     0,     0,     0,
     120,     0,   121,     0,     0,   122,     0,     0,   123,   124,
      48,   125,     0,     0,   126,     0,     0,   106,   107,   108,
     109,     0,   110,   111,   112,     0,   113,   114,   115,   116,
     104,   105,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,   106,   107,   108,   109,     0,
     110,   111,   112,     0,   113,   114,   115,   116,     0,   117,
       0,     0,     0,   118,   119,     0,   374,     0,   120,    51,
     121,     0,     0,   122,     0,     0,   123,   124,     0,   125,
       0,     0,   126,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,   104,   233,
       0,   118,   119,     0,     0,     0,   120,   376,   121,     0,
       0,   122,     0,     0,   123,   124,    48,   125,     0,     0,
     126,     0,     0,   106,   107,   108,   109,     0,   110,   111,
     112,     0,   113,   114,   115,   116,   104,   105,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,   144,     0,
       0,   106,   107,   108,   109,     0,   110,   111,   112,     0,
     113,   114,   115,   116,     0,   117,     0,     0,     0,   118,
     119,   426,     0,     0,   120,    51,   121,     0,     0,   122,
       0,     0,   123,   124,     0,   125,     0,     0,   126,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,   104,   105,     0,   118,   119,     0,
       0,     0,   120,     0,   121,     0,     0,   122,     0,     0,
     123,   124,    48,   125,     0,     0,   126,     0,     0,   106,
     107,   108,   109,     0,   110,   111,   112,     0,   113,   114,
     115,   116,   104,   105,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,   461,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,   106,   107,   108,
     109,     0,   110,   111,   112,     0,   113,   114,   115,   116,
       0,   117,     0,     0,     0,   118,   119,     0,     0,     0,
     120,    51,   121,   441,     0,   122,     0,     0,   123,   124,
       0,   125,     0,     0,   126,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
     104,   105,     0,   118,   119,     0,     0,     0,   120,     0,
     121,     0,     0,   122,   462,     0,   123,   124,    48,   125,
       0,     0,   126,     0,     0,   106,   107,   108,   109,     0,
     110,   111,   112,     0,   113,   114,   115,   116,   104,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,   106,   107,   108,   109,     0,   110,   111,
     112,     0,   113,   114,   115,   116,     0,   117,     0,     0,
       0,   118,   119,     0,     0,     0,   120,    51,   121,     0,
       0,   122,     0,     0,   123,   124,     0,   125,     0,     0,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,   104,   105,     0,   118,
     119,     0,     0,     0,   120,   474,   121,     0,     0,   122,
       0,     0,   123,   124,    48,   125,     0,     0,   126,     0,
       0,   106,   107,   108,   109,     0,   110,   111,   112,     0,
     113,   114,   115,   116,     0,   316,   317,   248,   249,   250,
     251,   252,   253,   254,   255,    51,   256,  -116,   257,     0,
    -122,   390,     0,     0,     0,     0,     0,     0,     0,     0,
     258,   259,   260,   261,   262,   263,   264,   265,   266,     0,
       0,     0,     0,   117,   104,   105,     0,   118,   119,     0,
       0,     0,   120,   476,   121,     0,     0,   122,     0,     0,
     123,   124,    48,   125,     0,     0,   126,     0,     0,   106,
     107,   108,   109,     0,   110,   111,   112,     0,   113,   114,
     115,   116,   104,   105,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,   106,   107,   108,
     109,     0,   110,   111,   112,     0,   113,   114,   115,   116,
       0,   117,     0,     0,     0,   118,   119,     0,     0,     0,
     120,    51,   121,   480,     0,   122,     0,     0,   123,   124,
       0,   125,     0,     0,   126,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
     104,   105,     0,   118,   119,     0,     0,     0,   120,   484,
     121,     0,     0,   122,     0,     0,   123,   124,    48,   125,
       0,     0,   126,     0,     0,   106,   107,   108,   109,     0,
     110,   111,   112,     0,   113,   114,   115,   116,   104,   167,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,   106,   107,   108,   109,     0,   110,   111,
     112,     0,   113,   114,   115,   116,     0,   117,     0,     0,
       0,   118,   119,     0,     0,     0,   120,    51,   121,     0,
       0,   122,     0,     0,   123,   124,     0,   125,     0,     0,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,   104,   167,     0,   118,
     119,     0,     0,     0,   120,     0,   121,     0,     0,   122,
       0,     0,   123,   124,    48,   125,     0,     0,   126,     0,
       0,   106,   107,   108,   109,     0,   110,   111,   112,     0,
     113,   114,   115,   116,   104,   105,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,   106,
     107,   108,   109,     0,   110,   111,   112,     0,   113,   114,
     115,   116,     0,   117,     0,     0,     0,   118,   293,     0,
       0,     0,   120,    51,   121,     0,     0,   122,     0,     0,
     123,   124,     0,   125,     0,     0,   126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     0,     0,     0,   118,   456,     0,     0,     0,
     120,     0,   121,     0,     0,   122,     0,     0,   123,   124,
       0,   125,     0,     0,   126,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,   316,   317,   248,
     249,   250,   251,   252,   253,   254,   255,     0,   256,     0,
     257,     0,     0,     0,     0,  -218,     0,     0,     0,     0,
       0,  -220,   258,   259,   260,   261,   262,   263,   264,   265,
     266,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,   316,   317,   248,   249,   250,   251,   252,
     253,   254,   255,     0,   256,     0,   257,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -242,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   248,   249,   250,
     251,   252,   253,   254,   255,     0,   256,     0,   257,     0,
       0,     0,     0,   443,     0,     0,     0,     0,   444,   445,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   248,
     249,   250,   251,   252,   253,   254,   255,     0,   256,     0,
     257,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     283,   284,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   248,   249,   250,   251,   252,   253,   254,   255,     0,
     256,     0,   257,     0,     0,     0,     0,   478,     0,     0,
       0,     0,   479,     0,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   248,   249,   250,   251,   252,   253,   254,
     255,     0,   256,     0,   257,     0,  -122,     0,     0,   -65,
       0,     0,     0,     0,     0,     0,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   248,   249,   250,   251,   252,
     253,   254,   255,     0,   256,     0,   257,     0,     0,     0,
       0,   500,     0,     0,     0,     0,   501,     0,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   248,   249,   250,
     251,   252,   253,   254,   255,     0,   256,     0,   257,     0,
       0,     0,     0,  -218,     0,     0,     0,     0,     0,     0,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   248,
     249,   250,   251,   252,   253,   254,   255,     0,   256,     0,
     257,     0,     0,    81,     0,     0,     0,     0,     0,     0,
       0,     0,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   248,   249,   250,   251,   252,   253,   254,   255,     0,
     256,     0,   257,     0,     0,   490,     0,     0,     0,     0,
       0,     0,     0,     0,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   248,   249,   250,   251,   252,   253,   254,
     255,     0,   256,     0,   257,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   509,     0,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   248,   249,   250,   251,   252,
     253,   254,   255,     0,   256,     0,   257,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   514,     0,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   248,   249,   250,
     251,   252,   253,   254,   255,     0,   256,     0,   257,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     258,   259,   260,   261,   262,   263,   264,   265,   266
};

static const yytype_int16 yycheck[] =
{
      34,     6,     7,    79,    55,   168,   169,    52,   171,   211,
     223,   201,    17,     6,     6,    33,    21,     6,   387,    24,
     119,   390,   224,    41,    69,     6,     6,    32,    46,     6,
      81,     6,    70,    11,   133,    70,     6,    42,     6,   451,
      45,     4,   117,   118,     6,     3,    80,   122,   123,   124,
     125,   126,     6,     6,     6,    93,     6,    91,     6,   455,
      95,     6,     0,    68,     6,    27,    85,     5,   119,     7,
     121,     9,    95,    92,   470,   120,    95,    14,    83,    16,
     179,     5,     6,    88,    32,    70,   104,   456,    94,    95,
     502,    14,    83,    16,    88,    88,    81,    88,   103,    23,
       6,    95,    26,    27,   149,    85,     6,    96,   153,    87,
      92,    88,    92,   106,   106,    53,    91,   168,   169,    96,
     171,   490,    92,    91,   175,   106,   171,   178,   179,   174,
      54,   344,    92,    85,    91,    95,    93,   171,    92,    92,
      88,    91,    90,    70,   346,    93,    91,    95,    96,    91,
     201,    88,    91,    87,    81,   160,    90,    90,    91,    93,
      93,    85,    86,     5,     6,    88,   171,    91,    92,    93,
      87,    93,    96,    85,    23,    90,    95,    26,    93,    81,
      92,    23,    85,    95,    26,    27,    35,    36,    90,    92,
      87,    40,    95,    95,   293,   229,    92,   215,    87,    95,
      87,    50,    14,    90,    16,    54,    90,    56,    92,    93,
      92,    95,    54,    95,   290,    92,   267,    27,    95,    94,
      95,   226,   273,    72,    73,   176,   177,   272,   279,    70,
      92,    70,   277,    92,    83,     6,    92,    95,     6,    90,
      89,    91,   293,    85,    86,   296,    92,    87,    97,    91,
      99,    93,    95,   101,    96,     6,   355,   356,   292,    94,
      87,    86,    93,   297,   315,   299,    95,   301,    94,    88,
     472,     6,    88,    32,     6,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   364,
      89,    94,   367,    94,    83,   144,    83,   146,   488,    23,
      83,    92,    26,    32,   355,   356,    94,   497,    90,    87,
      87,    35,    36,   162,    87,    87,    40,    12,    88,     6,
     365,    83,    89,   374,    89,    94,    50,    88,    92,   492,
      54,   382,    56,    81,    92,    92,    92,    12,   389,   384,
       5,     6,   393,    88,   362,    88,     2,   398,    72,    73,
      68,   396,   397,   398,   401,     7,    76,   456,    23,    83,
       8,    26,    27,    27,   160,    89,    45,     6,   398,   355,
     337,   226,   356,    97,     5,    99,    -1,    -1,    -1,   228,
     218,    -1,    -1,    -1,    -1,    -1,   437,    -1,    -1,    54,
      -1,    -1,   443,   398,    -1,   440,    -1,   448,    -1,   433,
      -1,    -1,    -1,    -1,   455,   456,    -1,    -1,    -1,    -1,
     461,   462,    -1,    -1,     5,     6,   450,   451,    -1,   470,
     144,    86,   146,   272,    -1,    -1,    91,   478,    93,    -1,
      -1,    96,    23,    -1,   283,    26,    27,   488,   162,    -1,
      -1,   492,    -1,    -1,   495,   496,   497,    23,    -1,   500,
      26,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,    35,
      36,    -1,    -1,    54,    40,    -1,    -1,    -1,   502,    -1,
      -1,    -1,    23,    -1,    50,    26,    27,    -1,    54,    70,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   337,    -1,
      -1,   340,    -1,    -1,    -1,    86,    72,    73,    -1,    -1,
      91,    -1,    93,    54,   228,    96,    -1,    83,    -1,   358,
      -1,    -1,   361,    89,    -1,    -1,   365,    -1,   367,    70,
      -1,    97,    -1,    99,    23,    -1,    -1,    26,    -1,    -1,
      -1,   380,    -1,    -1,    -1,    86,    35,    36,    -1,    -1,
      91,    40,    93,    -1,    -1,    96,    -1,    -1,   272,    -1,
      -1,    50,    -1,    -1,    -1,    54,    -1,    56,    -1,   283,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,
     146,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,     5,     6,    -1,    83,    -1,   162,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    23,
      99,    -1,    26,    27,    -1,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,   337,    -1,    -1,   340,    35,    36,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    50,    -1,   358,    -1,    -1,   361,    56,     5,
       6,   365,    -1,   367,    -1,   144,    -1,   146,    -1,    -1,
      -1,    -1,   228,    -1,    72,    73,   380,    23,    -1,    -1,
      26,    27,    86,   162,    -1,    -1,    -1,    91,    -1,    93,
      -1,    89,    96,    -1,     5,     6,     7,    -1,     9,    97,
      11,    99,    13,    -1,    15,    -1,    17,    18,    54,    -1,
      21,    22,    23,    24,    25,    -1,   272,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,   283,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    53,    54,    -1,    91,   144,    93,   146,   228,
      96,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,   162,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      91,   337,    93,    -1,   340,    96,    -1,    95,    99,   100,
      -1,   102,    -1,   272,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   358,    -1,   283,   361,    -1,    -1,    -1,   365,
      -1,   367,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,   380,    -1,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    95,    82,
      83,    84,    -1,    86,    87,    -1,    -1,    -1,   337,    -1,
      -1,   340,    -1,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,   272,    -1,    -1,    -1,    -1,   358,
      -1,    -1,   361,    -1,    -1,   283,   365,    -1,   367,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,   380,     9,    -1,    11,    -1,    13,    -1,    15,    -1,
      17,    18,    -1,    -1,    21,    22,    23,    24,    25,    -1,
      -1,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,    -1,    -1,    -1,   337,
      -1,    -1,   340,    -1,    -1,    -1,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     358,    -1,    -1,   361,    -1,    -1,    -1,    -1,    -1,   367,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    88,   380,    -1,    91,    -1,    93,    -1,    -1,    96,
      -1,    -1,    99,   100,    -1,   102,    -1,    -1,   105,     5,
       6,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,
      -1,    17,    18,    -1,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    39,    40,    41,    42,     5,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,
      -1,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,    -1,    82,    -1,    -1,    -1,
      86,    87,    -1,    -1,    -1,    91,    54,    93,    -1,    -1,
      96,    -1,    -1,    99,   100,    -1,   102,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,
      -1,    -1,    -1,    91,    92,    93,    -1,    -1,    96,     5,
       6,    99,   100,    -1,   102,    -1,    -1,   105,    14,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    39,    40,    41,    42,     5,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,    -1,    82,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    91,    54,    93,    -1,    -1,
      96,    -1,    -1,    99,   100,    -1,   102,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    85,    86,    87,
       5,     6,    -1,    91,    -1,    93,    94,    -1,    96,    -1,
      -1,    99,   100,    -1,   102,    -1,    -1,   105,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,    -1,    82,    -1,    -1,
      -1,    86,    87,    -1,    -1,    -1,    91,    54,    93,    -1,
      -1,    96,    -1,    -1,    99,   100,    -1,   102,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,     5,     6,    -1,    86,
      87,    -1,    -1,    -1,    91,    -1,    93,    94,    -1,    96,
      -1,    -1,    99,   100,    23,   102,    -1,    -1,   105,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    -1,
      39,    40,    41,    42,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,    -1,    82,    -1,    -1,    -1,    86,    87,    88,
      -1,    -1,    91,    54,    93,    -1,    -1,    96,    -1,    -1,
      99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,     5,     6,    -1,    86,    87,    -1,    -1,    -1,
      91,    -1,    93,    -1,    -1,    96,    -1,    -1,    99,   100,
      23,   102,    -1,    -1,   105,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,    -1,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    54,
      93,    -1,    -1,    96,    -1,    -1,    99,   100,    -1,   102,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,     5,     6,
      -1,    86,    87,    -1,    -1,    -1,    91,    92,    93,    -1,
      -1,    96,    -1,    -1,    99,   100,    23,   102,    -1,    -1,
     105,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    -1,
      39,    40,    41,    42,    -1,    82,    -1,    -1,    -1,    86,
      87,    88,    -1,    -1,    91,    54,    93,    -1,    -1,    96,
      -1,    -1,    99,   100,    -1,   102,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,     5,     6,    -1,    86,    87,    -1,
      -1,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,    -1,
      99,   100,    23,   102,    -1,    -1,   105,    -1,    -1,    30,
      31,    32,    33,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    19,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
      -1,    82,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,
      91,    54,    93,    94,    -1,    96,    -1,    -1,    99,   100,
      -1,   102,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
       5,     6,    -1,    86,    87,    -1,    -1,    -1,    91,    -1,
      93,    -1,    -1,    96,    19,    -1,    99,   100,    23,   102,
      -1,    -1,   105,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,    -1,    82,    -1,    -1,
      -1,    86,    87,    -1,    -1,    -1,    91,    54,    93,    -1,
      -1,    96,    -1,    -1,    99,   100,    -1,   102,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,     5,     6,    -1,    86,
      87,    -1,    -1,    -1,    91,    92,    93,    -1,    -1,    96,
      -1,    -1,    99,   100,    23,   102,    -1,    -1,   105,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    -1,
      39,    40,    41,    42,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    54,    82,    83,    84,    -1,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    -1,    -1,    82,     5,     6,    -1,    86,    87,    -1,
      -1,    -1,    91,    92,    93,    -1,    -1,    96,    -1,    -1,
      99,   100,    23,   102,    -1,    -1,   105,    -1,    -1,    30,
      31,    32,    33,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
      -1,    82,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,
      91,    54,    93,    94,    -1,    96,    -1,    -1,    99,   100,
      -1,   102,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
       5,     6,    -1,    86,    87,    -1,    -1,    -1,    91,    92,
      93,    -1,    -1,    96,    -1,    -1,    99,   100,    23,   102,
      -1,    -1,   105,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,    -1,    82,    -1,    -1,
      -1,    86,    87,    -1,    -1,    -1,    91,    54,    93,    -1,
      -1,    96,    -1,    -1,    99,   100,    -1,   102,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,     5,     6,    -1,    86,
      87,    -1,    -1,    -1,    91,    -1,    93,    -1,    -1,    96,
      -1,    -1,    99,   100,    23,   102,    -1,    -1,   105,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    -1,
      39,    40,    41,    42,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    91,    54,    93,    -1,    -1,    96,    -1,    -1,
      99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,
      91,    -1,    93,    -1,    -1,    96,    -1,    -1,    99,   100,
      -1,   102,    -1,    -1,   105,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    -1,    84,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    -1,    84,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    94,    -1,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    -1,    84,    -1,    86,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    -1,    84,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    94,    -1,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    -1,    84,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    -1,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,   102,   103,   104
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,   108,     4,     0,     5,     7,     9,    53,   109,
     110,   111,   121,   139,   143,   152,     6,    91,   112,   199,
       6,    91,   154,   202,    91,   141,   202,     6,    91,   145,
     146,   147,    93,   148,   198,   199,    85,    92,   200,   201,
     202,     6,    95,    92,   153,   154,     5,     6,    23,    26,
      27,    54,    70,    86,    91,    93,    96,   187,   191,   192,
     196,   197,   203,   208,   209,   210,    92,   140,   141,    70,
     142,   187,    70,   148,    92,   144,   145,   149,   150,   202,
     198,    87,   181,    91,   187,   187,    92,    95,    95,    85,
     187,   198,   202,    92,   153,   198,    90,    93,   188,    93,
      87,    86,   187,    87,     5,     6,    30,    31,    32,    33,
      35,    36,    37,    39,    40,    41,    42,    82,    86,    87,
      91,    93,    96,    99,   100,   102,   105,   161,   166,   167,
     168,   169,   170,   171,   172,   177,   178,   179,   180,   186,
     191,   192,   208,   209,    27,   187,    94,   161,   187,    70,
      92,   140,   186,    70,   187,   187,    92,   144,    94,    95,
      95,     6,   106,   151,   206,   207,   181,     6,    11,    13,
      15,    17,    18,    21,    22,    24,    25,    28,    29,    87,
     113,   114,   120,   121,   122,   123,   124,   125,   126,   128,
     133,   134,   135,   155,   156,   157,   158,   159,   160,   161,
     181,   182,   186,   202,     6,    92,   200,    92,   200,   187,
     181,     6,   187,   189,   187,     6,    88,   204,   205,   206,
       6,     6,    88,    96,   190,   193,   194,   195,   202,   198,
      90,   166,   166,     6,    88,   161,   172,   173,   174,   175,
     176,   186,    85,   166,   166,   166,   166,   166,    73,    74,
      75,    76,    77,    78,    79,    80,    82,    84,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   162,   163,   164,
     165,    90,    91,    93,   183,   184,   185,    91,   172,    95,
     187,    92,   187,    94,    95,   186,   186,    94,   149,   187,
     101,   155,   161,    87,   155,   161,    19,   115,   116,   119,
     155,   161,   181,   186,   202,     6,   127,    87,   186,   161,
     127,   127,   161,     6,   161,    86,    71,    72,    88,   113,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    70,    81,    92,    95,   188,    95,    94,    95,
      94,   198,    88,   204,    90,     6,   190,   188,    88,   193,
      32,   187,   181,     6,    88,    95,    89,    92,    94,   161,
       6,    91,     5,     6,    86,    91,    92,    96,   186,   187,
     191,   192,   208,   209,    89,   161,    92,   186,   161,   187,
      94,   206,    83,   181,    14,    16,   136,   137,   138,    83,
      87,   161,   181,    83,   181,   181,    70,    81,    14,    16,
      88,   129,   130,   131,   161,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,    92,
     189,    94,   187,   190,   188,    32,    88,   174,   161,   172,
     176,   187,   187,   198,    90,    85,    92,    95,    85,    92,
      95,    94,   161,    89,    94,    95,    85,    92,    95,   187,
     161,    12,   186,    88,   136,    89,    87,   161,   136,   117,
     161,    19,    19,   132,   157,   161,   186,   202,    88,   130,
      89,    92,     6,    92,    92,    92,    92,   186,    89,    94,
      94,   161,    94,    92,    92,   181,   133,   181,   182,   136,
      87,    88,    83,   161,   161,    70,    81,   182,    92,   161,
      89,    94,    12,    88,   136,   118,   155,   161,   161,    94,
     161,   133,   181,    88,    94
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   108,   109,   109,   109,   110,   110,   110,
     110,   111,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   114,   114,   114,
     114,   115,   116,   116,   117,   117,   118,   118,   119,   119,
     119,   120,   121,   121,   121,   122,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   128,   128,   129,   129,   130,
     131,   131,   131,   132,   132,   132,   133,   133,   133,   133,
     133,   133,   134,   135,   135,   135,   135,   136,   136,   137,
     138,   138,   139,   139,   139,   140,   140,   141,   141,   142,
     142,   143,   143,   143,   144,   144,   145,   145,   146,   147,
     148,   148,   148,   149,   149,   150,   151,   152,   152,   152,
     153,   153,   154,   154,   154,   155,   155,   155,   155,   155,
     156,   157,   158,   159,   159,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   161,
     161,   162,   162,   162,   162,   162,   163,   163,   163,   163,
     163,   163,   163,   164,   164,   164,   164,   165,   165,   165,
     165,   165,   165,   166,   166,   166,   166,   166,   166,   166,
     166,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   168,
     168,   168,   168,   168,   168,   169,   169,   169,   169,   169,
     169,   169,   170,   170,   171,   171,   171,   171,   171,   171,
     172,   172,   172,   173,   173,   174,   174,   175,   175,   175,
     176,   176,   177,   177,   177,   177,   178,   179,   179,   180,
     181,   182,   182,   183,   184,   184,   184,   184,   184,   184,
     185,   186,   186,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   188,   188,   189,   189,
     190,   190,   191,   191,   192,   192,   193,   193,   194,   194,
     194,   194,   195,   195,   195,   195,   196,   197,   198,   198,
     198,   198,   198,   199,   199,   199,   200,   200,   201,   201,
     201,   201,   202,   202,   203,   203,   204,   204,   205,   205,
     206,   206,   207,   207,   208,   209,   210,   210,   210
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     1,     5,     4,     3,
       4,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       2,     5,     1,     0,     1,     0,     1,     0,     4,     4,
       2,     2,     1,     1,     1,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     4,     3,     2,     1,     3,
       2,     2,     1,     3,     3,     1,     7,     7,     5,     3,
       5,     5,     1,     7,     6,     5,     4,     2,     1,     3,
       2,     1,     2,     4,     3,     2,     1,     2,     1,     3,
       2,     2,     4,     3,     2,     1,     1,     1,     3,     3,
       3,     4,     0,     3,     1,     2,     1,     2,     4,     3,
       2,     1,     2,     4,     3,     1,     1,     1,     1,     1,
       0,     3,     1,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     1,     4,     5,     5,     3,     4,     5,     4,     5,
       5,     5,     5,     4,     6,     3,     2,     2,     2,     3,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     4,     1,     1,     1,
       3,     4,     2,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     2,     1,     2,     5,     4,     4,     3,     7,     6,
       4,     3,     1,     1,     3,     2,     4,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     1,
       1,     3,     4,     5,     4,     3,     2,     1,     3,     2,
       2,     1,     3,     2,     2,     1,     2,     2,     4,     3,
       5,     2,     1,     3,     2,     4,     3,     1,     3,     2,
       1,     2,     1,     3,     4,     3,     2,     1,     2,     1,
       3,     1,     1,     2,     3,     5,     2,     3,     3
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
#line 29 "lab2.yacc"
                      {printf("Find package and import\n");}
#line 2351 "y.tab.c"
    break;

  case 74: /* ExprSwitchStmt: SWITCH SimpleStmt SEMICOLON '{' ExprCaseClauseList '}'  */
#line 141 "lab2.yacc"
                                                                                 {printf("simplestmt\n");}
#line 2357 "y.tab.c"
    break;


#line 2361 "y.tab.c"

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

#line 510 "lab2.yacc"


int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
	yyparse();
        fclose(yyin);
	if(error_ == 0)
		printf("OK\n");
        
}
