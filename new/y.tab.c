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
  YYSYMBOL_100_ = 100,                     /* '|'  */
  YYSYMBOL_101_ = 101,                     /* '+'  */
  YYSYMBOL_102_ = 102,                     /* '-'  */
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
  YYSYMBOL_RangeClause = 116,              /* RangeClause  */
  YYSYMBOL_DeferStmt = 117,                /* DeferStmt  */
  YYSYMBOL_Declaration = 118,              /* Declaration  */
  YYSYMBOL_GoStmt = 119,                   /* GoStmt  */
  YYSYMBOL_ReturnStmt = 120,               /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 121,                /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 122,             /* ContinueStmt  */
  YYSYMBOL_GotoStmt = 123,                 /* GotoStmt  */
  YYSYMBOL_Label = 124,                    /* Label  */
  YYSYMBOL_SelectStmt = 125,               /* SelectStmt  */
  YYSYMBOL_CommClauseList = 126,           /* CommClauseList  */
  YYSYMBOL_CommClause = 127,               /* CommClause  */
  YYSYMBOL_CommCase = 128,                 /* CommCase  */
  YYSYMBOL_RecvStmt = 129,                 /* RecvStmt  */
  YYSYMBOL_RecvExpr = 130,                 /* RecvExpr  */
  YYSYMBOL_IfStmt = 131,                   /* IfStmt  */
  YYSYMBOL_SwitchStmt = 132,               /* SwitchStmt  */
  YYSYMBOL_ExprSwitchStmt = 133,           /* ExprSwitchStmt  */
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
  YYSYMBOL_Conversion = 166,               /* Conversion  */
  YYSYMBOL_MethodExpr = 167,               /* MethodExpr  */
  YYSYMBOL_MethodName = 168,               /* MethodName  */
  YYSYMBOL_Operand = 169,                  /* Operand  */
  YYSYMBOL_Literal = 170,                  /* Literal  */
  YYSYMBOL_BasicLit = 171,                 /* BasicLit  */
  YYSYMBOL_CompositeLit = 172,             /* CompositeLit  */
  YYSYMBOL_LiteralType = 173,              /* LiteralType  */
  YYSYMBOL_LiteralValue = 174,             /* LiteralValue  */
  YYSYMBOL_ElementList = 175,              /* ElementList  */
  YYSYMBOL_KeyedElement = 176,             /* KeyedElement  */
  YYSYMBOL_Key = 177,                      /* Key  */
  YYSYMBOL_Element = 178,                  /* Element  */
  YYSYMBOL_OperandName = 179,              /* OperandName  */
  YYSYMBOL_int_lit = 180,                  /* int_lit  */
  YYSYMBOL_imaginary_lit = 181,            /* imaginary_lit  */
  YYSYMBOL_float_lit = 182,                /* float_lit  */
  YYSYMBOL_FunctionLit = 183,              /* FunctionLit  */
  YYSYMBOL_Block = 184,                    /* Block  */
  YYSYMBOL_Statements = 185,               /* Statements  */
  YYSYMBOL_Selector = 186,                 /* Selector  */
  YYSYMBOL_Index = 187,                    /* Index  */
  YYSYMBOL_Slice = 188,                    /* Slice  */
  YYSYMBOL_TypeAssertion = 189,            /* TypeAssertion  */
  YYSYMBOL_Arguments = 190,                /* Arguments  */
  YYSYMBOL_ExpressionList = 191,           /* ExpressionList  */
  YYSYMBOL_Type = 192,                     /* Type  */
  YYSYMBOL_TypeArgs = 193,                 /* TypeArgs  */
  YYSYMBOL_TypeList = 194,                 /* TypeList  */
  YYSYMBOL_TypeName = 195,                 /* TypeName  */
  YYSYMBOL_ArrayType = 196,                /* ArrayType  */
  YYSYMBOL_StructType = 197,               /* StructType  */
  YYSYMBOL_DeclList = 198,                 /* DeclList  */
  YYSYMBOL_FieldDecl = 199,                /* FieldDecl  */
  YYSYMBOL_EmbeddedField = 200,            /* EmbeddedField  */
  YYSYMBOL_PointerType = 201,              /* PointerType  */
  YYSYMBOL_FunctionType = 202,             /* FunctionType  */
  YYSYMBOL_Signature = 203,                /* Signature  */
  YYSYMBOL_Parameters = 204,               /* Parameters  */
  YYSYMBOL_ParameterList = 205,            /* ParameterList  */
  YYSYMBOL_ParameterDecl = 206,            /* ParameterDecl  */
  YYSYMBOL_IdentifierList = 207,           /* IdentifierList  */
  YYSYMBOL_InterfaceType = 208,            /* InterfaceType  */
  YYSYMBOL_InterfaceElemList = 209,        /* InterfaceElemList  */
  YYSYMBOL_InterfaceElem = 210,            /* InterfaceElem  */
  YYSYMBOL_TypeElem = 211,                 /* TypeElem  */
  YYSYMBOL_TypeTerm = 212,                 /* TypeTerm  */
  YYSYMBOL_SliceType = 213,                /* SliceType  */
  YYSYMBOL_MapType = 214,                  /* MapType  */
  YYSYMBOL_ChannelType = 215               /* ChannelType  */
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
#define YYLAST   2885

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  109
/* YYNRULES -- Number of rules.  */
#define YYNRULES  309
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  509

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
      91,    92,    96,   101,    95,   102,    90,    97,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,     2,
     103,     2,   104,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    93,     2,    94,     2,     2,     2,     2,     2,     2,
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
       0,    28,    28,    29,    32,    33,    34,    36,    37,    38,
      39,    41,    42,    44,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    63,    64,    65,
      66,    69,    70,    71,    72,    73,    74,    75,    79,    80,
      81,    83,    85,    86,    87,    89,    91,    92,    94,    95,
      97,    98,   100,   101,   103,   105,   106,   108,   109,   110,
     111,   112,   113,   115,   116,   117,   119,   122,   123,   124,
     125,   126,   127,   132,   136,   137,   138,   139,   141,   142,
     144,   145,   145,   160,   161,   162,   164,   165,   166,   167,
     168,   169,   172,   173,   174,   176,   177,   178,   178,   180,
     182,   183,   185,   186,   187,   188,   189,   192,   193,   194,
     196,   197,   198,   199,   200,   202,   203,   204,   205,   206,
     210,   212,   213,   215,   216,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   233,
     234,   236,   237,   238,   239,   240,   242,   243,   244,   245,
     246,   247,   248,   250,   251,   252,   253,   255,   256,   257,
     258,   259,   260,   263,   264,   265,   266,   267,   268,   269,
     270,   273,   274,   275,   276,   277,   278,   279,   280,   282,
     283,   286,   287,   289,   290,   292,   294,   295,   296,   298,
     299,   300,   301,   302,   303,   304,   306,   307,   308,   309,
     310,   311,   312,   313,   315,   316,   317,   319,   320,   322,
     323,   325,   326,   327,   330,   331,   333,   334,   336,   337,
     338,   339,   342,   343,   344,   347,   349,   351,   352,   355,
     357,   358,   360,   361,   362,   363,   364,   365,   368,   371,
     372,   373,   374,   375,   376,   377,   378,   380,   381,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     395,   396,   398,   399,   401,   402,   406,   409,   410,   412,
     413,   415,   416,   417,   418,   420,   421,   422,   423,   426,
     430,   432,   433,   434,   436,   437,   438,   441,   442,   444,
     445,   446,   447,   450,   451,   454,   455,   457,   458,   460,
     461,   463,   464,   468,   469,   473,   476,   481,   482,   483
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
  "']'", "','", "'*'", "'/'", "'%'", "'&'", "'|'", "'+'", "'-'", "'<'",
  "'>'", "'!'", "'~'", "$accept", "prog", "TopLevelDecl", "FunctionDecl",
  "MethodDecl", "Receiver", "Statement", "ForStmt", "ForClause",
  "RangeClause", "DeferStmt", "Declaration", "GoStmt", "ReturnStmt",
  "BreakStmt", "ContinueStmt", "GotoStmt", "Label", "SelectStmt",
  "CommClauseList", "CommClause", "CommCase", "RecvStmt", "RecvExpr",
  "IfStmt", "SwitchStmt", "ExprSwitchStmt", "ExprCaseClauseList",
  "ExprCaseClause", "ExprSwitchCase", "ConstDecl", "ConstSpecList",
  "ConstSpec", "ConstExpr", "TypeDecl", "TypeSpecList", "TypeSpec",
  "AliasDecl", "TypeDef", "TypeParameters", "TypeParamList",
  "TypeParamDecl", "TypeConstraint", "VarDecl", "VarSpecList", "VarSpec",
  "SimpleStmt", "EmptyStatement", "SendStmt", "Channel", "IncDecStmt",
  "Assignment", "Expression", "binary_op", "mul_op", "add_op", "rel_op",
  "UnaryExpr", "PrimaryExpr", "Conversion", "MethodExpr", "MethodName",
  "Operand", "Literal", "BasicLit", "CompositeLit", "LiteralType",
  "LiteralValue", "ElementList", "KeyedElement", "Key", "Element",
  "OperandName", "int_lit", "imaginary_lit", "float_lit", "FunctionLit",
  "Block", "Statements", "Selector", "Index", "Slice", "TypeAssertion",
  "Arguments", "ExpressionList", "Type", "TypeArgs", "TypeList",
  "TypeName", "ArrayType", "StructType", "DeclList", "FieldDecl",
  "EmbeddedField", "PointerType", "FunctionType", "Signature",
  "Parameters", "ParameterList", "ParameterDecl", "IdentifierList",
  "InterfaceType", "InterfaceElemList", "InterfaceElem", "TypeElem",
  "TypeTerm", "SliceType", "MapType", "ChannelType", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-406)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-308)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,    43,   141,  -406,  -406,    28,    30,    35,    39,  -406,
    -406,  -406,  -406,  -406,  -406,  -406,    62,    13,    64,  -406,
      -1,    10,  -406,    74,    12,  -406,   647,   672,    20,  -406,
    -406,  -406,    75,     8,    37,   112,   355,  -406,   -31,    15,
     698,  -406,     8,    75,  -406,    50,    75,     8,    57,    63,
      77,   722,    88,  2062,   160,   355,  1176,   355,    98,    99,
    -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,   103,
      75,  2062,  -406,   131,   355,  1214,   355,  -406,  -406,   114,
     198,   115,   138,     1,    37,   933,  -406,    66,  -406,  -406,
    -406,  -406,   142,    51,   355,  -406,    37,  -406,  -406,  -406,
    -406,   229,   355,     0,    47,  -406,     7,     8,   148,  -406,
    -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,
    2062,  2145,  2062,  1054,  2062,  2062,  2062,  2062,  2062,  2461,
    -406,   109,  -406,  -406,  -406,  -406,  -406,  -406,   150,  -406,
    -406,  -406,  -406,  -406,  -406,    90,   -27,   154,   155,   156,
     163,   355,   159,   355,  2493,  -406,  2062,   355,  -406,  -406,
    -406,  -406,  2062,  -406,   -52,  -406,  -406,  -406,  -406,    75,
    -406,   355,  -406,  -406,   152,  -406,  2183,  1297,  -406,   971,
     241,   167,  2062,  2062,   241,   241,  2062,  -406,  -406,  -406,
    -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,
    -406,  -406,  -406,   169,  -406,  -406,  2230,  -406,   832,   765,
     -37,    81,  -406,  -406,  -406,  -406,  -406,   162,     8,  -406,
     170,     5,  -406,  -406,  -406,   229,    99,   171,    19,   225,
     355,    37,   256,  -406,   722,  -406,  2525,   122,   177,  -406,
      90,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,
    -406,  -406,  -406,  -406,  -406,  2062,  -406,  -406,  -406,  -406,
    -406,  -406,  -406,  -406,  -406,  2062,  -406,  -406,  -406,    42,
    1335,  1418,  -406,  -406,  -406,  -406,  -406,  1092,  -406,    64,
    2062,   176,  -406,  -406,  -406,   355,  -406,   193,    96,  -406,
    -406,  -406,     1,   182,  2299,   147,   207,  2333,  2062,  1456,
      37,    37,   208,  2299,  -406,   980,   -14,  -406,  -406,    49,
    -406,  2781,  -406,  -406,  2781,  2062,  -406,  -406,  -406,  -406,
    2062,  2062,  2062,  2062,  2062,  2062,  2062,  2062,  2062,  2062,
    2062,  2062,  2062,  2062,   355,  -406,  -406,  -406,    99,  -406,
    -406,  -406,  -406,   260,  -406,  -406,   125,  -406,   355,  -406,
    2781,  -406,   355,  -406,    94,    93,  1539,  2365,    -4,  -406,
    2557,   204,   -36,   199,   206,  -406,  -406,    48,  -406,   355,
    -406,   205,  -406,  2062,   286,  2062,  -406,   215,   147,   212,
    1577,   147,  2781,  2183,  2589,  -406,  -406,  1660,  -406,  1698,
    1782,  2183,  -406,  -406,    61,  -406,   216,  2781,  -406,  -406,
    -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,
    -406,  -406,  -406,  -406,  -406,  -406,   214,   219,  -406,   220,
     221,  -406,  1820,  -406,  2397,  1903,  -406,   210,  -406,   226,
    1941,  2024,  -406,   224,  -406,  -406,  2621,    40,  -406,  -406,
    -406,   933,   147,  2653,   230,  -406,  2183,  2183,  2685,  2062,
    2062,  -406,  -406,  -406,  2265,   238,   236,  -406,  -406,   933,
    -406,  -406,  -406,  -406,  -406,   228,  2062,  -406,  -406,  2429,
    -406,  -406,  -406,  2781,  -406,  -406,  -406,   309,  -406,  -406,
     933,   234,   147,  -406,  -406,  -406,  2183,  2781,  2781,  2062,
    2062,   933,  -406,  2717,  2062,  -406,    40,  -406,   235,  -406,
    -406,  2781,  -406,  -406,  2749,  -406,  -406,  -406,  -406
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     0,     0,     0,     3,
       5,     6,     4,    42,    43,    44,     0,     0,     0,    12,
     293,     0,   107,     0,     0,    83,    89,     0,     0,    92,
      97,    98,     0,     0,     9,   282,     0,   285,     0,   288,
     291,   182,     0,     0,   109,     0,   111,     0,   264,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,   249,
     252,   254,   253,   255,   256,   257,   258,   259,    85,     0,
      87,     0,    88,     0,     0,     0,     0,   100,    94,     0,
      96,     0,   104,     0,    10,   120,     8,     0,   283,   281,
     292,   284,     0,     0,     0,   290,     0,   294,   108,   110,
     280,     0,     0,     0,     0,   307,     0,     0,   216,   221,
     193,   194,   195,   220,   219,   218,   223,   224,   192,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   248,
     139,   163,   174,   173,   171,   184,   186,   187,     0,   183,
     189,   191,   190,   188,   114,     0,   249,   252,   254,   257,
     258,     0,     0,     0,     0,   279,     0,     0,   250,    84,
      86,    91,     0,    99,   216,   101,    93,    95,   102,     0,
     303,     0,   105,   106,   302,     7,   120,   120,    20,     0,
      49,     0,    47,     0,    53,    51,     0,   228,    25,    26,
      13,    15,    16,    17,    18,    19,    24,    22,    23,    73,
      14,   119,   117,     0,   118,   115,   116,    21,     0,     0,
       0,   293,   286,   287,   289,    11,   265,     0,   303,   296,
       0,   298,   300,   308,   268,     0,   278,     0,   270,   274,
       0,   280,     0,   167,     0,   170,     0,     0,     0,   168,
     279,   169,   164,   165,   166,   157,   158,   162,   161,   142,
     141,   149,   150,   153,   152,     0,   146,   147,   148,   151,
     154,   155,   156,   159,   160,     0,   145,   144,   143,     0,
       0,     0,   175,   176,   177,   178,   172,     0,   196,     0,
       0,   250,   309,   251,   305,     0,   113,   263,     0,    90,
     103,   304,     0,     0,   248,     0,     0,   248,     0,     0,
       0,     0,     0,   248,    30,     0,     0,    54,    48,     0,
      46,    45,    52,    50,    41,     0,   123,   124,   226,   227,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   299,   295,   297,   277,   276,
     267,   269,   273,   272,   225,   217,   309,   185,     0,   247,
     140,   229,     0,   246,     0,     0,     0,     0,   216,   206,
     214,   215,     0,   208,     0,   210,   181,     0,   266,     0,
     260,     0,   301,     0,    72,     0,    82,     0,    79,     0,
       0,     0,    40,   120,     0,    28,    29,     0,    27,     0,
       0,     0,    62,    56,     0,    58,     0,   121,   128,   130,
     138,   135,   131,   129,   132,   133,   134,   137,   136,   127,
     126,   125,   306,   275,   271,   199,     0,     0,   239,     0,
       0,   244,     0,   235,     0,     0,   230,     0,   205,     0,
       0,     0,   179,     0,   262,   261,     0,     0,    81,    77,
      78,   120,     0,     0,     0,    37,    35,    32,     0,     0,
       0,    61,    65,    60,    66,     0,     0,    55,    57,   120,
     238,   241,   240,   243,   242,     0,     0,   233,   234,     0,
     231,   204,   207,   214,   215,   209,   180,    69,    70,    71,
      80,     0,     0,    76,    36,    34,    33,    38,    39,     0,
       0,    59,   245,     0,     0,   232,     0,    75,     0,    31,
      63,    66,    64,   237,     0,    67,    68,    74,   236
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -406,  -406,  -406,  -406,  -406,  -406,  -194,  -406,  -406,  -406,
    -406,   322,  -406,  -406,  -406,  -406,  -406,    34,  -406,  -406,
     -69,  -406,  -406,  -260,  -405,  -406,  -406,  -366,  -406,  -406,
    -406,   258,   323,  -406,  -406,   251,   324,  -406,  -406,   307,
     175,  -406,  -406,  -406,   290,   334,  -137,  -406,   -46,  -406,
    -406,  -406,   -54,  -406,  -406,  -406,  -406,   100,  -406,  -406,
    -406,    67,  -406,  -406,  -406,  -406,  -406,  -135,   -80,  -406,
    -406,   -78,   119,  -406,  -406,  -406,  -406,   -34,  -404,  -406,
    -406,  -406,  -406,  -406,   -48,   398,  -142,   -15,   312,   213,
     454,   127,  -406,  -406,  -406,  -406,   -25,    23,   263,  -406,
       3,  -406,   136,  -406,   -82,  -406,   536,   563,  -406
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     9,    10,    11,    18,   187,   188,   300,   301,
     189,   190,   191,   192,   193,   194,   195,   308,   196,   394,
     395,   396,   451,   452,   197,   198,   199,   377,   378,   379,
      13,    69,    70,    72,    14,    79,    80,    30,    31,    33,
      81,    82,   172,    15,    45,    46,   200,   201,   202,   203,
     204,   205,   129,   265,   266,   267,   268,   130,   131,   132,
     133,    42,   134,   135,   136,   137,   138,   361,   362,   363,
     364,   365,   139,   140,   141,   142,   143,   207,   208,   272,
     273,   274,   275,   276,   209,   145,   158,   288,   146,   147,
     148,   227,   228,   229,    62,    63,    34,    35,    38,    39,
     210,    64,   220,   221,   222,   174,   149,   150,    67
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      86,   173,   154,   278,   281,   144,   218,   170,    84,    23,
      26,   218,   440,   211,   319,   444,    20,    96,    20,    20,
      40,   154,   100,   161,    23,   211,    27,    26,    19,  -293,
       1,   206,   478,   332,    16,    83,    20,   480,   232,   293,
     296,    20,   302,    43,   333,    27,    97,     3,   351,    23,
     175,   176,   428,   223,  -293,   491,   332,    20,    89,   429,
    -202,    91,   215,   391,    92,   392,   157,   390,   236,   154,
      41,    47,   211,    26,   151,   391,   481,   392,    83,    47,
      48,    20,   231,  -264,   339,  -211,   232,  -264,   219,    49,
      40,   505,    50,    51,    43,   224,    40,    49,    36,    17,
      50,    51,    44,   225,    68,    37,   171,   171,   286,   230,
      93,   171,    78,  -264,   289,   225,   498,    47,    48,    17,
      52,    21,   294,   297,    85,   303,    24,    85,    52,   311,
      28,   305,   314,   352,   310,    49,    36,   393,    50,    51,
     432,     4,    98,   433,    53,   304,     5,   101,     6,   457,
       7,    36,    54,    17,   206,    32,   102,    55,    37,    56,
      54,   375,    57,   376,   103,    55,    52,    56,   156,  -264,
      57,   101,    83,  -264,  -264,   106,    43,  -264,   420,   417,
     279,   280,   306,   279,   280,   421,   418,   151,   422,   419,
     370,   371,   157,   335,     8,   159,   413,   344,    54,   269,
     270,   162,   271,    87,    27,    56,   166,   349,    57,   168,
     372,   350,   279,   280,   283,  -307,  -307,   357,   312,   313,
     233,   235,   354,   360,   239,   241,   242,   243,   244,   500,
     502,   230,   367,   169,   212,    48,    60,   277,   232,    60,
      60,  -198,  -197,  -200,   382,   384,   445,   307,    60,    60,
    -201,   283,   292,    60,   309,   315,   334,   342,   336,   340,
     374,   397,   108,  -203,    60,   373,   385,   386,    60,   388,
      60,   348,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   319,    60,   369,    60,
     380,   387,   414,  -213,   430,   431,   474,   319,   437,   435,
      60,   441,   424,   439,   470,   459,   460,    60,   489,   484,
     485,   461,   462,   463,   471,    60,   476,   490,   483,   436,
     492,   496,   497,   507,    12,   458,   443,   438,   160,   206,
      25,   167,    29,   448,    76,    59,    99,   454,    59,    59,
      22,   409,   411,   455,   290,   453,   366,    59,    59,   499,
     472,   345,    59,   475,   434,   341,   213,   337,     0,     0,
      47,    48,     0,    59,    60,     0,    60,    59,     0,    59,
      60,   469,     0,     0,   465,     0,   360,   473,    49,     0,
       0,    50,    51,     0,    60,     0,    59,   206,    59,     0,
       0,     0,   206,   206,   456,   487,   488,     0,     0,    59,
       0,     0,   477,   479,     0,   206,    59,     0,     0,    52,
       0,     0,   493,   216,    59,     0,     0,     0,   226,     0,
       0,    58,     0,     0,    73,    77,   206,     0,     0,     0,
       0,     0,   206,    88,    90,   501,   501,   206,    95,     0,
     504,    54,     0,    60,     0,     0,    55,    60,    56,   105,
       0,    57,     0,   152,     0,   155,     0,     0,     0,     0,
       0,     0,   506,    59,     0,    59,     0,     0,     0,    59,
       0,     0,   163,     0,   165,     0,     0,    61,     0,     0,
      61,    61,     0,    59,     0,   152,     0,     0,     0,    61,
      61,     0,   214,     0,    61,     0,     0,     0,    60,     0,
     217,     0,     0,     0,     0,    61,     0,     0,     0,    61,
       0,    61,     0,     0,     0,     0,     0,     0,     0,     0,
     237,     0,   240,     0,     0,     0,     0,     0,    61,     0,
      61,     0,     0,     0,     0,     0,     0,   338,     0,     0,
     226,    61,    59,     0,   216,     0,    59,    60,    61,   282,
       0,   284,     0,     0,     0,   287,    61,     0,     0,    65,
       0,    60,    65,    65,     0,    60,     0,     0,     0,   291,
       0,    65,    65,     0,     0,     0,    65,     0,     0,     0,
       0,     0,    60,     0,     0,     0,    66,    65,     0,    66,
      66,    65,     0,    65,     0,     0,     0,    59,    66,    66,
       0,     0,     0,    66,     0,    61,     0,    61,     0,     0,
      65,    61,    65,     0,    66,     0,     0,     0,    66,     0,
      66,     0,     0,    65,     0,    61,     0,     0,   343,     0,
      65,     0,   346,     0,     0,     0,     0,    66,    65,    66,
       0,     0,     0,     0,     0,     0,    59,     0,     0,     0,
      66,     0,    47,    48,     0,     0,     0,    66,     0,     0,
      59,     0,     0,     0,    59,    66,     0,     0,   355,     0,
      49,     0,     0,    50,    51,     0,     0,    47,    48,     0,
       0,    59,     0,   368,    61,     0,     0,    65,    61,    65,
       0,     0,     0,    65,     0,    49,     0,     0,    50,    51,
       0,    52,     0,    47,    48,     0,     0,    65,     0,     0,
       0,     0,     0,     0,    66,     0,    66,    71,     0,     0,
      66,    49,     0,     0,    50,    51,    52,    47,    48,     0,
       0,     0,   412,    54,    66,     0,     0,     0,    55,    61,
      56,     0,    74,    57,     0,    49,   415,     0,    50,    51,
     416,     0,    52,     0,     0,     0,     0,     0,    54,     0,
       0,     0,     0,    55,     0,    75,    65,   287,    57,     0,
      65,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,    94,    54,     0,     0,     0,    61,    55,
       0,    56,     0,    66,    57,     0,     0,    66,     0,     0,
       0,     0,    61,     0,     0,     0,    61,     0,   104,     0,
       0,     0,     0,    55,     0,    56,     0,     0,    57,     0,
       0,    65,     0,    61,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,     0,   107,   164,     6,
       0,     7,     0,   176,     0,   177,     0,   178,    66,   179,
     180,     0,     0,   181,   182,    49,   183,   184,    50,    51,
     185,   186,   109,   110,   111,   112,     0,   113,   114,   115,
      65,   116,   117,   118,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     8,    52,     0,    65,     0,
       0,     0,     0,     0,     0,     0,     0,    66,     0,     0,
       0,     0,     0,     0,     0,    65,     0,     0,     0,     0,
       0,    66,     0,     0,   120,    66,     0,     0,   121,    85,
     318,     0,     0,   122,     0,   123,     0,     0,   124,     0,
       0,   125,    66,   126,   127,     0,     0,   128,   107,   164,
       6,     0,     7,     0,   176,     0,   177,     0,   178,     0,
     179,   180,     0,     0,   181,   182,    49,   183,   184,    50,
      51,   185,   186,   109,   110,   111,   112,     0,   113,   114,
     115,     0,   116,   117,   118,   119,   107,   164,     0,     0,
       0,     0,     0,     0,     0,     0,     8,    52,     0,     0,
     298,     0,     0,     0,    49,     0,     0,    50,    51,     0,
       0,   109,   110,   111,   112,     0,   113,   114,   115,     0,
     116,   117,   118,   119,     0,   120,     0,     0,     0,   121,
      85,     0,     0,     0,   122,    52,   123,     0,     0,   124,
       0,     0,   125,     0,   126,   127,     0,     0,   128,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     389,     0,     0,   120,   299,     0,     0,   121,    85,   107,
     108,     0,   122,     0,   123,     0,     0,   124,     0,     0,
     125,     0,   126,   127,     0,     0,   128,    49,     0,     0,
      50,    51,     0,     0,   109,   110,   111,   112,     0,   113,
     114,   115,     0,   116,   117,   118,   119,   107,   358,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,     0,     0,     0,     0,    49,     0,     0,    50,    51,
       0,     0,   109,   110,   111,   112,     0,   113,   114,   115,
       0,   116,   117,   118,   119,     0,   120,     0,     0,   238,
     121,     0,     0,     0,     0,   122,    52,   123,   153,     0,
     124,     0,     0,   125,     0,   126,   127,     0,     0,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   120,     0,     0,     0,   121,   277,
     359,   107,   108,   122,     0,   123,     0,     0,   124,     0,
       0,   125,     0,   126,   127,     0,     0,   128,     0,    49,
       0,     0,    50,    51,     0,     0,   109,   110,   111,   112,
       0,   113,   114,   115,     0,   116,   117,   118,   119,   107,
     164,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,     0,     0,    49,     0,     0,
      50,    51,     0,     0,   109,   110,   111,   112,     0,   113,
     114,   115,     0,   116,   117,   118,   119,     0,   120,     0,
       0,     0,   121,     0,     0,     0,     0,   122,    52,   123,
     153,     0,   124,     0,     0,   125,     0,   126,   127,     0,
       0,   128,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   120,     0,     0,     0,
     121,     0,   107,   164,     0,   122,     0,   123,   153,     0,
     124,     0,     0,   125,     0,   126,   127,     0,     0,   128,
      49,     0,     0,    50,    51,     0,     0,   109,   110,   111,
     112,     0,   113,   114,   115,     0,   116,   117,   118,   119,
     107,   108,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,    49,     0,
       0,    50,    51,     0,     0,   109,   110,   111,   112,     0,
     113,   114,   115,     0,   116,   117,   118,   119,     0,   120,
       0,     0,     0,   121,   295,     0,     0,     0,   122,    52,
     123,     0,     0,   124,     0,     0,   125,     0,   126,   127,
       0,     0,   128,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   120,     0,     0,
       0,   121,     0,   107,   108,     0,   122,   353,   123,     0,
       0,   124,     0,     0,   125,     0,   126,   127,     0,     0,
     128,    49,     0,     0,    50,    51,     0,     0,   109,   110,
     111,   112,     0,   113,   114,   115,     0,   116,   117,   118,
     119,   107,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,     0,     0,    49,
       0,     0,    50,    51,     0,     0,   109,   110,   111,   112,
       0,   113,   114,   115,     0,   116,   117,   118,   119,     0,
     120,     0,     0,     0,   121,     0,     0,   356,     0,   122,
      52,   123,     0,     0,   124,     0,     0,   125,     0,   126,
     127,     0,     0,   128,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   120,   383,
       0,     0,   121,     0,   107,   108,     0,   122,     0,   123,
       0,     0,   124,     0,     0,   125,     0,   126,   127,     0,
       0,   128,    49,     0,     0,    50,    51,     0,     0,   109,
     110,   111,   112,     0,   113,   114,   115,     0,   116,   117,
     118,   119,   107,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,     0,     0,     0,
      49,     0,     0,    50,    51,     0,     0,   109,   110,   111,
     112,     0,   113,   114,   115,     0,   116,   117,   118,   119,
       0,   120,     0,     0,     0,   121,     0,     0,     0,     0,
     122,    52,   123,   423,     0,   124,     0,     0,   125,     0,
     126,   127,     0,     0,   128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   120,
       0,     0,     0,   121,   442,   107,   108,     0,   122,     0,
     123,     0,     0,   124,     0,     0,   125,     0,   126,   127,
       0,     0,   128,    49,     0,     0,    50,    51,     0,     0,
     109,   110,   111,   112,     0,   113,   114,   115,     0,   116,
     117,   118,   119,   107,   108,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,     0,     0,   449,     0,     0,
       0,    49,     0,     0,    50,    51,     0,     0,   109,   110,
     111,   112,     0,   113,   114,   115,     0,   116,   117,   118,
     119,     0,   120,   447,     0,     0,   121,     0,     0,     0,
       0,   122,    52,   123,     0,     0,   124,     0,     0,   125,
       0,   126,   127,     0,     0,   128,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     120,     0,     0,     0,   121,     0,     0,   107,   108,   122,
       0,   123,     0,     0,   124,     0,     0,   125,     0,   126,
     127,   450,     0,   128,     0,    49,     0,     0,    50,    51,
       0,     0,   109,   110,   111,   112,     0,   113,   114,   115,
       0,   116,   117,   118,   119,   107,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,    49,     0,     0,    50,    51,     0,     0,
     109,   110,   111,   112,     0,   113,   114,   115,     0,   116,
     117,   118,   119,     0,   120,     0,     0,     0,   121,     0,
       0,     0,     0,   122,    52,   123,     0,     0,   124,     0,
       0,   125,     0,   126,   127,     0,     0,   128,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   120,     0,     0,     0,   121,     0,   107,   108,
       0,   122,   464,   123,     0,     0,   124,     0,     0,   125,
       0,   126,   127,     0,     0,   128,    49,     0,     0,    50,
      51,     0,     0,   109,   110,   111,   112,     0,   113,   114,
     115,     0,   116,   117,   118,   119,   107,   358,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,     0,     0,     0,    49,     0,     0,    50,    51,     0,
       0,   109,   110,   111,   112,     0,   113,   114,   115,     0,
     116,   117,   118,   119,     0,   120,     0,     0,     0,   121,
       0,     0,     0,     0,   122,    52,   123,   468,     0,   124,
       0,     0,   125,     0,   126,   127,     0,     0,   128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   120,     0,     0,     0,   121,   277,   107,
     108,     0,   122,     0,   123,     0,     0,   124,     0,     0,
     125,     0,   126,   127,     0,     0,   128,    49,     0,     0,
      50,    51,     0,     0,   109,   110,   111,   112,     0,   113,
     114,   115,     0,   116,   117,   118,   119,   107,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,     0,     0,     0,     0,    49,     0,     0,    50,    51,
       0,     0,   109,   110,   111,   112,     0,   113,   114,   115,
       0,   116,   117,   118,   119,     0,   120,     0,     0,     0,
     121,   277,     0,     0,     0,   122,    52,   123,     0,     0,
     124,     0,     0,   125,     0,   126,   127,     0,     0,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   120,     0,     0,     0,   121,     0,
     107,   108,     0,   122,     0,   123,     0,     0,   124,     0,
       0,   125,     0,   126,   127,     0,     0,   128,    49,     0,
       0,    50,   234,     0,     0,   109,   110,   111,   112,     0,
     113,   114,   115,     0,   116,   117,   118,   119,   107,   164,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,     0,     0,     0,    49,     0,     0,    50,
      51,     0,     0,   109,   110,   111,   112,     0,   113,   114,
     115,     0,   116,   117,   118,   119,     0,   120,     0,     0,
       0,   121,     0,     0,     0,     0,   122,    52,   123,     0,
       0,   124,     0,     0,   125,     0,   126,   127,     0,     0,
     128,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   120,     0,     0,     0,   121,
       0,     0,     0,     0,   122,     0,   123,     0,     0,   124,
       0,     0,   125,     0,   126,   127,     0,     0,   128,  -248,
    -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,   316,   317,   245,   246,   247,   248,   249,   250,   251,
     252,     0,   253,     0,   254,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,  -248,     0,     0,   245,   246,
     247,   248,   249,   250,   251,   252,     0,   253,     0,   254,
       0,  -122,     0,     0,     0,     0,     0,     0,     0,     0,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     316,   317,   245,   246,   247,   248,   249,   250,   251,   252,
       0,   253,  -116,   254,     0,  -122,    85,     0,     0,     0,
       0,     0,     0,     0,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   316,   317,   245,   246,   247,   248,
     249,   250,   251,   252,     0,   253,  -116,   254,     0,  -122,
     381,     0,     0,     0,     0,     0,     0,     0,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   245,   246,
     247,   248,   249,   250,   251,   252,     0,   253,     0,   254,
       0,     0,     0,     0,   425,     0,     0,     0,     0,   426,
     427,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     245,   246,   247,   248,   249,   250,   251,   252,     0,   253,
       0,   254,     0,     0,     0,     0,   466,     0,     0,     0,
       0,   467,     0,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   245,   246,   247,   248,   249,   250,   251,   252,
       0,   253,     0,   254,     0,     0,     0,     0,   494,     0,
       0,     0,     0,   495,     0,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   245,   246,   247,   248,   249,   250,
     251,   252,     0,   253,     0,   254,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   245,   246,   247,   248,
     249,   250,   251,   252,     0,   253,     0,   254,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   285,     0,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   245,   246,
     247,   248,   249,   250,   251,   252,     0,   253,     0,   254,
       0,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     245,   246,   247,   248,   249,   250,   251,   252,     0,   253,
       0,   254,     0,     0,     0,     0,  -212,     0,     0,     0,
       0,     0,     0,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   245,   246,   247,   248,   249,   250,   251,   252,
       0,   253,   446,   254,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   245,   246,   247,   248,   249,   250,
     251,   252,     0,   253,     0,   254,     0,     0,    85,     0,
       0,     0,     0,     0,     0,     0,     0,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   245,   246,   247,   248,
     249,   250,   251,   252,     0,   253,     0,   254,     0,     0,
     482,     0,     0,     0,     0,     0,     0,     0,     0,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   245,   246,
     247,   248,   249,   250,   251,   252,     0,   253,   486,   254,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     245,   246,   247,   248,   249,   250,   251,   252,     0,   253,
       0,   254,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   503,     0,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   245,   246,   247,   248,   249,   250,   251,   252,
       0,   253,     0,   254,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   508,     0,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   245,   246,   247,   248,   249,   250,
     251,   252,     0,   253,     0,   254,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   256,   257,   258,
     259,   260,   261,   262,   263,   264
};

static const yytype_int16 yycheck[] =
{
      34,    83,    56,   138,   146,    53,     6,     6,    33,     6,
       7,     6,   378,     6,   208,   381,     6,    42,     6,     6,
      17,    75,    47,    71,    21,     6,     6,    24,     5,    81,
       3,    85,   437,    70,     6,    32,     6,   441,    90,   176,
     177,     6,   179,    95,    81,     6,    43,     4,     6,    46,
      84,    11,    88,     6,   106,   459,    70,     6,    35,    95,
      87,    92,    96,    14,    95,    16,    93,    81,   122,   123,
       6,     5,     6,    70,    27,    14,   442,    16,    75,     5,
       6,     6,   107,    87,   226,    89,    90,     6,    88,    23,
      87,   496,    26,    27,    95,    88,    93,    23,    85,    91,
      26,    27,    92,    96,    92,    92,   106,   106,   156,   106,
      95,   106,    92,    32,   162,    96,   482,     5,     6,    91,
      54,    91,   176,   177,    87,   179,    91,    87,    54,   183,
      91,   179,   186,    91,   182,    23,    85,    88,    26,    27,
      92,     0,    92,    95,    70,   179,     5,    90,     7,    88,
       9,    85,    86,    91,   208,    93,    93,    91,    92,    93,
      86,    14,    96,    16,    87,    91,    54,    93,    70,    88,
      96,    90,   169,    92,    93,    87,    95,    96,    85,    85,
      90,    91,   179,    90,    91,    92,    92,    27,    95,    95,
      94,    95,    93,   218,    53,    92,   338,   231,    86,    90,
      91,    70,    93,    91,     6,    93,    92,   255,    96,    94,
     292,   265,    90,    91,    92,    90,    91,   271,   184,   185,
     120,   121,   270,   277,   124,   125,   126,   127,   128,   489,
     490,   228,   280,    95,    92,     6,    23,    87,    90,    26,
      27,    87,    87,    87,   298,   299,   383,     6,    35,    36,
      87,    92,   100,    40,    87,    86,    94,    32,    88,    88,
     294,   315,     6,    87,    51,    83,   300,   301,    55,   303,
      57,    94,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   480,    74,    95,    76,
      83,    83,    32,    89,    95,    89,   431,   491,    12,    94,
      87,    89,   356,    88,    94,    89,    92,    94,    70,   446,
     447,    92,    92,    92,    88,   102,    92,    81,    88,   373,
      92,    12,    88,    88,     2,   394,   380,   375,    70,   383,
       7,    80,     8,   387,    27,    23,    46,   391,    26,    27,
       6,   389,   390,   391,   169,   391,   279,    35,    36,   486,
     430,   232,    40,   431,   369,   228,    93,   221,    -1,    -1,
       5,     6,    -1,    51,   151,    -1,   153,    55,    -1,    57,
     157,   425,    -1,    -1,   422,    -1,   430,   431,    23,    -1,
      -1,    26,    27,    -1,   171,    -1,    74,   441,    76,    -1,
      -1,    -1,   446,   447,   391,   449,   450,    -1,    -1,    87,
      -1,    -1,   436,   437,    -1,   459,    94,    -1,    -1,    54,
      -1,    -1,   466,   101,   102,    -1,    -1,    -1,   106,    -1,
      -1,    23,    -1,    -1,    26,    27,   480,    -1,    -1,    -1,
      -1,    -1,   486,    35,    36,   489,   490,   491,    40,    -1,
     494,    86,    -1,   230,    -1,    -1,    91,   234,    93,    51,
      -1,    96,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,   496,   151,    -1,   153,    -1,    -1,    -1,   157,
      -1,    -1,    74,    -1,    76,    -1,    -1,    23,    -1,    -1,
      26,    27,    -1,   171,    -1,    87,    -1,    -1,    -1,    35,
      36,    -1,    94,    -1,    40,    -1,    -1,    -1,   285,    -1,
     102,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    -1,   124,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,
     228,    87,   230,    -1,   232,    -1,   234,   334,    94,   151,
      -1,   153,    -1,    -1,    -1,   157,   102,    -1,    -1,    23,
      -1,   348,    26,    27,    -1,   352,    -1,    -1,    -1,   171,
      -1,    35,    36,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,   369,    -1,    -1,    -1,    23,    51,    -1,    26,
      27,    55,    -1,    57,    -1,    -1,    -1,   285,    35,    36,
      -1,    -1,    -1,    40,    -1,   151,    -1,   153,    -1,    -1,
      74,   157,    76,    -1,    51,    -1,    -1,    -1,    55,    -1,
      57,    -1,    -1,    87,    -1,   171,    -1,    -1,   230,    -1,
      94,    -1,   234,    -1,    -1,    -1,    -1,    74,   102,    76,
      -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,
      87,    -1,     5,     6,    -1,    -1,    -1,    94,    -1,    -1,
     348,    -1,    -1,    -1,   352,   102,    -1,    -1,   270,    -1,
      23,    -1,    -1,    26,    27,    -1,    -1,     5,     6,    -1,
      -1,   369,    -1,   285,   230,    -1,    -1,   151,   234,   153,
      -1,    -1,    -1,   157,    -1,    23,    -1,    -1,    26,    27,
      -1,    54,    -1,     5,     6,    -1,    -1,   171,    -1,    -1,
      -1,    -1,    -1,    -1,   151,    -1,   153,    70,    -1,    -1,
     157,    23,    -1,    -1,    26,    27,    54,     5,     6,    -1,
      -1,    -1,   334,    86,   171,    -1,    -1,    -1,    91,   285,
      93,    -1,    70,    96,    -1,    23,   348,    -1,    26,    27,
     352,    -1,    54,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    -1,    93,   230,   369,    96,    -1,
     234,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    -1,    -1,   334,    91,
      -1,    93,    -1,   230,    96,    -1,    -1,   234,    -1,    -1,
      -1,    -1,   348,    -1,    -1,    -1,   352,    -1,    86,    -1,
      -1,    -1,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,
      -1,   285,    -1,   369,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    -1,     5,     6,     7,
      -1,     9,    -1,    11,    -1,    13,    -1,    15,   285,    17,
      18,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
     334,    39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   348,    53,    54,    -1,   352,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   369,    -1,    -1,    -1,    -1,
      -1,   348,    -1,    -1,    82,   352,    -1,    -1,    86,    87,
      88,    -1,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,
      -1,    99,   369,   101,   102,    -1,    -1,   105,     5,     6,
       7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,    -1,
      17,    18,    -1,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,
      19,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    -1,
      39,    40,    41,    42,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    -1,    -1,    91,    54,    93,    -1,    -1,    96,
      -1,    -1,    99,    -1,   101,   102,    -1,    -1,   105,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    -1,    82,    83,    -1,    -1,    86,    87,     5,
       6,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,    -1,
      99,    -1,   101,   102,    -1,    -1,   105,    23,    -1,    -1,
      26,    27,    -1,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    39,    40,    41,    42,     5,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,
      -1,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,    -1,    82,    -1,    -1,    85,
      86,    -1,    -1,    -1,    -1,    91,    54,    93,    94,    -1,
      96,    -1,    -1,    99,    -1,   101,   102,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,
      88,     5,     6,    91,    -1,    93,    -1,    -1,    96,    -1,
      -1,    99,    -1,   101,   102,    -1,    -1,   105,    -1,    23,
      -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    39,    40,    41,    42,     5,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      26,    27,    -1,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    39,    40,    41,    42,    -1,    82,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    54,    93,
      94,    -1,    96,    -1,    -1,    99,    -1,   101,   102,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    -1,     5,     6,    -1,    91,    -1,    93,    94,    -1,
      96,    -1,    -1,    99,    -1,   101,   102,    -1,    -1,   105,
      23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,    -1,    82,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    91,    54,
      93,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,   102,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    -1,     5,     6,    -1,    91,    92,    93,    -1,
      -1,    96,    -1,    -1,    99,    -1,   101,   102,    -1,    -1,
     105,    23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    39,    40,    41,
      42,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    39,    40,    41,    42,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    89,    -1,    91,
      54,    93,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,
     102,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      -1,    -1,    86,    -1,     5,     6,    -1,    91,    -1,    93,
      -1,    -1,    96,    -1,    -1,    99,    -1,   101,   102,    -1,
      -1,   105,    23,    -1,    -1,    26,    27,    -1,    -1,    30,
      31,    32,    33,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
      -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      91,    54,    93,    94,    -1,    96,    -1,    -1,    99,    -1,
     101,   102,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    87,     5,     6,    -1,    91,    -1,
      93,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,   102,
      -1,    -1,   105,    23,    -1,    -1,    26,    27,    -1,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    39,
      40,    41,    42,     5,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    19,    -1,    -1,
      -1,    23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    39,    40,    41,
      42,    -1,    82,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    91,    54,    93,    -1,    -1,    96,    -1,    -1,    99,
      -1,   101,   102,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,     5,     6,    91,
      -1,    93,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,
     102,    19,    -1,   105,    -1,    23,    -1,    -1,    26,    27,
      -1,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,     5,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    26,    27,    -1,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    39,
      40,    41,    42,    -1,    82,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    54,    93,    -1,    -1,    96,    -1,
      -1,    99,    -1,   101,   102,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    -1,     5,     6,
      -1,    91,    92,    93,    -1,    -1,    96,    -1,    -1,    99,
      -1,   101,   102,    -1,    -1,   105,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    -1,
      39,    40,    41,    42,    -1,    82,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    54,    93,    94,    -1,    96,
      -1,    -1,    99,    -1,   101,   102,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,     5,
       6,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,    -1,
      99,    -1,   101,   102,    -1,    -1,   105,    23,    -1,    -1,
      26,    27,    -1,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    39,    40,    41,    42,     5,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,
      -1,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,    -1,    82,    -1,    -1,    -1,
      86,    87,    -1,    -1,    -1,    91,    54,    93,    -1,    -1,
      96,    -1,    -1,    99,    -1,   101,   102,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,
       5,     6,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,
      -1,    99,    -1,   101,   102,    -1,    -1,   105,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,    -1,    82,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    91,    54,    93,    -1,
      -1,    96,    -1,    -1,    99,    -1,   101,   102,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    -1,    93,    -1,    -1,    96,
      -1,    -1,    99,    -1,   101,   102,    -1,    -1,   105,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    70,    -1,    -1,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    -1,    84,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    83,    84,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    82,    83,    84,    -1,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    -1,    84,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    82,
      -1,    84,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    94,    -1,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    -1,    84,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    94,    -1,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    82,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    82,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    82,
      -1,    84,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    82,    -1,    84,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    82,    -1,    84,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    82,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    82,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,   102,   103,   104
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,   108,     4,     0,     5,     7,     9,    53,   109,
     110,   111,   118,   137,   141,   150,     6,    91,   112,   204,
       6,    91,   152,   207,    91,   139,   207,     6,    91,   143,
     144,   145,    93,   146,   203,   204,    85,    92,   205,   206,
     207,     6,   168,    95,    92,   151,   152,     5,     6,    23,
      26,    27,    54,    70,    86,    91,    93,    96,   192,   195,
     196,   197,   201,   202,   208,   213,   214,   215,    92,   138,
     139,    70,   140,   192,    70,    93,   146,   192,    92,   142,
     143,   147,   148,   207,   203,    87,   184,    91,   192,   204,
     192,    92,    95,    95,    85,   192,   203,   207,    92,   151,
     203,    90,    93,    87,    86,   192,    87,     5,     6,    30,
      31,    32,    33,    35,    36,    37,    39,    40,    41,    42,
      82,    86,    91,    93,    96,    99,   101,   102,   105,   159,
     164,   165,   166,   167,   169,   170,   171,   172,   173,   179,
     180,   181,   182,   183,   191,   192,   195,   196,   197,   213,
     214,    27,   192,    94,   159,   192,    70,    93,   193,    92,
     138,   191,    70,   192,     6,   192,    92,   142,    94,    95,
       6,   106,   149,   211,   212,   184,    11,    13,    15,    17,
      18,    21,    22,    24,    25,    28,    29,   113,   114,   117,
     118,   119,   120,   121,   122,   123,   125,   131,   132,   133,
     153,   154,   155,   156,   157,   158,   159,   184,   185,   191,
     207,     6,    92,   205,   192,   184,   195,   192,     6,    88,
     209,   210,   211,     6,    88,    96,   195,   198,   199,   200,
     207,   203,    90,   164,    27,   164,   159,   192,    85,   164,
     192,   164,   164,   164,   164,    73,    74,    75,    76,    77,
      78,    79,    80,    82,    84,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   160,   161,   162,   163,    90,
      91,    93,   186,   187,   188,   189,   190,    87,   174,    90,
      91,   193,   192,    92,   192,    94,   191,   192,   194,   191,
     147,   192,   100,   153,   159,    87,   153,   159,    19,    83,
     115,   116,   153,   159,   184,   191,   207,     6,   124,    87,
     191,   159,   124,   124,   159,    86,    71,    72,    88,   113,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    70,    81,    94,   203,    88,   209,   195,   193,
      88,   198,    32,   192,   184,   179,   192,    92,    94,   191,
     159,     6,    91,    92,   191,   192,    89,   159,     6,    88,
     159,   174,   175,   176,   177,   178,   168,   191,   192,    95,
      94,    95,   211,    83,   184,    14,    16,   134,   135,   136,
      83,    87,   159,    83,   159,   184,   184,    83,   184,    70,
      81,    14,    16,    88,   126,   127,   128,   159,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   192,   193,    32,   192,   192,    85,    92,    95,
      85,    92,    95,    94,   159,    89,    94,    95,    88,    95,
      95,    89,    92,    95,   194,    94,   159,    12,   191,    88,
     134,    89,    87,   159,   134,   153,    83,    83,   159,    19,
      19,   129,   130,   155,   159,   191,   207,    88,   127,    89,
      92,    92,    92,    92,    92,   191,    89,    94,    94,   159,
      94,    88,   175,   159,   174,   178,    92,   184,   131,   184,
     185,   134,    87,    88,   153,   153,    83,   159,   159,    70,
      81,   185,    92,   159,    89,    94,    12,    88,   134,   153,
     130,   159,   130,    94,   159,   131,   184,    88,    94
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   108,   109,   109,   109,   110,   110,   110,
     110,   111,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   114,   114,   114,
     114,   115,   115,   115,   115,   115,   115,   115,   116,   116,
     116,   117,   118,   118,   118,   119,   120,   120,   121,   121,
     122,   122,   123,   123,   124,   125,   125,   126,   126,   127,
     128,   128,   128,   129,   129,   129,   130,   131,   131,   131,
     131,   131,   131,   132,   133,   133,   133,   133,   134,   134,
     135,   136,   136,   137,   137,   137,   138,   138,   139,   139,
     140,   140,   141,   141,   141,   142,   142,   143,   143,   144,
     145,   145,   146,   147,   147,   148,   149,   150,   150,   150,
     151,   151,   152,   152,   152,   153,   153,   153,   153,   153,
     154,   155,   156,   157,   157,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   159,
     159,   160,   160,   160,   160,   160,   161,   161,   161,   161,
     161,   161,   161,   162,   162,   162,   162,   163,   163,   163,
     163,   163,   163,   164,   164,   164,   164,   164,   164,   164,
     164,   165,   165,   165,   165,   165,   165,   165,   165,   166,
     166,   167,   168,   169,   169,   169,   170,   170,   170,   171,
     171,   171,   171,   171,   171,   171,   172,   173,   173,   173,
     173,   173,   173,   173,   174,   174,   174,   175,   175,   176,
     176,   177,   177,   177,   178,   178,   179,   179,   180,   180,
     180,   180,   181,   182,   182,   183,   184,   185,   185,   186,
     187,   187,   188,   188,   188,   188,   188,   188,   189,   190,
     190,   190,   190,   190,   190,   190,   190,   191,   191,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     193,   193,   194,   194,   195,   195,   196,   197,   197,   198,
     198,   199,   199,   199,   199,   200,   200,   200,   200,   201,
     202,   203,   203,   203,   204,   204,   204,   205,   205,   206,
     206,   206,   206,   207,   207,   208,   208,   209,   209,   210,
     210,   211,   211,   212,   212,   213,   214,   215,   215,   215
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     1,     5,     4,     3,
       4,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       2,     5,     3,     4,     4,     3,     4,     3,     4,     4,
       2,     2,     1,     1,     1,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     4,     3,     2,     1,     3,
       2,     2,     1,     3,     3,     1,     1,     7,     7,     5,
       5,     5,     3,     1,     7,     6,     5,     4,     2,     1,
       3,     2,     1,     2,     4,     3,     2,     1,     2,     1,
       3,     2,     2,     4,     3,     2,     1,     1,     1,     3,
       2,     3,     3,     3,     1,     2,     1,     2,     4,     3,
       2,     1,     2,     4,     3,     1,     1,     1,     1,     1,
       0,     3,     1,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     1,     1,     2,     2,     2,     2,     4,
       5,     3,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     4,
       1,     1,     1,     2,     4,     3,     2,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     2,     1,     2,
       3,     4,     5,     4,     4,     3,     7,     6,     4,     3,
       4,     4,     4,     4,     3,     5,     2,     3,     1,     1,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     1,     1,     3,     4,     4,     3,     2,
       1,     3,     2,     2,     1,     3,     2,     2,     1,     2,
       2,     2,     1,     2,     3,     2,     4,     3,     1,     3,
       2,     1,     2,     1,     3,     4,     3,     2,     1,     2,
       1,     3,     1,     1,     2,     3,     5,     2,     3,     3
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
#line 28 "lab2.yacc"
                      {printf("Find package and import\n");}
#line 2368 "y.tab.c"
    break;

  case 75: /* ExprSwitchStmt: SWITCH SimpleStmt SEMICOLON '{' ExprCaseClauseList '}'  */
#line 137 "lab2.yacc"
                                                                                 {printf("simplestmt\n");}
#line 2374 "y.tab.c"
    break;


#line 2378 "y.tab.c"

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

#line 486 "lab2.yacc"


int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
	yyparse();
        fclose(yyin);
	if(error_ == 0)
		printf("OK\n");
        
}
