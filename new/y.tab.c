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
  YYSYMBOL_90_ = 90,                       /* '('  */
  YYSYMBOL_91_ = 91,                       /* ')'  */
  YYSYMBOL_92_ = 92,                       /* '['  */
  YYSYMBOL_93_ = 93,                       /* ']'  */
  YYSYMBOL_94_ = 94,                       /* ','  */
  YYSYMBOL_95_ = 95,                       /* '*'  */
  YYSYMBOL_96_ = 96,                       /* '/'  */
  YYSYMBOL_97_ = 97,                       /* '%'  */
  YYSYMBOL_98_ = 98,                       /* '&'  */
  YYSYMBOL_99_ = 99,                       /* '-'  */
  YYSYMBOL_100_ = 100,                     /* '|'  */
  YYSYMBOL_101_ = 101,                     /* '+'  */
  YYSYMBOL_102_ = 102,                     /* '<'  */
  YYSYMBOL_103_ = 103,                     /* '>'  */
  YYSYMBOL_104_ = 104,                     /* '!'  */
  YYSYMBOL_105_ = 105,                     /* '.'  */
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
  YYSYMBOL_DeferStmt = 119,                /* DeferStmt  */
  YYSYMBOL_Declaration = 120,              /* Declaration  */
  YYSYMBOL_GoStmt = 121,                   /* GoStmt  */
  YYSYMBOL_ReturnStmt = 122,               /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 123,                /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 124,             /* ContinueStmt  */
  YYSYMBOL_GotoStmt = 125,                 /* GotoStmt  */
  YYSYMBOL_Label = 126,                    /* Label  */
  YYSYMBOL_SelectStmt = 127,               /* SelectStmt  */
  YYSYMBOL_CommClauseList = 128,           /* CommClauseList  */
  YYSYMBOL_CommClause = 129,               /* CommClause  */
  YYSYMBOL_CommCase = 130,                 /* CommCase  */
  YYSYMBOL_RecvStmt = 131,                 /* RecvStmt  */
  YYSYMBOL_IfStmt = 132,                   /* IfStmt  */
  YYSYMBOL_SwitchStmt = 133,               /* SwitchStmt  */
  YYSYMBOL_ExprCaseClauseList = 134,       /* ExprCaseClauseList  */
  YYSYMBOL_ExprCaseClause = 135,           /* ExprCaseClause  */
  YYSYMBOL_ExprSwitchCase = 136,           /* ExprSwitchCase  */
  YYSYMBOL_ConstDecl = 137,                /* ConstDecl  */
  YYSYMBOL_ConstSpecList = 138,            /* ConstSpecList  */
  YYSYMBOL_ConstSpec = 139,                /* ConstSpec  */
  YYSYMBOL_ConstExpr = 140,                /* ConstExpr  */
  YYSYMBOL_TypeDecl = 141,                 /* TypeDecl  */
  YYSYMBOL_TypeSpecList = 142,             /* TypeSpecList  */
  YYSYMBOL_TypeSpec = 143,                 /* TypeSpec  */
  YYSYMBOL_AliasDecl = 144,                /* AliasDecl  */
  YYSYMBOL_TypeDef = 145,                  /* TypeDef  */
  YYSYMBOL_TypeParameters = 146,           /* TypeParameters  */
  YYSYMBOL_TypeParamList = 147,            /* TypeParamList  */
  YYSYMBOL_TypeParamDecl = 148,            /* TypeParamDecl  */
  YYSYMBOL_TypeConstraint = 149,           /* TypeConstraint  */
  YYSYMBOL_VarDecl = 150,                  /* VarDecl  */
  YYSYMBOL_VarSpecList = 151,              /* VarSpecList  */
  YYSYMBOL_VarSpec = 152,                  /* VarSpec  */
  YYSYMBOL_SimpleStmt = 153,               /* SimpleStmt  */
  YYSYMBOL_EmptyStatement = 154,           /* EmptyStatement  */
  YYSYMBOL_SendStmt = 155,                 /* SendStmt  */
  YYSYMBOL_Channel = 156,                  /* Channel  */
  YYSYMBOL_IncDecStmt = 157,               /* IncDecStmt  */
  YYSYMBOL_Assignment = 158,               /* Assignment  */
  YYSYMBOL_Expression = 159,               /* Expression  */
  YYSYMBOL_binary_op = 160,                /* binary_op  */
  YYSYMBOL_mul_op = 161,                   /* mul_op  */
  YYSYMBOL_add_op = 162,                   /* add_op  */
  YYSYMBOL_rel_op = 163,                   /* rel_op  */
  YYSYMBOL_UnaryExpr = 164,                /* UnaryExpr  */
  YYSYMBOL_PrimaryExpr = 165,              /* PrimaryExpr  */
  YYSYMBOL_Operand = 166,                  /* Operand  */
  YYSYMBOL_BasicLit = 167,                 /* BasicLit  */
  YYSYMBOL_CompositeLit = 168,             /* CompositeLit  */
  YYSYMBOL_LiteralValue = 169,             /* LiteralValue  */
  YYSYMBOL_ElementList = 170,              /* ElementList  */
  YYSYMBOL_KeyedElement = 171,             /* KeyedElement  */
  YYSYMBOL_Key = 172,                      /* Key  */
  YYSYMBOL_Element = 173,                  /* Element  */
  YYSYMBOL_int_lit = 174,                  /* int_lit  */
  YYSYMBOL_imaginary_lit = 175,            /* imaginary_lit  */
  YYSYMBOL_float_lit = 176,                /* float_lit  */
  YYSYMBOL_FunctionLit = 177,              /* FunctionLit  */
  YYSYMBOL_Block = 178,                    /* Block  */
  YYSYMBOL_Statements = 179,               /* Statements  */
  YYSYMBOL_Selector = 180,                 /* Selector  */
  YYSYMBOL_Slice = 181,                    /* Slice  */
  YYSYMBOL_ExpressionList = 182,           /* ExpressionList  */
  YYSYMBOL_Type = 183,                     /* Type  */
  YYSYMBOL_TypeArgs = 184,                 /* TypeArgs  */
  YYSYMBOL_TypeList = 185,                 /* TypeList  */
  YYSYMBOL_TypeName = 186,                 /* TypeName  */
  YYSYMBOL_ArrayType = 187,                /* ArrayType  */
  YYSYMBOL_StructType = 188,               /* StructType  */
  YYSYMBOL_DeclList = 189,                 /* DeclList  */
  YYSYMBOL_FieldDecl = 190,                /* FieldDecl  */
  YYSYMBOL_EmbeddedField = 191,            /* EmbeddedField  */
  YYSYMBOL_FunctionType = 192,             /* FunctionType  */
  YYSYMBOL_Signature = 193,                /* Signature  */
  YYSYMBOL_Parameters = 194,               /* Parameters  */
  YYSYMBOL_ParameterList = 195,            /* ParameterList  */
  YYSYMBOL_ParameterDecl = 196,            /* ParameterDecl  */
  YYSYMBOL_IdentifierList = 197,           /* IdentifierList  */
  YYSYMBOL_InterfaceType = 198,            /* InterfaceType  */
  YYSYMBOL_InterfaceElemList = 199,        /* InterfaceElemList  */
  YYSYMBOL_InterfaceElem = 200,            /* InterfaceElem  */
  YYSYMBOL_TypeElem = 201,                 /* TypeElem  */
  YYSYMBOL_TypeTerm = 202,                 /* TypeTerm  */
  YYSYMBOL_SliceType = 203,                /* SliceType  */
  YYSYMBOL_MapType = 204,                  /* MapType  */
  YYSYMBOL_ChannelType = 205               /* ChannelType  */
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
#define YYLAST   2362

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  292
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  506

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
       2,     2,     2,   104,     2,     2,     2,    97,    98,     2,
      90,    91,    95,   101,    94,    99,   105,    96,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,     2,
     102,     2,   103,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    92,     2,    93,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,   100,    88,   106,     2,     2,     2,
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
      67,    68,    69,    72,    74,    75,    77,    78,    80,    81,
      85,    87,    88,    89,    91,    93,    94,    97,    98,   100,
     101,   103,   104,   106,   108,   109,   111,   112,   113,   114,
     115,   116,   118,   119,   120,   124,   125,   126,   127,   128,
     129,   134,   135,   136,   137,   144,   145,   147,   148,   148,
     158,   159,   160,   162,   163,   164,   165,   167,   168,   171,
     172,   173,   175,   176,   177,   177,   179,   183,   185,   186,
     187,   189,   190,   192,   194,   197,   198,   199,   201,   202,
     203,   204,   205,   208,   209,   210,   211,   212,   216,   218,
     219,   221,   222,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   239,   240,   244,
     245,   246,   247,   248,   250,   251,   252,   253,   254,   255,
     256,   258,   259,   260,   261,   263,   264,   265,   266,   267,
     268,   271,   272,   273,   274,   275,   276,   277,   278,   282,
     283,   284,   285,   286,   287,   288,   290,   291,   292,   296,
     297,   298,   301,   302,   303,   304,   305,   307,   309,   310,
     311,   312,   313,   314,   315,   317,   318,   319,   320,   321,
     322,   327,   328,   329,   332,   333,   335,   336,   338,   343,
     347,   348,   349,   350,   353,   354,   355,   358,   360,   362,
     363,   366,   369,   370,   371,   372,   373,   374,   390,   391,
     393,   394,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   407,   408,   410,   411,   413,   414,   418,   419,   422,
     423,   425,   426,   428,   429,   430,   431,   433,   434,   435,
     436,   443,   445,   446,   447,   448,   449,   451,   452,   453,
     456,   457,   459,   460,   461,   462,   465,   466,   469,   470,
     472,   473,   475,   476,   478,   479,   483,   484,   488,   491,
     496,   497,   498
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
  "POINT", "POINTER", "'{'", "'}'", "':'", "'('", "')'", "'['", "']'",
  "','", "'*'", "'/'", "'%'", "'&'", "'-'", "'|'", "'+'", "'<'", "'>'",
  "'!'", "'.'", "'~'", "$accept", "prog", "TopLevelDecl", "FunctionDecl",
  "MethodDecl", "Receiver", "Statement", "ForStmt", "ForClause",
  "InitStmt", "Condition", "PostStmt", "DeferStmt", "Declaration",
  "GoStmt", "ReturnStmt", "BreakStmt", "ContinueStmt", "GotoStmt", "Label",
  "SelectStmt", "CommClauseList", "CommClause", "CommCase", "RecvStmt",
  "IfStmt", "SwitchStmt", "ExprCaseClauseList", "ExprCaseClause",
  "ExprSwitchCase", "ConstDecl", "ConstSpecList", "ConstSpec", "ConstExpr",
  "TypeDecl", "TypeSpecList", "TypeSpec", "AliasDecl", "TypeDef",
  "TypeParameters", "TypeParamList", "TypeParamDecl", "TypeConstraint",
  "VarDecl", "VarSpecList", "VarSpec", "SimpleStmt", "EmptyStatement",
  "SendStmt", "Channel", "IncDecStmt", "Assignment", "Expression",
  "binary_op", "mul_op", "add_op", "rel_op", "UnaryExpr", "PrimaryExpr",
  "Operand", "BasicLit", "CompositeLit", "LiteralValue", "ElementList",
  "KeyedElement", "Key", "Element", "int_lit", "imaginary_lit",
  "float_lit", "FunctionLit", "Block", "Statements", "Selector", "Slice",
  "ExpressionList", "Type", "TypeArgs", "TypeList", "TypeName",
  "ArrayType", "StructType", "DeclList", "FieldDecl", "EmbeddedField",
  "FunctionType", "Signature", "Parameters", "ParameterList",
  "ParameterDecl", "IdentifierList", "InterfaceType", "InterfaceElemList",
  "InterfaceElem", "TypeElem", "TypeTerm", "SliceType", "MapType",
  "ChannelType", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-403)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-290)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,    59,   156,  -403,  -403,    40,    45,    46,    50,  -403,
    -403,  -403,  -403,  -403,  -403,  -403,    72,    22,    44,  -403,
     -10,     8,  -403,    39,    30,  -403,   374,   -13,    31,  -403,
    -403,  -403,    71,    36,    33,   512,   520,  -403,    80,    38,
     429,    36,    71,  -403,    81,    71,    36,    87,   129,   135,
     536,   136,  1790,   202,   520,  1131,   520,   160,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,   141,    71,  1790,  -403,   163,
     520,   520,  -403,   143,   229,    -3,   142,    10,    33,   828,
    -403,   274,  -403,  -403,  -403,   146,    23,   520,  -403,    33,
    -403,  -403,  -403,  -403,   232,   520,     4,    69,  -403,    53,
      36,   134,   148,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,  1790,  1790,  1790,   946,  1790,  1790,
    1790,  1790,  1790,  2259,  -403,    61,   158,  -403,  -403,  -403,
    -403,  -403,  -403,   149,   158,   158,   158,   158,   520,   157,
     520,  1980,  -403,  1790,  -403,  -403,   149,  1790,  -403,  -403,
    -403,  -403,  -403,   159,    71,  -403,   520,  -403,  -403,   150,
    -403,     1,  1872,  1151,  -403,  1029,   245,   169,  1790,  1790,
     245,   245,  1790,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,   171,  -403,
    -403,  1918,  -403,   728,   517,    76,    79,  -403,    97,  -403,
    -403,  -403,  -403,  -403,   165,    36,  -403,   173,    12,  -403,
    -403,    55,  -403,   253,   170,   175,     5,   233,   520,    33,
     258,   520,  -403,  -403,   120,   176,  -403,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
    1790,  -403,  -403,  -403,   867,  1234,    62,  -403,  -403,  1254,
    -403,  1790,  -403,  -403,  -403,  -403,  -403,  -403,  -403,   520,
     177,   149,   149,  -403,  -403,  -403,    10,   188,   919,   183,
     190,  1845,  1790,    33,   191,  -403,   919,  -403,   725,   106,
    -403,  -403,    24,   149,  2259,  -403,  -403,  2259,  1790,  -403,
    -403,  -403,  -403,  1790,  1790,  1790,  1790,  1790,  1790,  1790,
    1790,  1790,  1790,  1790,  1790,  1790,  1790,  -403,   185,   520,
    -403,  -403,  -403,   253,   172,   170,   520,  -403,  -403,  -403,
    -403,   234,  -403,  -403,   189,  -403,   520,  2259,    36,   178,
     186,  1342,  1049,  -403,  1049,   111,   121,   158,   158,   158,
    1362,  1949,  -403,   520,  -403,  2104,    -5,  -403,   192,  -403,
    2259,  -403,   520,  -403,  1790,   272,  1790,  -403,   197,   183,
     198,  1444,   183,  2135,  -403,  1790,  -403,  1483,  1566,  1872,
    -403,  -403,    57,  -403,   199,  2259,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
    -403,  -403,  -403,  -403,   195,   107,  -403,   520,   158,    33,
     284,   520,   200,  -403,  1586,  -403,  1668,  -403,  2011,  1688,
    -403,   205,   208,  -403,  1770,  1790,  -403,  2135,    -6,   149,
    -403,  -403,   828,   183,  2166,   214,  -403,   210,  2259,  1790,
    1790,  -403,  -403,  2042,   -40,   223,  -403,  -403,   828,   520,
    -403,   215,  -403,  -403,  -403,   218,  -403,  -403,  -403,   122,
    1790,  -403,  -403,  2073,  -403,  -403,  -403,  -403,  2259,  -403,
     295,  -403,  -403,   828,   235,   183,  -403,  1872,  2135,  2135,
    1790,  1790,   828,  -403,  -403,   520,  -403,  2197,  1790,  -403,
      -6,  -403,   243,  -403,  -403,  -403,  -403,  2259,  2259,   230,
    -403,  2228,  -403,  -403,  -403,  -403
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     0,     0,     0,     3,
       5,     6,     4,    41,    42,    43,     0,     0,     0,    12,
     276,     0,   105,     0,     0,    80,    86,   100,     0,    89,
      94,    95,     0,     0,     9,   266,     0,   268,     0,   271,
     274,     0,     0,   107,     0,   109,     0,   230,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   110,   234,   236,
     237,   238,   239,   240,    82,     0,    84,     0,    85,     0,
       0,     0,    91,     0,    93,     0,   102,     0,    10,   118,
       8,     0,   265,   275,   267,     0,     0,     0,   273,     0,
     277,   106,   108,   261,     0,     0,     0,     0,   290,     0,
       0,   183,     0,   213,   192,   193,   194,   212,   211,   210,
     215,   216,   191,   214,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   229,   137,   161,   169,   184,   185,   188,
     190,   189,   186,   112,     0,     0,     0,     0,     0,     0,
       0,     0,   235,     0,    81,    83,    88,     0,    96,    97,
      90,    92,    98,     0,     0,   286,     0,   103,   104,   285,
       7,   183,   118,   118,    20,    35,    48,     0,    46,     0,
      52,    50,     0,   220,    25,    26,    13,    15,    16,    17,
      18,    19,    24,    22,    23,    14,   117,   115,     0,   116,
     113,   114,    21,     0,     0,     0,   276,   263,     0,   269,
     270,   272,    11,   231,     0,   286,   279,     0,   281,   283,
     291,   276,   250,     0,   260,     0,   252,   256,     0,     0,
       0,     0,   165,   168,     0,     0,   166,   167,   163,   162,
     164,   155,   156,   160,   159,   140,   139,   147,   148,   152,
     150,   144,   145,   146,   149,   151,   153,   154,   157,   158,
       0,   143,   142,   141,     0,     0,     0,   179,   180,     0,
     200,     0,   196,   195,   198,   199,   292,   232,   288,     0,
       0,   111,    87,    99,   101,   287,     0,     0,   229,     0,
       0,   229,     0,     0,     0,    34,   229,    32,     0,     0,
      53,    47,     0,    45,    44,    51,    49,    40,     0,   121,
     122,   218,   219,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   262,     0,     0,
     282,   278,   280,     0,   245,   259,     0,   258,   249,   251,
     255,   254,   217,   182,     0,   187,     0,   138,     0,   183,
       0,     0,     0,   178,     0,     0,     0,   234,   236,   239,
       0,     0,   221,     0,   203,   209,     0,   205,     0,   207,
     228,   247,     0,   284,     0,    68,     0,    79,     0,    76,
       0,     0,     0,     0,    28,    37,    27,     0,     0,     0,
      61,    55,     0,    57,     0,   119,   126,   128,   136,   133,
     129,   127,   130,   131,   132,   135,   134,   125,   124,   123,
     264,   233,   246,   257,   244,     0,   253,     0,     0,   261,
       0,     0,     0,   172,     0,   176,     0,   225,     0,     0,
     170,     0,     0,   201,     0,     0,   248,     0,     0,    78,
      74,    75,   118,     0,     0,     0,    31,     0,    36,     0,
       0,    60,    59,   229,     0,     0,    54,    56,   118,     0,
     241,     0,   289,   197,   182,     0,   174,   173,   175,     0,
       0,   223,   224,     0,   171,   181,   202,   204,   209,   206,
      67,    69,    70,    77,     0,     0,    73,    39,     0,     0,
       0,     0,    58,   243,   242,     0,   177,     0,     0,   222,
       0,    72,     0,    33,    38,    29,    30,    62,    63,   233,
     227,     0,    65,    66,    71,   226
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -403,  -403,  -403,  -403,  -403,  -403,  -187,  -403,  -403,  -403,
    -403,  -403,  -403,   318,  -403,  -403,  -403,  -403,  -403,    48,
    -403,  -403,   -60,  -403,  -403,  -402,  -403,  -348,  -403,  -403,
    -403,   266,   326,  -403,  -403,   260,   328,  -403,  -403,   310,
     184,  -403,  -403,  -403,   299,   334,  -161,  -403,   -34,  -403,
    -403,  -403,   250,  -403,  -403,  -403,  -403,   -17,  -403,  -403,
    -403,  -403,   -94,  -403,   -78,  -403,   -77,  -403,  -403,  -403,
    -403,   -11,  -372,  -403,  -403,   338,   154,    25,  -102,  -204,
     -23,    -1,   133,  -403,  -403,  -403,   -26,   346,   100,  -403,
     161,  -403,   145,  -403,   -69,  -403,    88,  -403,  -403
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     9,    10,    11,    18,   173,   174,   283,   284,
     437,   493,   175,   176,   177,   178,   179,   180,   181,   291,
     182,   382,   383,   384,   441,   183,   184,   368,   369,   370,
      13,    65,    66,    68,    14,    73,    74,    30,    31,    33,
      75,    76,   157,    15,    44,    45,   185,   186,   187,   188,
     189,   190,   123,   250,   251,   252,   253,   124,   125,   126,
     127,   128,   262,   356,   357,   358,   359,   129,   130,   131,
     132,   192,   193,   257,   258,   194,   139,   327,   405,   214,
     134,   135,   215,   216,   217,    60,    34,    35,    38,    39,
     195,    61,   207,   208,   209,   159,   136,   137,    63
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,   277,   280,    58,   285,   162,   302,    78,   158,   325,
     205,   211,    58,    58,    20,    89,   155,    58,   205,     1,
      93,   431,    59,    80,   435,    59,   471,    58,    20,    20,
     480,    58,   260,    58,    59,    59,    20,    27,   379,    59,
     380,   263,   264,   265,    46,    47,    16,    58,    58,    59,
      41,    20,    20,    59,   261,    59,    27,    70,    58,   211,
     473,  -245,    48,     3,    58,    49,    50,   160,   352,    59,
      59,   379,    58,   380,   219,   210,   482,    20,   202,    32,
      59,    79,  -276,   423,    42,   474,    59,  -245,   502,   424,
     152,   153,   206,    51,    59,    42,   138,   222,   223,    43,
     213,   226,   227,   228,   229,   230,   220,    36,    36,    52,
     156,    62,   381,    37,    62,    58,   156,    58,   156,   402,
      79,    64,    72,    62,    62,    53,    17,   492,    62,    54,
      17,    55,    86,    58,    56,    21,    24,    59,    62,    59,
      28,   212,    62,  -245,    62,   446,   315,  -245,   213,    42,
    -245,   254,   353,   255,   287,    59,     4,   316,    62,    62,
     323,     5,    17,     6,    32,     7,   256,    23,    26,    62,
    -230,    84,    91,    42,    85,    62,   315,    57,    40,   320,
      69,   198,    23,    62,    94,    26,   200,   378,   317,    82,
      83,   318,    94,    77,    88,    58,   412,   366,    58,   367,
     450,   451,   413,    90,    98,   414,    23,   363,   332,     8,
     142,   335,   415,   486,   261,   416,   261,    59,   295,   296,
      59,    95,    96,    99,   148,   149,    62,    26,    62,   138,
     143,   347,   144,   147,   150,    27,   154,   199,   203,   220,
     221,   201,    40,   261,    62,   259,    58,    40,   267,   204,
     276,   290,   273,   348,   263,   264,   292,   298,   319,   324,
     218,   321,   326,   328,   333,   330,   406,   365,    59,   336,
     362,   364,   374,   371,   375,   376,   400,   323,   411,    46,
     196,   425,   407,   410,   428,   430,   302,   432,   448,   449,
     454,   456,   266,   477,   268,   302,    58,    48,   464,   465,
      49,    50,   476,    58,   481,   141,    62,   490,   484,    62,
     275,   485,   409,    58,   453,    77,   494,  -289,    59,   347,
      12,   347,   447,   491,   223,    59,   289,   226,    51,   191,
      58,   504,   145,    25,   151,    59,    29,    71,   274,    58,
      22,   348,   349,   348,    92,   442,   467,   483,   469,   329,
     403,    19,    59,   322,     0,     0,     0,    62,     0,    36,
      53,    59,   436,     0,    54,   197,    55,   141,     0,    56,
       0,     0,   331,     0,     0,   334,     0,   218,     0,    46,
      47,     0,     0,     0,    58,     0,     0,     0,    58,     0,
     133,     0,     0,     0,     0,     0,     0,    48,   332,     0,
      49,    50,     0,     0,     0,   146,    59,    62,   346,     0,
      59,     0,   278,   281,    62,   286,   470,   472,     0,   294,
       0,     0,   297,   361,    62,     0,    58,     0,    51,     0,
     349,     0,   349,     0,    46,    47,     0,     0,     0,     0,
       0,    62,     0,   191,    67,     0,     0,     0,    59,     0,
      62,     0,    48,     0,   224,    49,    50,     0,     0,     0,
      53,     0,    58,     0,    54,     0,    55,   495,   496,    56,
       0,     0,     0,   401,     0,     0,     0,     0,     0,   503,
     404,   271,     0,    51,    59,   272,     0,     0,     0,     0,
     408,     0,     0,     0,     0,    62,     0,     0,   142,    62,
     337,     0,     0,   288,     0,   351,   293,   422,     0,   355,
       0,   360,     0,     0,    87,    53,   426,    46,    47,    54,
       0,    55,     0,     0,    56,    46,    47,     0,     0,     0,
       0,     0,   373,     0,     0,    48,     0,    62,    49,    50,
     445,    46,    47,    48,     0,     0,    49,    50,   385,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,   452,    49,    50,     0,   455,    51,     0,     0,     0,
       0,     0,     0,    62,    51,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,     0,     0,
      51,     0,   345,     0,     0,     0,     0,     0,    53,     0,
     418,     0,    81,   404,    55,     0,    53,    56,     0,     0,
      54,   261,    55,     0,   427,    56,     0,     0,     0,     0,
       0,   434,    97,     0,     0,   438,    54,     0,    55,   443,
       0,    56,     0,     0,     0,     0,     0,     0,     0,   499,
       0,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   360,     0,     0,     0,     0,   463,
       0,     0,     0,     0,   355,   468,     0,     0,     0,     0,
     224,     0,   191,     0,     0,     0,     0,     0,     0,   478,
     479,     0,     0,     0,     0,     0,     0,     0,   191,     0,
       0,     0,     0,     0,   429,     0,     0,     0,     0,     0,
     487,     0,     0,     0,     0,   397,   399,   444,     0,     0,
       0,     0,     0,   191,     0,     0,     0,   191,     0,     0,
     497,   498,   191,   100,   161,     6,     0,     7,   501,   162,
       0,   163,     0,   164,     0,   165,   166,     0,     0,   167,
     168,   102,   169,   170,   459,     0,   171,   172,   103,   104,
     105,   106,     0,   107,   108,   109,     0,   110,   111,   112,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,    51,     0,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   377,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,     0,     0,     0,   115,    79,   301,     0,   116,   261,
     117,     0,     0,   118,     0,     0,   119,   120,     0,   121,
       0,     0,   122,   100,   161,     6,     0,     7,     0,   162,
       0,   163,     0,   164,     0,   165,   166,     0,     0,   167,
     168,   102,   169,   170,     0,     0,   171,   172,   103,   104,
     105,   106,     0,   107,   108,   109,     0,   110,   111,   112,
     113,     0,   338,   339,     0,     0,     0,     0,     0,     0,
       0,     8,    51,     0,     0,     0,     0,     0,     0,     0,
     340,     0,     0,    49,    50,     0,     0,   103,   104,   105,
     106,     0,   107,   108,   109,     0,   110,   111,   112,   113,
     114,     0,     0,     0,   115,    79,     0,     0,   116,     0,
     117,    51,     0,   118,     0,     0,   119,   120,     0,   121,
       0,     0,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
       0,   100,   101,   341,     0,     0,     0,   342,   343,   117,
       0,     0,   344,     0,     0,   119,   120,     0,   121,   102,
       0,   122,     0,     0,     0,     0,   103,   104,   105,   106,
       0,   107,   108,   109,     0,   110,   111,   112,   113,     0,
     299,   300,   231,   232,   233,   234,   235,   236,   237,   238,
      51,   239,  -114,   240,     0,  -120,    79,     0,     0,     0,
       0,     0,     0,     0,   241,   242,   243,   244,   245,   246,
     247,   248,   249,     0,     0,     0,     0,     0,   114,     0,
       0,   225,   115,     0,   100,   161,   116,     0,   117,   140,
       0,   118,     0,     0,   119,   120,     0,   121,   282,     0,
     122,     0,   102,     0,   338,   339,     0,     0,     0,   103,
     104,   105,   106,     0,   107,   108,   109,     0,   110,   111,
     112,   113,   340,     0,     0,    49,    50,     0,     0,   103,
     104,   105,   106,    51,   107,   108,   109,     0,   110,   111,
     112,   113,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,   114,     0,     0,     0,   115,    79,     0,     0,   116,
       0,   117,     0,     0,   118,     0,     0,   119,   120,     0,
     121,   114,     0,   122,     0,   341,   100,   101,     0,   342,
       0,   117,     0,     0,   344,     0,     0,   119,   120,     0,
     121,     0,     0,   122,   102,     0,   100,   161,     0,     0,
       0,   103,   104,   105,   106,     0,   107,   108,   109,     0,
     110,   111,   112,   113,   102,     0,     0,     0,     0,     0,
       0,   103,   104,   105,   106,    51,   107,   108,   109,     0,
     110,   111,   112,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,     0,   114,     0,     0,     0,   115,     0,     0,
       0,   116,     0,   117,   140,     0,   118,     0,     0,   119,
     120,     0,   121,   114,     0,   122,     0,   115,   279,   100,
     101,   116,     0,   117,     0,     0,   118,     0,     0,   119,
     120,     0,   121,     0,     0,   122,     0,   102,     0,   100,
     101,     0,     0,     0,   103,   104,   105,   106,     0,   107,
     108,   109,     0,   110,   111,   112,   113,   102,     0,     0,
       0,     0,     0,     0,   103,   104,   105,   106,    51,   107,
     108,   109,     0,   110,   111,   112,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,     0,     0,   114,     0,     0,     0,
     115,     0,     0,   350,   116,     0,   117,     0,     0,   118,
       0,     0,   119,   120,     0,   121,   114,     0,   122,     0,
     115,     0,   354,     0,   116,     0,   117,   100,   101,   118,
       0,     0,   119,   120,     0,   121,     0,     0,   122,     0,
       0,     0,     0,     0,     0,   102,     0,   100,   101,   138,
       0,     0,   103,   104,   105,   106,     0,   107,   108,   109,
       0,   110,   111,   112,   113,   102,     0,     0,     0,     0,
       0,     0,   103,   104,   105,   106,    51,   107,   108,   109,
       0,   110,   111,   112,   113,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,     0,   115,     0,
       0,     0,   116,     0,   117,     0,     0,   118,     0,     0,
     119,   120,     0,   121,   114,     0,   122,     0,   115,   100,
     101,     0,   116,     0,   117,   417,     0,   118,     0,     0,
     119,   120,     0,   121,     0,     0,   122,   102,     0,     0,
       0,     0,     0,     0,   103,   104,   105,   106,     0,   107,
     108,   109,     0,   110,   111,   112,   113,     0,   100,   101,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,   439,     0,     0,     0,   102,     0,     0,     0,
       0,     0,     0,   103,   104,   105,   106,     0,   107,   108,
     109,     0,   110,   111,   112,   113,   114,     0,     0,     0,
     115,   433,     0,     0,   116,     0,   117,    51,     0,   118,
       0,     0,   119,   120,     0,   121,     0,     0,   122,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,     0,     0,     0,   115,
       0,   100,   101,   116,     0,   117,     0,     0,   118,     0,
       0,   119,   120,     0,   121,   440,     0,   122,     0,   102,
       0,   100,   101,     0,     0,     0,   103,   104,   105,   106,
       0,   107,   108,   109,     0,   110,   111,   112,   113,   102,
       0,     0,     0,     0,     0,     0,   103,   104,   105,   106,
      51,   107,   108,   109,     0,   110,   111,   112,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,     0,     0,   114,     0,
       0,     0,   115,     0,     0,     0,   116,     0,   117,     0,
       0,   118,     0,     0,   119,   120,     0,   121,   114,     0,
     122,     0,   115,   100,   101,     0,   116,   457,   117,     0,
       0,   118,     0,     0,   119,   120,     0,   121,     0,     0,
     122,   102,     0,   100,   101,     0,     0,     0,   103,   104,
     105,   106,     0,   107,   108,   109,     0,   110,   111,   112,
     113,   102,     0,     0,     0,     0,     0,     0,   103,   104,
     105,   106,    51,   107,   108,   109,     0,   110,   111,   112,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,     0,     0,     0,     0,
     114,     0,     0,     0,   115,     0,     0,     0,   116,   458,
     117,     0,     0,   118,     0,     0,   119,   120,     0,   121,
     114,     0,   122,     0,   115,   100,   101,     0,   116,     0,
     117,   462,     0,   118,     0,     0,   119,   120,     0,   121,
       0,     0,   122,   102,     0,   100,   101,     0,     0,     0,
     103,   104,   105,   106,     0,   107,   108,   109,     0,   110,
     111,   112,   113,   102,     0,     0,     0,     0,     0,     0,
     103,   104,   105,   106,    51,   107,   108,   109,     0,   110,
     111,   112,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,     0,   114,     0,     0,     0,   115,     0,   466,     0,
     116,     0,   117,     0,     0,   118,     0,     0,   119,   120,
       0,   121,   114,     0,   122,     0,   115,   100,   161,     0,
     116,     0,   117,     0,     0,   118,     0,     0,   119,   120,
       0,   121,     0,     0,   122,   102,     0,     0,     0,     0,
       0,     0,   103,   104,   105,   106,     0,   107,   108,   109,
       0,   110,   111,   112,   113,     0,   299,   300,   231,   232,
     233,   234,   235,   236,   237,   238,    51,   239,  -114,   240,
       0,  -120,   372,     0,     0,     0,     0,     0,     0,     0,
     241,   242,   243,   244,   245,   246,   247,   248,   249,     0,
       0,     0,     0,     0,   114,     0,     0,     0,   115,     0,
       0,     0,   116,     0,   117,     0,     0,   118,     0,     0,
     119,   120,     0,   121,     0,     0,   122,  -229,  -229,  -229,
    -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,   299,
     300,   231,   232,   233,   234,   235,   236,   237,   238,     0,
     239,     0,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -229,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   231,   232,   233,   234,   235,   236,   237,   238,
       0,   239,     0,   240,     0,     0,     0,     0,   419,     0,
       0,     0,   420,   421,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   231,   232,   233,   234,   235,   236,   237,
     238,     0,   239,     0,   240,     0,     0,     0,     0,     0,
       0,     0,     0,   269,   270,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   231,   232,   233,   234,   235,   236,
     237,   238,     0,   239,     0,   240,     0,     0,     0,     0,
     460,     0,     0,     0,   461,     0,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   231,   232,   233,   234,   235,
     236,   237,   238,     0,   239,     0,   240,     0,  -120,     0,
       0,   -64,     0,     0,     0,     0,     0,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   231,   232,   233,   234,
     235,   236,   237,   238,     0,   239,     0,   240,     0,     0,
       0,     0,   488,     0,     0,     0,   489,     0,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   231,   232,   233,
     234,   235,   236,   237,   238,     0,   239,     0,   240,     0,
       0,     0,     0,  -208,     0,     0,     0,     0,     0,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   231,   232,
     233,   234,   235,   236,   237,   238,     0,   239,     0,   240,
       0,     0,    79,     0,     0,     0,     0,     0,     0,     0,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   231,
     232,   233,   234,   235,   236,   237,   238,     0,   239,     0,
     240,     0,     0,   475,     0,     0,     0,     0,     0,     0,
       0,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     231,   232,   233,   234,   235,   236,   237,   238,     0,   239,
       0,   240,     0,     0,     0,     0,     0,     0,     0,     0,
     500,     0,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   231,   232,   233,   234,   235,   236,   237,   238,     0,
     239,     0,   240,     0,     0,     0,     0,     0,     0,     0,
       0,   505,     0,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   231,   232,   233,   234,   235,   236,   237,   238,
       0,   239,     0,   240,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   241,   242,   243,   244,   245,   246,
     247,   248,   249
};

static const yytype_int16 yycheck[] =
{
      23,   162,   163,    26,   165,    11,   193,    33,    77,   213,
       6,     6,    35,    36,     6,    41,     6,    40,     6,     3,
      46,   369,    23,    34,   372,    26,   428,    50,     6,     6,
      70,    54,   126,    56,    35,    36,     6,     6,    14,    40,
      16,   135,   136,   137,     5,     6,     6,    70,    71,    50,
       6,     6,     6,    54,    94,    56,     6,    70,    81,     6,
     432,     6,    23,     4,    87,    26,    27,    78,     6,    70,
      71,    14,    95,    16,   100,     6,   448,     6,    89,    92,
      81,    87,    81,    88,    94,   433,    87,    32,   490,    94,
      93,    94,    88,    54,    95,    94,    27,   114,   115,    91,
      95,   118,   119,   120,   121,   122,   105,    85,    85,    70,
     106,    23,    88,    91,    26,   138,   106,   140,   106,   323,
      87,    91,    91,    35,    36,    86,    90,   475,    40,    90,
      90,    92,    94,   156,    95,    90,    90,   138,    50,   140,
      90,    88,    54,    88,    56,    88,    70,    92,    95,    94,
      95,    90,    90,    92,   165,   156,     0,    81,    70,    71,
     105,     5,    90,     7,    92,     9,   105,     6,     7,    81,
      91,    91,    91,    94,    94,    87,    70,    23,    17,   205,
      26,    81,    21,    95,   105,    24,    86,    81,    91,    35,
      36,    94,   105,    32,    40,   218,    85,    14,   221,    16,
      93,    94,    91,    42,    50,    94,    45,   276,   219,    53,
      56,    91,    91,    91,    94,    94,    94,   218,   170,   171,
     221,    92,    87,    87,    70,    71,   138,    66,   140,    27,
      70,   254,    91,    70,    91,     6,    94,    91,     6,   105,
      92,    87,    81,    94,   156,    87,   269,    86,    91,    95,
     100,     6,    93,   254,   348,   349,    87,    86,    93,     6,
      99,    88,    92,    88,     6,    32,    32,   278,   269,    93,
      93,    83,   283,    83,    83,   286,    91,   105,    92,     5,
       6,    89,    93,   105,    12,    88,   473,    89,    89,    94,
       6,    91,   138,    83,   140,   482,   319,    23,    93,    91,
      26,    27,    88,   326,    81,    55,   218,    12,    93,   221,
     156,    93,   338,   336,   408,   154,   477,    87,   319,   342,
       2,   344,   382,    88,   341,   326,   165,   344,    54,    79,
     353,    88,    66,     7,    74,   336,     8,    27,   154,   362,
       6,   342,   254,   344,    45,   379,   424,   449,   425,   216,
     325,     5,   353,   208,    -1,    -1,    -1,   269,    -1,    85,
      86,   362,   373,    -1,    90,    91,    92,   117,    -1,    95,
      -1,    -1,   218,    -1,    -1,   221,    -1,   216,    -1,     5,
       6,    -1,    -1,    -1,   407,    -1,    -1,    -1,   411,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    23,   409,    -1,
      26,    27,    -1,    -1,    -1,    67,   407,   319,   254,    -1,
     411,    -1,   162,   163,   326,   165,   427,   428,    -1,   169,
      -1,    -1,   172,   269,   336,    -1,   449,    -1,    54,    -1,
     342,    -1,   344,    -1,     5,     6,    -1,    -1,    -1,    -1,
      -1,   353,    -1,   193,    70,    -1,    -1,    -1,   449,    -1,
     362,    -1,    23,    -1,   116,    26,    27,    -1,    -1,    -1,
      86,    -1,   485,    -1,    90,    -1,    92,   478,   479,    95,
      -1,    -1,    -1,   319,    -1,    -1,    -1,    -1,    -1,   490,
     326,   143,    -1,    54,   485,   147,    -1,    -1,    -1,    -1,
     336,    -1,    -1,    -1,    -1,   407,    -1,    -1,   344,   411,
     250,    -1,    -1,   165,    -1,   255,   168,   353,    -1,   259,
      -1,   261,    -1,    -1,    85,    86,   362,     5,     6,    90,
      -1,    92,    -1,    -1,    95,     5,     6,    -1,    -1,    -1,
      -1,    -1,   282,    -1,    -1,    23,    -1,   449,    26,    27,
     379,     5,     6,    23,    -1,    -1,    26,    27,   298,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,   407,    26,    27,    -1,   411,    54,    -1,    -1,    -1,
      -1,    -1,    -1,   485,    54,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    -1,    -1,
      54,    -1,   254,    -1,    -1,    -1,    -1,    -1,    86,    -1,
     350,    -1,    90,   449,    92,    -1,    86,    95,    -1,    -1,
      90,    94,    92,    -1,   364,    95,    -1,    -1,    -1,    -1,
      -1,   371,    86,    -1,    -1,   375,    90,    -1,    92,   379,
      -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   485,
      -1,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   414,    -1,    -1,    -1,    -1,   419,
      -1,    -1,    -1,    -1,   424,   425,    -1,    -1,    -1,    -1,
     342,    -1,   432,    -1,    -1,    -1,    -1,    -1,    -1,   439,
     440,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,    -1,
      -1,    -1,    -1,    -1,   366,    -1,    -1,    -1,    -1,    -1,
     460,    -1,    -1,    -1,    -1,   377,   378,   379,    -1,    -1,
      -1,    -1,    -1,   473,    -1,    -1,    -1,   477,    -1,    -1,
     480,   481,   482,     5,     6,     7,    -1,     9,   488,    11,
      -1,    13,    -1,    15,    -1,    17,    18,    -1,    -1,    21,
      22,    23,    24,    25,   416,    -1,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    39,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    87,    88,    -1,    90,    94,
      92,    -1,    -1,    95,    -1,    -1,    98,    99,    -1,   101,
      -1,    -1,   104,     5,     6,     7,    -1,     9,    -1,    11,
      -1,    13,    -1,    15,    -1,    17,    18,    -1,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    39,    40,    41,
      42,    -1,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
      82,    -1,    -1,    -1,    86,    87,    -1,    -1,    90,    -1,
      92,    54,    -1,    95,    -1,    -1,    98,    99,    -1,   101,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,     5,     6,    86,    -1,    -1,    -1,    90,    91,    92,
      -1,    -1,    95,    -1,    -1,    98,    99,    -1,   101,    23,
      -1,   104,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    39,    40,    41,    42,    -1,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      54,    82,    83,    84,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    85,    86,    -1,     5,     6,    90,    -1,    92,    93,
      -1,    95,    -1,    -1,    98,    99,    -1,   101,    19,    -1,
     104,    -1,    23,    -1,     5,     6,    -1,    -1,    -1,    30,
      31,    32,    33,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,    23,    -1,    -1,    26,    27,    -1,    -1,    30,
      31,    32,    33,    54,    35,    36,    37,    -1,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    87,    -1,    -1,    90,
      -1,    92,    -1,    -1,    95,    -1,    -1,    98,    99,    -1,
     101,    82,    -1,   104,    -1,    86,     5,     6,    -1,    90,
      -1,    92,    -1,    -1,    95,    -1,    -1,    98,    99,    -1,
     101,    -1,    -1,   104,    23,    -1,     5,     6,    -1,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    -1,
      39,    40,    41,    42,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    54,    35,    36,    37,    -1,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    90,    -1,    92,    93,    -1,    95,    -1,    -1,    98,
      99,    -1,   101,    82,    -1,   104,    -1,    86,    87,     5,
       6,    90,    -1,    92,    -1,    -1,    95,    -1,    -1,    98,
      99,    -1,   101,    -1,    -1,   104,    -1,    23,    -1,     5,
       6,    -1,    -1,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    39,    40,    41,    42,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    54,    35,
      36,    37,    -1,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    -1,    92,    -1,    -1,    95,
      -1,    -1,    98,    99,    -1,   101,    82,    -1,   104,    -1,
      86,    -1,    88,    -1,    90,    -1,    92,     5,     6,    95,
      -1,    -1,    98,    99,    -1,   101,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,     5,     6,    27,
      -1,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    54,    35,    36,    37,
      -1,    39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    90,    -1,    92,    -1,    -1,    95,    -1,    -1,
      98,    99,    -1,   101,    82,    -1,   104,    -1,    86,     5,
       6,    -1,    90,    -1,    92,    93,    -1,    95,    -1,    -1,
      98,    99,    -1,   101,    -1,    -1,   104,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    39,    40,    41,    42,    -1,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,    82,    -1,    -1,    -1,
      86,    87,    -1,    -1,    90,    -1,    92,    54,    -1,    95,
      -1,    -1,    98,    99,    -1,   101,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      -1,     5,     6,    90,    -1,    92,    -1,    -1,    95,    -1,
      -1,    98,    99,    -1,   101,    19,    -1,   104,    -1,    23,
      -1,     5,     6,    -1,    -1,    -1,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    39,    40,    41,    42,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      54,    35,    36,    37,    -1,    39,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    -1,    92,    -1,
      -1,    95,    -1,    -1,    98,    99,    -1,   101,    82,    -1,
     104,    -1,    86,     5,     6,    -1,    90,    91,    92,    -1,
      -1,    95,    -1,    -1,    98,    99,    -1,   101,    -1,    -1,
     104,    23,    -1,     5,     6,    -1,    -1,    -1,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    39,    40,    41,
      42,    23,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    54,    35,    36,    37,    -1,    39,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,
      92,    -1,    -1,    95,    -1,    -1,    98,    99,    -1,   101,
      82,    -1,   104,    -1,    86,     5,     6,    -1,    90,    -1,
      92,    93,    -1,    95,    -1,    -1,    98,    99,    -1,   101,
      -1,    -1,   104,    23,    -1,     5,     6,    -1,    -1,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    39,
      40,    41,    42,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    54,    35,    36,    37,    -1,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    88,    -1,
      90,    -1,    92,    -1,    -1,    95,    -1,    -1,    98,    99,
      -1,   101,    82,    -1,   104,    -1,    86,     5,     6,    -1,
      90,    -1,    92,    -1,    -1,    95,    -1,    -1,    98,    99,
      -1,   101,    -1,    -1,   104,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,    -1,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    54,    82,    83,    84,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    90,    -1,    92,    -1,    -1,    95,    -1,    -1,
      98,    99,    -1,   101,    -1,    -1,   104,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    -1,    84,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    82,    -1,    84,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    93,    -1,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    -1,    84,    -1,    86,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    82,    -1,    84,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    93,    -1,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    -1,    84,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    -1,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,   101,   102,   103,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    82,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    95,    96,    97,    98,    99,   100,   101,   102,
     103,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    95,    96,    97,    98,    99,   100,   101,
     102,   103,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
     101,   102,   103
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,   108,     4,     0,     5,     7,     9,    53,   109,
     110,   111,   120,   137,   141,   150,     6,    90,   112,   194,
       6,    90,   152,   197,    90,   139,   197,     6,    90,   143,
     144,   145,    92,   146,   193,   194,    85,    91,   195,   196,
     197,     6,    94,    91,   151,   152,     5,     6,    23,    26,
      27,    54,    70,    86,    90,    92,    95,   183,   187,   188,
     192,   198,   203,   205,    91,   138,   139,    70,   140,   183,
      70,   146,    91,   142,   143,   147,   148,   197,   193,    87,
     178,    90,   183,   183,    91,    94,    94,    85,   183,   193,
     197,    91,   151,   193,   105,    92,    87,    86,   183,    87,
       5,     6,    23,    30,    31,    32,    33,    35,    36,    37,
      39,    40,    41,    42,    82,    86,    90,    92,    95,    98,
      99,   101,   104,   159,   164,   165,   166,   167,   168,   174,
     175,   176,   177,   182,   187,   188,   203,   204,    27,   183,
      93,   159,   183,    70,    91,   138,   182,    70,   183,   183,
      91,   142,    93,    94,    94,     6,   106,   149,   201,   202,
     178,     6,    11,    13,    15,    17,    18,    21,    22,    24,
      25,    28,    29,   113,   114,   119,   120,   121,   122,   123,
     124,   125,   127,   132,   133,   153,   154,   155,   156,   157,
     158,   159,   178,   179,   182,   197,     6,    91,   195,    91,
     195,   183,   178,     6,   183,     6,    88,   199,   200,   201,
       6,     6,    88,    95,   186,   189,   190,   191,   197,   193,
     105,    92,   164,   164,   182,    85,   164,   164,   164,   164,
     164,    73,    74,    75,    76,    77,    78,    79,    80,    82,
      84,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     160,   161,   162,   163,    90,    92,   105,   180,   181,    87,
     169,    94,   169,   169,   169,   169,   183,    91,   183,    93,
      94,   182,   182,    93,   147,   183,   100,   153,   159,    87,
     153,   159,    19,   115,   116,   153,   159,   178,   182,   197,
       6,   126,    87,   182,   159,   126,   126,   159,    86,    71,
      72,    88,   113,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    70,    81,    91,    94,    93,
     193,    88,   199,   105,     6,   186,    92,   184,    88,   189,
      32,   183,   178,     6,   183,    91,    93,   159,     5,     6,
      23,    86,    90,    91,    95,   182,   183,   187,   188,   203,
      89,   159,     6,    90,    88,   159,   170,   171,   172,   173,
     159,   183,    93,   201,    83,   178,    14,    16,   134,   135,
     136,    83,    87,   159,   178,    83,   178,    70,    81,    14,
      16,    88,   128,   129,   130,   159,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
      91,   183,   186,   184,   183,   185,    32,    93,   183,   193,
     105,    92,    85,    91,    94,    91,    94,    93,   159,    89,
      93,    94,   183,    88,    94,    89,   183,   159,    12,   182,
      88,   134,    89,    87,   159,   134,   178,   117,   159,    19,
      19,   131,   155,   159,   182,   197,    88,   129,    89,    94,
      93,    94,   183,   169,     6,   183,    91,    91,    91,   182,
      89,    93,    93,   159,    93,    91,    88,   171,   159,   173,
     178,   132,   178,   179,   134,    87,    88,    83,   159,   159,
      70,    81,   179,   185,    93,    93,    91,   159,    89,    93,
      12,    88,   134,   118,   153,   178,   178,   159,   159,   183,
      93,   159,   132,   178,    88,    93
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   108,   109,   109,   109,   110,   110,   110,
     110,   111,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   114,   114,   114,
     114,   114,   114,   115,   116,   116,   117,   117,   118,   118,
     119,   120,   120,   120,   121,   122,   122,   123,   123,   124,
     124,   125,   125,   126,   127,   127,   128,   128,   129,   130,
     130,   130,   131,   131,   131,   132,   132,   132,   132,   132,
     132,   133,   133,   133,   133,   134,   134,   135,   136,   136,
     137,   137,   137,   138,   138,   139,   139,   140,   140,   141,
     141,   141,   142,   142,   143,   143,   144,   145,   146,   146,
     146,   147,   147,   148,   149,   150,   150,   150,   151,   151,
     152,   152,   152,   153,   153,   153,   153,   153,   154,   155,
     156,   157,   157,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   159,   159,   160,
     160,   160,   160,   160,   161,   161,   161,   161,   161,   161,
     161,   162,   162,   162,   162,   163,   163,   163,   163,   163,
     163,   164,   164,   164,   164,   164,   164,   164,   164,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   166,   166,   166,   166,   166,   166,   167,   167,
     167,   167,   167,   167,   167,   168,   168,   168,   168,   168,
     168,   169,   169,   169,   170,   170,   171,   171,   172,   173,
     174,   174,   174,   174,   175,   176,   176,   177,   178,   179,
     179,   180,   181,   181,   181,   181,   181,   181,   182,   182,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   184,   184,   185,   185,   186,   186,   187,   187,   188,
     188,   189,   189,   190,   190,   190,   190,   191,   191,   191,
     191,   192,   193,   193,   193,   193,   193,   194,   194,   194,
     195,   195,   196,   196,   196,   196,   197,   197,   198,   198,
     199,   199,   200,   200,   201,   201,   202,   202,   203,   204,
     205,   205,   205
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     1,     5,     4,     3,
       4,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     6,
       6,     4,     2,     5,     1,     0,     1,     0,     1,     0,
       2,     1,     1,     1,     2,     2,     1,     2,     1,     2,
       1,     2,     1,     1,     4,     3,     2,     1,     3,     2,
       2,     1,     3,     3,     1,     7,     7,     5,     3,     5,
       5,     7,     6,     5,     4,     2,     1,     3,     2,     1,
       2,     4,     3,     2,     1,     2,     1,     3,     2,     2,
       4,     3,     2,     1,     1,     1,     3,     3,     3,     4,
       0,     3,     1,     2,     1,     2,     4,     3,     2,     1,
       2,     4,     3,     1,     1,     1,     1,     1,     0,     3,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     1,
       4,     5,     4,     5,     5,     5,     4,     6,     3,     2,
       2,     5,     3,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     5,     2,     2,
       2,     3,     4,     2,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       1,     2,     5,     4,     4,     3,     7,     6,     3,     1,
       1,     3,     3,     5,     1,     2,     1,     1,     1,     1,
       1,     3,     4,     3,     1,     1,     3,     4,     5,     4,
       3,     2,     1,     3,     2,     2,     1,     3,     2,     2,
       1,     2,     4,     3,     5,     2,     1,     3,     2,     4,
       3,     1,     3,     2,     1,     2,     1,     3,     4,     3,
       2,     1,     2,     1,     3,     1,     1,     2,     3,     5,
       2,     3,     3
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
#line 2247 "y.tab.c"
    break;


#line 2251 "y.tab.c"

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

#line 501 "lab2.yacc"


int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
	yyparse();
        fclose(yyin);
	if(error_ == 0)
		printf("OK\n");
        
}
