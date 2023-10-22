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
    EQ = 314,                      /* EQ  */
    INC = 315,                     /* INC  */
    DEC = 316,                     /* DEC  */
    SUBEQ = 317,                   /* SUBEQ  */
    PLUSEQ = 318,                  /* PLUSEQ  */
    MULEQ = 319,                   /* MULEQ  */
    DIVEQ = 320,                   /* DIVEQ  */
    MODEQ = 321,                   /* MODEQ  */
    EQUAL = 322,                   /* EQUAL  */
    NOTEQUAL = 323,                /* NOTEQUAL  */
    GREATEROREQUAL = 324,          /* GREATEROREQUAL  */
    LESSOREQUAL = 325,             /* LESSOREQUAL  */
    AND = 326,                     /* AND  */
    OR = 327,                      /* OR  */
    LSHIFT = 328,                  /* LSHIFT  */
    RSHIFT = 329,                  /* RSHIFT  */
    PEQ = 330,                     /* PEQ  */
    XOR = 331,                     /* XOR  */
    SEMICOLON = 332,               /* SEMICOLON  */
    AMP_EXP = 333,                 /* AMP_EXP  */
    POINT = 334,                   /* POINT  */
    POINTER = 335                  /* POINTER  */
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
#define EQ 314
#define INC 315
#define DEC 316
#define SUBEQ 317
#define PLUSEQ 318
#define MULEQ 319
#define DIVEQ 320
#define MODEQ 321
#define EQUAL 322
#define NOTEQUAL 323
#define GREATEROREQUAL 324
#define LESSOREQUAL 325
#define AND 326
#define OR 327
#define LSHIFT 328
#define RSHIFT 329
#define PEQ 330
#define XOR 331
#define SEMICOLON 332
#define AMP_EXP 333
#define POINT 334
#define POINTER 335

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
  YYSYMBOL_EQ = 59,                        /* EQ  */
  YYSYMBOL_INC = 60,                       /* INC  */
  YYSYMBOL_DEC = 61,                       /* DEC  */
  YYSYMBOL_SUBEQ = 62,                     /* SUBEQ  */
  YYSYMBOL_PLUSEQ = 63,                    /* PLUSEQ  */
  YYSYMBOL_MULEQ = 64,                     /* MULEQ  */
  YYSYMBOL_DIVEQ = 65,                     /* DIVEQ  */
  YYSYMBOL_MODEQ = 66,                     /* MODEQ  */
  YYSYMBOL_EQUAL = 67,                     /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 68,                  /* NOTEQUAL  */
  YYSYMBOL_GREATEROREQUAL = 69,            /* GREATEROREQUAL  */
  YYSYMBOL_LESSOREQUAL = 70,               /* LESSOREQUAL  */
  YYSYMBOL_AND = 71,                       /* AND  */
  YYSYMBOL_OR = 72,                        /* OR  */
  YYSYMBOL_LSHIFT = 73,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 74,                    /* RSHIFT  */
  YYSYMBOL_PEQ = 75,                       /* PEQ  */
  YYSYMBOL_XOR = 76,                       /* XOR  */
  YYSYMBOL_SEMICOLON = 77,                 /* SEMICOLON  */
  YYSYMBOL_AMP_EXP = 78,                   /* AMP_EXP  */
  YYSYMBOL_POINT = 79,                     /* POINT  */
  YYSYMBOL_POINTER = 80,                   /* POINTER  */
  YYSYMBOL_81_ = 81,                       /* '+'  */
  YYSYMBOL_82_ = 82,                       /* '-'  */
  YYSYMBOL_83_ = 83,                       /* '*'  */
  YYSYMBOL_84_ = 84,                       /* '/'  */
  YYSYMBOL_85_ = 85,                       /* '{'  */
  YYSYMBOL_86_ = 86,                       /* '}'  */
  YYSYMBOL_87_ = 87,                       /* ':'  */
  YYSYMBOL_88_ = 88,                       /* '.'  */
  YYSYMBOL_89_ = 89,                       /* '('  */
  YYSYMBOL_90_ = 90,                       /* ')'  */
  YYSYMBOL_91_ = 91,                       /* '['  */
  YYSYMBOL_92_ = 92,                       /* ']'  */
  YYSYMBOL_93_ = 93,                       /* ','  */
  YYSYMBOL_94_ = 94,                       /* '|'  */
  YYSYMBOL_95_ = 95,                       /* '~'  */
  YYSYMBOL_96_ = 96,                       /* '!'  */
  YYSYMBOL_97_ = 97,                       /* '&'  */
  YYSYMBOL_98_ = 98,                       /* '%'  */
  YYSYMBOL_99_ = 99,                       /* '<'  */
  YYSYMBOL_100_ = 100,                     /* '>'  */
  YYSYMBOL_YYACCEPT = 101,                 /* $accept  */
  YYSYMBOL_prog = 102,                     /* prog  */
  YYSYMBOL_TopLevelDecl = 103,             /* TopLevelDecl  */
  YYSYMBOL_FunctionDecl = 104,             /* FunctionDecl  */
  YYSYMBOL_FunctionName = 105,             /* FunctionName  */
  YYSYMBOL_FunctionBody = 106,             /* FunctionBody  */
  YYSYMBOL_MethodDecl = 107,               /* MethodDecl  */
  YYSYMBOL_Receiver = 108,                 /* Receiver  */
  YYSYMBOL_Statement = 109,                /* Statement  */
  YYSYMBOL_ForStmt = 110,                  /* ForStmt  */
  YYSYMBOL_Condition = 111,                /* Condition  */
  YYSYMBOL_ForClause = 112,                /* ForClause  */
  YYSYMBOL_RangeClause = 113,              /* RangeClause  */
  YYSYMBOL_DeferStmt = 114,                /* DeferStmt  */
  YYSYMBOL_Declaration = 115,              /* Declaration  */
  YYSYMBOL_GoStmt = 116,                   /* GoStmt  */
  YYSYMBOL_ReturnStmt = 117,               /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 118,                /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 119,             /* ContinueStmt  */
  YYSYMBOL_GotoStmt = 120,                 /* GotoStmt  */
  YYSYMBOL_Label = 121,                    /* Label  */
  YYSYMBOL_SelectStmt = 122,               /* SelectStmt  */
  YYSYMBOL_CommClauseList = 123,           /* CommClauseList  */
  YYSYMBOL_CommClause = 124,               /* CommClause  */
  YYSYMBOL_CommCase = 125,                 /* CommCase  */
  YYSYMBOL_RecvStmt = 126,                 /* RecvStmt  */
  YYSYMBOL_RecvExpr = 127,                 /* RecvExpr  */
  YYSYMBOL_IfStmt = 128,                   /* IfStmt  */
  YYSYMBOL_ElseStmt = 129,                 /* ElseStmt  */
  YYSYMBOL_SwitchStmt = 130,               /* SwitchStmt  */
  YYSYMBOL_ExprSwitchStmt = 131,           /* ExprSwitchStmt  */
  YYSYMBOL_ExprCaseClauseList = 132,       /* ExprCaseClauseList  */
  YYSYMBOL_ExprCaseClause = 133,           /* ExprCaseClause  */
  YYSYMBOL_ExprSwitchCase = 134,           /* ExprSwitchCase  */
  YYSYMBOL_TypeSwitchStmt = 135,           /* TypeSwitchStmt  */
  YYSYMBOL_TypeSwitchCondition = 136,      /* TypeSwitchCondition  */
  YYSYMBOL_TypeSwitchGuard = 137,          /* TypeSwitchGuard  */
  YYSYMBOL_TypeCaseClauseList = 138,       /* TypeCaseClauseList  */
  YYSYMBOL_TypeCaseClause = 139,           /* TypeCaseClause  */
  YYSYMBOL_TypeSwitchCase = 140,           /* TypeSwitchCase  */
  YYSYMBOL_ConstDecl = 141,                /* ConstDecl  */
  YYSYMBOL_ConstStmt = 142,                /* ConstStmt  */
  YYSYMBOL_ConstSpecList = 143,            /* ConstSpecList  */
  YYSYMBOL_ConstSpec = 144,                /* ConstSpec  */
  YYSYMBOL_ConstExpr = 145,                /* ConstExpr  */
  YYSYMBOL_TypeDecl = 146,                 /* TypeDecl  */
  YYSYMBOL_TypeStmt = 147,                 /* TypeStmt  */
  YYSYMBOL_TypeSpecList = 148,             /* TypeSpecList  */
  YYSYMBOL_TypeSpec = 149,                 /* TypeSpec  */
  YYSYMBOL_AliasDecl = 150,                /* AliasDecl  */
  YYSYMBOL_TypeDef = 151,                  /* TypeDef  */
  YYSYMBOL_TypeParameters = 152,           /* TypeParameters  */
  YYSYMBOL_TypeParamList = 153,            /* TypeParamList  */
  YYSYMBOL_TypeParamDecl = 154,            /* TypeParamDecl  */
  YYSYMBOL_TypeConstraint = 155,           /* TypeConstraint  */
  YYSYMBOL_VarDecl = 156,                  /* VarDecl  */
  YYSYMBOL_VarStmt = 157,                  /* VarStmt  */
  YYSYMBOL_VarSpecList = 158,              /* VarSpecList  */
  YYSYMBOL_VarSpec = 159,                  /* VarSpec  */
  YYSYMBOL_SimpleStmt = 160,               /* SimpleStmt  */
  YYSYMBOL_EmptyStatement = 161,           /* EmptyStatement  */
  YYSYMBOL_SendStmt = 162,                 /* SendStmt  */
  YYSYMBOL_Channel = 163,                  /* Channel  */
  YYSYMBOL_IncDecStmt = 164,               /* IncDecStmt  */
  YYSYMBOL_Assignment = 165,               /* Assignment  */
  YYSYMBOL_assign_op = 166,                /* assign_op  */
  YYSYMBOL_ShortVarDecl = 167,             /* ShortVarDecl  */
  YYSYMBOL_ExpressionStmt = 168,           /* ExpressionStmt  */
  YYSYMBOL_Expression = 169,               /* Expression  */
  YYSYMBOL_UnaryExpr = 170,                /* UnaryExpr  */
  YYSYMBOL_PrimaryExpr = 171,              /* PrimaryExpr  */
  YYSYMBOL_Conversion = 172,               /* Conversion  */
  YYSYMBOL_MethodExpr = 173,               /* MethodExpr  */
  YYSYMBOL_ReceiverType = 174,             /* ReceiverType  */
  YYSYMBOL_MethodName = 175,               /* MethodName  */
  YYSYMBOL_Operand = 176,                  /* Operand  */
  YYSYMBOL_Literal = 177,                  /* Literal  */
  YYSYMBOL_BasicLit = 178,                 /* BasicLit  */
  YYSYMBOL_OperandName = 179,              /* OperandName  */
  YYSYMBOL_QualifiedIdent = 180,           /* QualifiedIdent  */
  YYSYMBOL_int_lit = 181,                  /* int_lit  */
  YYSYMBOL_imaginary_lit = 182,            /* imaginary_lit  */
  YYSYMBOL_float_lit = 183,                /* float_lit  */
  YYSYMBOL_FunctionLit = 184,              /* FunctionLit  */
  YYSYMBOL_Block = 185,                    /* Block  */
  YYSYMBOL_Statements = 186,               /* Statements  */
  YYSYMBOL_Selector = 187,                 /* Selector  */
  YYSYMBOL_Index = 188,                    /* Index  */
  YYSYMBOL_Slice = 189,                    /* Slice  */
  YYSYMBOL_TypeAssertion = 190,            /* TypeAssertion  */
  YYSYMBOL_Arguments = 191,                /* Arguments  */
  YYSYMBOL_ExpressionList = 192,           /* ExpressionList  */
  YYSYMBOL_Type = 193,                     /* Type  */
  YYSYMBOL_TypeArgs = 194,                 /* TypeArgs  */
  YYSYMBOL_TypeList = 195,                 /* TypeList  */
  YYSYMBOL_TypeName = 196,                 /* TypeName  */
  YYSYMBOL_TypeLit = 197,                  /* TypeLit  */
  YYSYMBOL_ArrayType = 198,                /* ArrayType  */
  YYSYMBOL_ArrayLength = 199,              /* ArrayLength  */
  YYSYMBOL_ElementType = 200,              /* ElementType  */
  YYSYMBOL_StructType = 201,               /* StructType  */
  YYSYMBOL_FieldDeclList = 202,            /* FieldDeclList  */
  YYSYMBOL_DeclList = 203,                 /* DeclList  */
  YYSYMBOL_FieldDecl = 204,                /* FieldDecl  */
  YYSYMBOL_Tag = 205,                      /* Tag  */
  YYSYMBOL_EmbeddedField = 206,            /* EmbeddedField  */
  YYSYMBOL_PointerType = 207,              /* PointerType  */
  YYSYMBOL_FunctionType = 208,             /* FunctionType  */
  YYSYMBOL_Signature = 209,                /* Signature  */
  YYSYMBOL_Result = 210,                   /* Result  */
  YYSYMBOL_Parameters = 211,               /* Parameters  */
  YYSYMBOL_ParameterList = 212,            /* ParameterList  */
  YYSYMBOL_ParameterDecl = 213,            /* ParameterDecl  */
  YYSYMBOL_IdentifierList = 214,           /* IdentifierList  */
  YYSYMBOL_InterfaceType = 215,            /* InterfaceType  */
  YYSYMBOL_InterfaceElemList = 216,        /* InterfaceElemList  */
  YYSYMBOL_InterfaceElem = 217,            /* InterfaceElem  */
  YYSYMBOL_MethodElem = 218,               /* MethodElem  */
  YYSYMBOL_TypeElem = 219,                 /* TypeElem  */
  YYSYMBOL_TypeTerm = 220,                 /* TypeTerm  */
  YYSYMBOL_SliceType = 221,                /* SliceType  */
  YYSYMBOL_MapType = 222,                  /* MapType  */
  YYSYMBOL_ChannelType = 223,              /* ChannelType  */
  YYSYMBOL_ChanMix = 224,                  /* ChanMix  */
  YYSYMBOL_ChanValues = 225,               /* ChanValues  */
  YYSYMBOL_unary_op = 226,                 /* unary_op  */
  YYSYMBOL_binary_op = 227,                /* binary_op  */
  YYSYMBOL_mul_op = 228,                   /* mul_op  */
  YYSYMBOL_add_op = 229,                   /* add_op  */
  YYSYMBOL_rel_op = 230                    /* rel_op  */
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
#define YYLAST   2118

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  130
/* YYNRULES -- Number of rules.  */
#define YYNRULES  300
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  484

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   335


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
       2,     2,     2,    96,     2,     2,     2,    98,    97,     2,
      89,    90,    83,    81,    93,    82,    88,    84,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    87,     2,
      99,     2,   100,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    91,     2,    92,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,    94,    86,    95,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    30,    30,    31,    34,    35,    36,    38,    39,    40,
      41,    42,    43,    45,    46,    48,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    65,
      66,    67,    69,    70,    72,    74,    75,    76,    78,    80,
      81,    82,    84,    86,    87,    89,    90,    92,    93,    95,
      96,    98,   100,   101,   103,   104,   105,   106,   107,   108,
     110,   111,   112,   114,   116,   117,   119,   120,   121,   125,
     126,   128,   129,   130,   131,   133,   134,   135,   136,   136,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   146,
     151,   152,   153,   154,   156,   157,   158,   159,   160,   161,
     164,   165,   166,   167,   169,   170,   171,   171,   173,   175,
     176,   178,   179,   180,   181,   182,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   195,   196,   197,   198,   199,
     200,   202,   204,   205,   207,   208,   210,   211,   213,   214,
     215,   217,   219,   221,   222,   224,   225,   227,   228,   229,
     230,   231,   232,   233,   234,   236,   237,   239,   240,   241,
     243,   244,   245,   246,   248,   250,   251,   252,   253,   254,
     255,   256,   259,   260,   262,   264,   265,   266,   267,   270,
     271,   272,   275,   277,   279,   281,   282,   285,   287,   288,
     290,   291,   292,   293,   294,   295,   298,   300,   301,   302,
     303,   305,   306,   308,   309,   310,   312,   313,   314,   316,
     317,   319,   320,   322,   323,   324,   325,   326,   327,   328,
     329,   332,   333,   334,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   350,   353,   354,   355,   356,
     357,   359,   360,   361,   364,   365,   367,   368,   369,   370,
     372,   375,   376,   379,   380,   382,   383,   385,   386,   388,
     390,   391,   393,   394,   398,   401,   404,   405,   406,   407,
     408,   409,   411,   412,   413,   414,   415,   416,   417,   419,
     419,   419,   419,   419,   421,   422,   423,   424,   425,   426,
     427,   429,   430,   431,   432,   434,   435,   436,   437,   438,
     439
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
  "ERRORTYPE", "ANYTYPE", "COMPARABLE", "EQ", "INC", "DEC", "SUBEQ",
  "PLUSEQ", "MULEQ", "DIVEQ", "MODEQ", "EQUAL", "NOTEQUAL",
  "GREATEROREQUAL", "LESSOREQUAL", "AND", "OR", "LSHIFT", "RSHIFT", "PEQ",
  "XOR", "SEMICOLON", "AMP_EXP", "POINT", "POINTER", "'+'", "'-'", "'*'",
  "'/'", "'{'", "'}'", "':'", "'.'", "'('", "')'", "'['", "']'", "','",
  "'|'", "'~'", "'!'", "'&'", "'%'", "'<'", "'>'", "$accept", "prog",
  "TopLevelDecl", "FunctionDecl", "FunctionName", "FunctionBody",
  "MethodDecl", "Receiver", "Statement", "ForStmt", "Condition",
  "ForClause", "RangeClause", "DeferStmt", "Declaration", "GoStmt",
  "ReturnStmt", "BreakStmt", "ContinueStmt", "GotoStmt", "Label",
  "SelectStmt", "CommClauseList", "CommClause", "CommCase", "RecvStmt",
  "RecvExpr", "IfStmt", "ElseStmt", "SwitchStmt", "ExprSwitchStmt",
  "ExprCaseClauseList", "ExprCaseClause", "ExprSwitchCase",
  "TypeSwitchStmt", "TypeSwitchCondition", "TypeSwitchGuard",
  "TypeCaseClauseList", "TypeCaseClause", "TypeSwitchCase", "ConstDecl",
  "ConstStmt", "ConstSpecList", "ConstSpec", "ConstExpr", "TypeDecl",
  "TypeStmt", "TypeSpecList", "TypeSpec", "AliasDecl", "TypeDef",
  "TypeParameters", "TypeParamList", "TypeParamDecl", "TypeConstraint",
  "VarDecl", "VarStmt", "VarSpecList", "VarSpec", "SimpleStmt",
  "EmptyStatement", "SendStmt", "Channel", "IncDecStmt", "Assignment",
  "assign_op", "ShortVarDecl", "ExpressionStmt", "Expression", "UnaryExpr",
  "PrimaryExpr", "Conversion", "MethodExpr", "ReceiverType", "MethodName",
  "Operand", "Literal", "BasicLit", "OperandName", "QualifiedIdent",
  "int_lit", "imaginary_lit", "float_lit", "FunctionLit", "Block",
  "Statements", "Selector", "Index", "Slice", "TypeAssertion", "Arguments",
  "ExpressionList", "Type", "TypeArgs", "TypeList", "TypeName", "TypeLit",
  "ArrayType", "ArrayLength", "ElementType", "StructType", "FieldDeclList",
  "DeclList", "FieldDecl", "Tag", "EmbeddedField", "PointerType",
  "FunctionType", "Signature", "Result", "Parameters", "ParameterList",
  "ParameterDecl", "IdentifierList", "InterfaceType", "InterfaceElemList",
  "InterfaceElem", "MethodElem", "TypeElem", "TypeTerm", "SliceType",
  "MapType", "ChannelType", "ChanMix", "ChanValues", "unary_op",
  "binary_op", "mul_op", "add_op", "rel_op", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-383)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-253)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      55,    99,   216,  -383,  -383,    27,    40,    41,    42,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,   585,    70,    25,
    -383,    32,    17,  -383,  -383,  1366,    28,  -383,  -383,  1381,
    1404,    38,  -383,  -383,  -383,  -383,    44,   305,    57,    77,
      75,    83,  1493,   143,  1493,  1493,  -383,   694,  -383,    81,
    -383,  -383,  -383,  -383,  -383,   -36,  -383,  1442,  -383,  -383,
    -383,  -383,  1493,  -383,   170,    44,   105,  1500,  -383,    44,
     170,  -383,   102,   170,   111,  1178,   142,  -383,   116,   170,
    1178,  -383,   155,  1493,   717,  1493,  -383,  -383,   127,   218,
    -383,   222,  -383,  1493,   161,  -383,    10,  -383,  -383,  -383,
     132,    44,   141,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,   143,  -383,  -383,   399,  1178,  1493,
    -383,  -383,  2018,  -383,    -5,  -383,  -383,   145,  -383,  -383,
    -383,    81,  -383,  -383,  -383,  -383,  -383,   146,   144,  1178,
    1493,  -383,  -383,  1311,  1493,  -383,  -383,  -383,  -383,   147,
     150,   281,   105,   534,  -383,  -383,   585,  -383,  -383,  -383,
     105,  -383,  -383,  -383,  2018,   152,  1178,  -383,  -383,   152,
    1178,  -383,    98,  -383,  -383,  -383,  -383,   148,   -18,  -383,
    1493,  -383,   258,  -383,  -383,  -383,   140,    29,   232,    81,
     160,  -383,    10,   217,  1493,  -383,   105,   242,  1848,     0,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    1178,  -383,  -383,  -383,    43,   789,   812,  -383,  -383,  -383,
    -383,  -383,    25,  -383,   884,  1493,  -383,   158,    90,  -383,
    -383,  -383,  -383,   170,  -383,  -383,  -383,  1250,   907,  -383,
     615,   247,   169,  1178,  1178,   247,   247,  1178,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,   175,  -383,  -383,  -383,  -383,
    1652,  -383,   441,  1049,   182,   132,  -383,  1178,   152,   152,
    1493,  -383,  -383,  -383,  -383,   281,    81,  -383,  -383,  -383,
    -383,  -383,   217,  -383,  -383,  -383,  2018,  -383,  1493,  -383,
     -15,   137,   979,  1712,  -383,  -383,    31,  -383,  1493,  -383,
     167,  -383,   183,  1526,    48,  1273,   184,  1568,  1178,   105,
     105,   105,   185,  1610,  1680,   191,  -383,  -383,    51,   152,
    2018,  -383,  -383,  2018,  1178,  -383,  -383,  -383,  1178,   211,
     212,  -383,  -383,  1178,   211,   212,  1178,  2018,  -383,  -383,
    -383,  -383,   187,  -383,  -383,  1178,  -383,  1746,  1002,  -383,
     180,  -383,  -383,  -383,  1178,   267,  1178,  -383,   194,    48,
     195,   -32,   203,    58,  1074,    48,  2018,  -383,  -383,  -383,
    1178,   270,  1155,  1250,  -383,  -383,    66,  -383,   206,  2018,
     152,  -383,  -383,   152,   152,  -383,    50,  1178,  -383,  -383,
    1780,  -383,  1882,     7,  -383,   152,  -383,  -383,   534,  1343,
      82,    46,    48,  1916,   204,   219,  2018,  1178,  1178,  -383,
    -383,  -383,  1814,   -33,   220,  -383,  -383,   534,  -383,  1950,
    1178,  -383,   267,  -383,  -383,   534,    65,  1493,  -383,   208,
      82,   215,  1454,   227,    48,  -383,  1250,  2018,  2018,  1178,
    1178,   534,  -383,  1984,  -383,    47,  -383,  -383,  -383,   534,
     213,  -383,   228,  -383,  -383,  2018,  -383,  -383,  1486,   534,
    -383,  -383,   225,  -383
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     0,     0,     0,     3,
       5,     6,     4,    39,    40,    41,    11,     0,     0,     0,
      14,   252,     0,   116,   117,     0,     0,    90,    91,    99,
       0,     0,   100,   101,   106,   107,     0,   211,     0,     0,
     269,     0,     0,     0,     0,     0,   242,     0,   249,   206,
     204,   213,   214,   215,   216,     0,   245,     0,   217,   218,
     219,   220,     0,   268,     0,     0,     9,   237,   159,     0,
       0,   119,     0,   121,   211,     0,   122,    93,     0,    95,
       0,    96,     0,     0,     0,     0,   109,   103,     0,   105,
     236,     0,   250,     0,     0,   270,   225,   248,   271,   235,
       0,     0,   172,   178,   170,   171,   177,   176,   175,   180,
     181,   169,   179,   275,   278,   272,   273,   276,     0,     0,
     274,   277,   222,   143,   145,   149,   148,     0,   147,   162,
     164,   160,   173,   166,   168,   167,   165,   158,     0,     0,
       0,   203,   241,     0,     0,   247,   223,   266,   267,     0,
     113,     0,    10,   131,     8,    12,     0,   240,   238,   239,
       0,   251,   118,   120,   201,   124,     0,    92,    94,    98,
       0,   108,   172,   110,   102,   104,   212,     0,   211,   254,
       0,   262,     0,   256,   257,   258,   261,   252,     0,   206,
       0,   226,   228,   231,     0,   205,   236,     0,     0,   158,
     264,   295,   296,   300,   299,   280,   279,   287,   288,   291,
     290,   293,   294,   284,   285,   292,   289,   286,   297,   298,
       0,   283,   282,   281,     0,     0,     0,   150,   151,   152,
     153,   154,     0,   161,     0,     0,   146,   210,     0,   243,
     244,   246,   111,     0,   114,   115,     7,   131,   131,    22,
      33,    46,     0,    44,     0,    50,    48,     0,   186,    27,
      28,    15,    17,    18,    19,    20,    21,    26,    24,    25,
      69,    70,    16,   125,   127,     0,   128,   129,   130,   126,
     142,    23,     0,     0,     0,   249,    13,     0,   123,    97,
       0,   259,   263,   253,   255,     0,   206,   234,   224,   227,
     232,   230,   231,   182,   174,   163,   144,   187,     0,   200,
       0,   158,     0,     0,   157,   156,     0,   221,     0,   207,
       0,   112,     0,   133,     0,     0,     0,   133,     0,     0,
       0,     0,     0,    32,     0,     0,    51,    45,     0,    43,
      42,    49,    47,    38,     0,   138,   134,   135,     0,   283,
     282,   184,   185,     0,     0,     0,     0,   202,   265,   260,
     233,   229,     0,   197,   198,     0,   193,     0,     0,   188,
       0,   155,   209,   208,     0,    68,     0,    79,     0,    76,
       0,   172,     0,     0,     0,     0,    37,    29,    30,    31,
      33,   138,     0,     0,    59,    53,     0,    55,     0,   132,
     137,   140,   139,   136,   141,   196,     0,     0,   191,   192,
       0,   189,     0,     0,    65,    78,    74,    75,   131,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,    58,
      62,    57,   201,     0,     0,    52,    54,   131,   199,     0,
       0,   190,    68,    66,    67,    77,     0,     0,    89,     0,
      86,     0,     0,     0,     0,    73,   131,    35,    36,     0,
       0,    56,   195,     0,    64,     0,    88,    80,    85,   131,
       0,    72,     0,    34,    60,    63,    61,   194,     0,    87,
      84,    71,     0,    83
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -383,  -383,  -383,  -383,  -383,  -101,  -383,  -383,  -281,  -383,
     -92,  -383,  -383,  -383,   303,  -383,  -383,  -383,  -383,  -383,
     -24,  -383,  -383,   -90,  -383,  -383,  -240,   -97,  -125,  -383,
    -383,  -316,  -383,  -383,  -383,  -383,  -383,  -132,  -383,  -383,
    -383,  -383,   240,   314,  -383,  -383,  -383,   233,   316,  -383,
    -383,   295,    84,  -383,  -383,  -383,  -383,   253,   324,  -243,
    -383,   -60,  -383,  -383,  -383,  -253,  -383,  -383,   -45,   201,
    -315,  -383,  -383,  -383,   110,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,   -55,  -382,  -383,  -383,  -383,  -383,
    -383,   -56,   -17,  -117,  -303,   -79,  -383,  -383,  -383,  -116,
    -383,  -383,   151,  -383,    49,  -383,  -383,  -383,   -27,  -383,
      24,  -383,   207,    15,  -383,  -383,   164,  -383,  -145,  -383,
    -383,  -383,  -383,  -383,   272,  -383,  -383,  -138,  -123,  -383
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     9,    10,    18,   154,    11,    19,   258,   259,
     329,   330,   331,   260,   261,   262,   263,   264,   265,   266,
     337,   267,   396,   397,   398,   429,   430,   268,   414,   269,
     270,   378,   379,   380,   271,   325,   382,   449,   450,   451,
      13,    27,    78,    79,    81,    14,    32,    88,    89,    34,
      35,    65,   149,   150,   244,    15,    23,    72,    73,   272,
     273,   274,   275,   276,   277,   348,   278,   279,   164,   123,
     124,   125,   126,   127,    69,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   281,   282,   227,   228,   229,   230,
     231,   283,   137,   141,   238,    49,    50,    51,   138,   147,
      52,   190,   191,   192,   301,   193,    53,    54,    66,   158,
      67,    55,    56,   284,    58,   182,   183,   184,   185,   186,
      59,    60,    61,    62,    63,   139,   220,   221,   222,   223
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,   352,   122,   200,   322,   326,   245,   332,    76,    90,
     383,   155,    82,    86,   233,   372,   187,   189,   247,   165,
      92,    25,    29,    21,   169,    97,   459,    99,   100,    20,
     353,    68,    57,    16,    21,  -211,   445,    25,   152,   122,
     145,    29,   160,   419,    30,   146,    21,    21,    30,   307,
     157,   246,   307,   307,   142,   461,   197,   143,     1,   286,
     287,  -211,   376,   417,   377,   393,   171,   394,   173,   424,
      91,    17,   297,   198,   196,   363,   177,   181,   287,   151,
     393,   353,   394,   224,   225,   161,   226,   479,    25,   234,
     195,   159,   153,   188,    29,   303,   447,   155,   448,   151,
      99,   199,   146,     3,   446,   155,   453,    71,   280,   296,
     288,   194,  -211,   189,   289,  -211,    17,    91,    77,   317,
    -211,   371,    70,   237,   287,    70,    48,   241,    87,    22,
      26,    31,   308,    17,   181,   452,   478,   395,   472,   285,
     438,   155,   349,   287,   466,   354,   421,   225,    93,   226,
     359,   291,   435,   465,   225,    95,   226,   350,    57,    17,
     355,    64,    94,   292,   352,   181,    36,   178,    96,   310,
      98,    57,   140,  -252,   358,   306,    21,   302,   316,   360,
     352,   313,   319,   320,    38,   349,   197,    39,    40,   349,
     153,    70,   162,  -252,   334,   349,   354,   339,   352,    91,
     350,   166,   323,   327,   350,   333,   167,   194,   311,   340,
     350,   355,   343,   473,   170,    41,     4,   174,   146,   474,
     476,     5,   195,     6,    30,     7,   234,   364,   176,   197,
     365,   341,   342,   232,   295,   234,   235,   280,    74,   242,
     290,    43,   357,   243,    44,   287,   298,   179,   304,   300,
      45,   318,    47,   336,   338,   344,   180,   356,   151,   373,
     374,   384,   390,    36,   178,   335,   392,   367,   375,     8,
     401,   402,   411,   146,   387,   388,   389,   405,   181,   413,
     416,    38,   418,   386,    39,    40,    36,    74,   420,   427,
     455,   362,   400,   437,   467,   460,   456,   403,   425,   399,
     404,   237,   469,   480,    38,    12,   436,    39,    40,   406,
      36,    74,    41,   471,   481,   483,   443,   464,   468,   168,
     415,    28,   175,   410,    33,    85,   163,   321,    38,   412,
      24,    39,    40,   431,   148,    41,   404,   433,    43,   423,
     236,    44,   314,   299,   293,   426,   294,    45,   432,    47,
     240,   361,     0,   180,     0,     0,     0,   442,   444,    41,
       0,    43,   439,     0,    44,     0,     0,     0,     0,     0,
      45,     0,    47,   280,     0,     0,   180,     0,     0,     0,
       0,     0,   457,   458,  -252,    43,     0,     0,    44,     0,
       0,     0,   280,    91,    45,   463,    47,     0,    70,     0,
     280,     0,     0,     0,    36,    74,     0,     0,   434,     0,
       0,   280,     0,     0,   475,   475,   280,     0,     0,     0,
       0,     0,    38,     0,   280,    39,    40,     0,     0,     0,
     237,     0,     0,     0,   280,   362,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   172,     6,     0,
       7,     0,   247,    41,   248,     0,   249,     0,   250,   251,
       0,   362,   252,   253,    38,   254,   255,    39,    40,   256,
     257,   103,     0,   104,   105,     0,   106,   107,   108,    43,
     109,   110,   111,   112,     0,     0,     0,     0,    45,     0,
      47,     0,     0,     0,     8,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,     0,     0,
       0,   114,   115,   116,   117,     0,   153,   351,     0,     0,
     118,     0,    47,     0,     0,     0,     0,   120,   121,   101,
     172,     6,     0,     7,     0,   247,     0,   248,     0,   249,
       0,   250,   251,     0,     0,   252,   253,    38,   254,   255,
      39,    40,   256,   257,   103,     0,   104,   105,     0,   106,
     107,   108,     0,   109,   110,   111,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     8,    41,     0,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
     113,    39,    40,     0,   114,   115,   116,   117,     0,   153,
     101,   172,     0,   118,     0,    47,     0,     0,     0,     0,
     120,   121,     0,     0,   328,     0,     0,     0,    38,    41,
       0,    39,    40,     0,     0,   103,     0,   104,   105,     0,
     106,   107,   108,     0,   109,   110,   111,   112,     0,     0,
       0,     0,     0,     0,    42,    43,     0,     0,    44,    41,
       0,     0,     0,     0,    45,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,  -131,     0,     0,   114,   115,   116,   117,   101,
     102,     0,     0,     0,   118,     0,    47,     0,     0,     0,
       0,   120,   121,     0,     0,     0,     0,    38,     0,     0,
      39,    40,   101,   172,   103,     0,   104,   105,     0,   106,
     107,   108,     0,   109,   110,   111,   112,     0,     0,     0,
      38,     0,     0,    39,    40,     0,     0,   103,    41,   104,
     105,     0,   106,   107,   108,     0,   109,   110,   111,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,    41,     0,     0,   114,   115,   116,   117,     0,     0,
       0,     0,     0,   118,     0,    47,   119,     0,     0,     0,
     120,   121,     0,   113,   101,   102,     0,   114,   115,   116,
     117,     0,     0,     0,     0,     0,   118,     0,    47,   119,
       0,     0,    38,   120,   121,    39,    40,   101,   102,   103,
       0,   104,   105,     0,   106,   107,   108,     0,   109,   110,
     111,   112,     0,     0,     0,    38,     0,     0,    39,    40,
       0,     0,   103,    41,   104,   105,     0,   106,   107,   108,
       0,   109,   110,   111,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,    41,     0,     0,   114,
     115,   116,   117,     0,     0,     0,     0,     0,   118,   309,
      47,     0,     0,     0,     0,   120,   121,     0,   113,   101,
     102,     0,   114,   115,   116,   117,     0,     0,     0,   312,
       0,   118,     0,    47,     0,     0,     0,    38,   120,   121,
      39,    40,   101,   172,   103,     0,   104,   105,     0,   106,
     107,   108,     0,   109,   110,   111,   112,     0,     0,     0,
      38,     0,     0,    39,    40,     0,     0,   103,    41,   104,
     105,     0,   106,   107,   108,     0,   109,   110,   111,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,    41,     0,     0,   114,   115,   116,   117,     0,     0,
       0,     0,     0,   118,   315,    47,     0,     0,     0,     0,
     120,   121,     0,   113,   101,   102,     0,   114,   115,   116,
     117,     0,   324,     0,     0,     0,   118,     0,    47,     0,
       0,     0,    38,   120,   121,    39,    40,   101,   102,   103,
       0,   104,   105,     0,   106,   107,   108,     0,   109,   110,
     111,   112,     0,     0,     0,    38,     0,     0,    39,    40,
       0,     0,   103,    41,   104,   105,     0,   106,   107,   108,
       0,   109,   110,   111,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,    41,     0,     0,   114,
     115,   116,   117,     0,     0,     0,     0,     0,   118,     0,
      47,   366,     0,     0,     0,   120,   121,     0,   113,   101,
     102,     0,   114,   115,   116,   117,     0,     0,     0,     0,
       0,   118,     0,    47,   409,     0,     0,    38,   120,   121,
      39,    40,     0,     0,   103,     0,   104,   105,   345,   106,
     107,   108,     0,   109,   110,   111,   112,     0,     0,     0,
       0,     0,   207,   208,     0,   209,     0,   210,    41,     0,
     211,   212,   213,   214,     0,     0,     0,     0,     0,     0,
       0,     0,   287,   215,     0,     0,   216,   217,     0,     0,
     113,     0,     0,     0,   114,   115,   116,   117,     0,   422,
     101,   102,     0,   118,     0,    47,     0,     0,     0,     0,
     120,   121,     0,     0,   428,     0,     0,     0,    38,     0,
       0,    39,    40,   101,   102,   103,     0,   104,   105,     0,
     106,   107,   108,     0,   109,   110,   111,   112,     0,     0,
       0,    38,     0,     0,    39,    40,     0,     0,   103,    41,
     104,   105,     0,   106,   107,   108,     0,   109,   110,   111,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,    41,     0,     0,   114,   115,   116,   117,     0,
       0,     0,     0,     0,   118,     0,    47,     0,     0,     0,
       0,   120,   121,     0,   113,   101,   172,     0,   114,   115,
     116,   117,     0,     0,     0,     0,     0,   118,     0,    47,
       0,     0,     0,    38,   120,   121,    39,    40,   101,   381,
     103,     0,   104,   105,     0,   106,   107,   108,     0,   109,
     110,   111,   112,     0,     0,     0,    38,     0,     0,    39,
      40,     0,     0,   103,    41,   104,   105,     0,   106,   107,
     108,     0,   109,   110,   111,   112,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     0,   113,    41,     0,     0,
     114,   115,   116,   117,    38,     0,     0,    39,    40,   118,
       0,    47,     0,     0,     0,     0,   120,   121,   101,   102,
       0,     0,     0,    43,     0,     0,    44,     0,     0,     0,
       0,     0,   118,     0,    47,    41,    38,     0,     0,    39,
      40,    36,    74,   103,     0,   104,   105,     0,   106,   107,
     108,     0,   109,   110,   111,   112,    36,    74,     0,    38,
      42,    43,    39,    40,    44,     0,     0,    41,     0,     0,
      45,   239,    47,     0,    38,     0,     0,    39,    40,    36,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      41,     0,     0,    43,     0,    75,    44,    38,     0,     0,
      39,    40,   118,     0,    47,    41,     0,     0,     0,     0,
      80,     0,     0,     0,     0,     0,    43,    36,    74,    44,
       0,     0,     0,     0,     0,    45,     0,    47,    41,    36,
      74,    43,     0,    83,    44,    38,     0,     0,    39,    40,
      45,     0,    47,     0,     0,     0,     0,    38,     0,     0,
      39,    40,     0,     0,    43,     0,     0,    44,     0,     0,
       0,    36,    74,    45,     0,    84,    41,     0,    36,    74,
       0,     0,     0,     0,     0,    36,    74,   470,    41,    38,
       0,     0,    39,    40,     0,     0,    38,     0,     0,    39,
      40,   144,    43,    38,     0,    44,    39,    40,     0,     0,
       0,    45,     0,    47,    43,     0,     0,    44,     0,   482,
      41,     0,     0,    45,     0,    47,     0,    41,     0,     0,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,     0,     0,    44,
       0,     0,     0,    43,     0,    45,    44,    47,     0,     0,
      43,     0,    45,    44,    47,   345,   346,   347,     0,   156,
       0,    47,     0,   201,   202,   203,   204,   205,   206,   207,
     208,     0,   209,  -142,   210,     0,     0,   211,   212,   213,
     214,   153,     0,     0,     0,     0,     0,     0,     0,  -201,
     215,     0,     0,   216,   217,   218,   219,   345,   346,   347,
       0,     0,     0,     0,     0,   201,   202,   203,   204,   205,
     206,   207,   208,     0,   209,  -142,   210,     0,     0,   211,
     212,   213,   214,   385,     0,     0,     0,     0,     0,     0,
       0,  -201,   215,     0,     0,   216,   217,   218,   219,   345,
     346,   347,     0,     0,     0,     0,     0,   201,   202,   203,
     204,   205,   206,   207,   208,     0,   209,  -142,   210,     0,
    -133,   211,   212,   213,   214,     0,     0,     0,     0,     0,
       0,     0,     0,  -201,   215,     0,     0,   216,   217,   218,
     219,   345,   346,   347,     0,     0,     0,     0,     0,   201,
     202,   203,   204,   205,   206,   207,   208,     0,   209,     0,
     210,     0,  -133,   211,   212,   213,   214,     0,     0,   391,
       0,     0,     0,     0,     0,  -201,   215,     0,     0,   216,
     217,   218,   219,   207,   208,     0,   209,     0,   210,     0,
       0,   211,   212,   213,   214,     0,     0,     0,     0,     0,
       0,     0,     0,   287,   215,     0,     0,   216,   217,   201,
     202,   203,   204,   205,   206,   207,   208,     0,   209,     0,
     210,     0,     0,   211,   212,   213,   214,     0,     0,   368,
       0,     0,     0,     0,   369,   370,   215,     0,     0,   216,
     217,   218,   219,   201,   202,   203,   204,   205,   206,   207,
     208,     0,   209,     0,   210,     0,     0,   211,   212,   213,
     214,     0,     0,   407,     0,     0,     0,     0,   408,     0,
     215,     0,     0,   216,   217,   218,   219,   201,   202,   203,
     204,   205,   206,   207,   208,     0,   209,     0,   210,     0,
       0,   211,   212,   213,   214,     0,     0,   440,     0,     0,
       0,     0,   441,     0,   215,     0,     0,   216,   217,   218,
     219,   201,   202,   203,   204,   205,   206,   207,   208,     0,
     209,     0,   210,     0,  -133,   211,   212,   213,   214,     0,
       0,   -63,     0,     0,     0,     0,     0,     0,   215,     0,
       0,   216,   217,   218,   219,   201,   202,   203,   204,   205,
     206,   207,   208,     0,   209,     0,   210,     0,     0,   211,
     212,   213,   214,     0,     0,     0,     0,     0,   305,     0,
       0,     0,   215,     0,     0,   216,   217,   218,   219,   201,
     202,   203,   204,   205,   206,   207,   208,     0,   209,     0,
     210,     0,     0,   211,   212,   213,   214,   153,     0,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,   216,
     217,   218,   219,   201,   202,   203,   204,   205,   206,   207,
     208,     0,   209,     0,   210,     0,     0,   211,   212,   213,
     214,   454,     0,     0,     0,     0,     0,     0,     0,     0,
     215,     0,     0,   216,   217,   218,   219,   201,   202,   203,
     204,   205,   206,   207,   208,     0,   209,     0,   210,     0,
       0,   211,   212,   213,   214,     0,     0,     0,     0,     0,
       0,     0,   462,     0,   215,     0,     0,   216,   217,   218,
     219,   201,   202,   203,   204,   205,   206,   207,   208,     0,
     209,     0,   210,     0,     0,   211,   212,   213,   214,     0,
       0,     0,     0,     0,     0,     0,   477,     0,   215,     0,
       0,   216,   217,   218,   219,   201,   202,   203,   204,   205,
     206,   207,   208,     0,   209,     0,   210,     0,     0,   211,
     212,   213,   214,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   215,     0,     0,   216,   217,   218,   219
};

static const yytype_int16 yycheck[] =
{
      17,   282,    47,   119,   247,   248,   151,   250,    25,    36,
     325,    66,    29,    30,   131,   318,     6,    96,    11,    75,
      37,     6,     7,     6,    80,    42,    59,    44,    45,     5,
     283,     6,    17,     6,     6,     6,   418,    22,    65,    84,
      57,    26,    69,    75,     6,    62,     6,     6,     6,     6,
      67,   152,     6,     6,    90,   437,    88,    93,     3,   160,
      93,    32,    14,   379,    16,    14,    83,    16,    85,   385,
      88,    89,   189,   118,   101,    90,    93,    94,    93,    64,
      14,   334,    16,    88,    89,    70,    91,   469,    73,    89,
      90,    67,    85,    83,    79,   196,    14,   152,    16,    84,
     117,   118,   119,     4,   419,   160,   422,    90,   153,   188,
     166,    96,    83,   192,   170,    86,    89,    88,    90,   235,
      91,    90,    93,   140,    93,    93,   143,   144,    90,    89,
      89,    89,    89,    89,   151,    89,    89,    86,   454,   156,
      90,   196,   280,    93,   447,   283,    88,    89,    91,    91,
     295,   178,    86,    88,    89,    80,    91,   280,   143,    89,
     283,    91,    85,   180,   445,   182,     5,     6,    85,   225,
      27,   156,    91,    75,   290,   220,     6,   194,   234,   296,
     461,   226,    92,    93,    23,   323,    88,    26,    27,   327,
      85,    93,    90,    95,   250,   333,   334,   253,   479,    88,
     323,    59,   247,   248,   327,   250,    90,   192,   225,   254,
     333,   334,   257,   456,    59,    54,     0,    90,   235,   459,
     460,     5,    90,     7,     6,     9,    89,    90,     6,    88,
      93,   255,   256,    88,    94,    89,    92,   282,     6,    92,
      92,    80,   287,    93,    83,    93,    86,    86,     6,    32,
      89,    93,    91,     6,    85,    80,    95,    75,   243,    92,
      77,    77,    77,     5,     6,   250,    75,   312,   323,    53,
      59,    59,    92,   290,   329,   330,   331,    90,   295,    12,
      86,    23,    87,   328,    26,    27,     5,     6,    85,    19,
      86,   308,   348,    87,    86,    75,    77,   353,   390,   344,
     356,   318,    87,    90,    23,     2,   396,    26,    27,   365,
       5,     6,    54,    86,    86,    90,   413,   442,   450,    79,
     376,     7,    89,   368,     8,    30,    73,   243,    23,   374,
       6,    26,    27,   393,    62,    54,   392,   393,    80,   384,
     139,    83,   232,   192,    86,   390,   182,    89,   393,    91,
     143,   302,    -1,    95,    -1,    -1,    -1,   412,   413,    54,
      -1,    80,   407,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    91,   418,    -1,    -1,    95,    -1,    -1,    -1,
      -1,    -1,   427,   428,    79,    80,    -1,    -1,    83,    -1,
      -1,    -1,   437,    88,    89,   440,    91,    -1,    93,    -1,
     445,    -1,    -1,    -1,     5,     6,    -1,    -1,   393,    -1,
      -1,   456,    -1,    -1,   459,   460,   461,    -1,    -1,    -1,
      -1,    -1,    23,    -1,   469,    26,    27,    -1,    -1,    -1,
     447,    -1,    -1,    -1,   479,   452,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,
       9,    -1,    11,    54,    13,    -1,    15,    -1,    17,    18,
      -1,   478,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    -1,    35,    36,    37,    80,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    89,    -1,
      91,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    80,    81,    82,    83,    -1,    85,    86,    -1,    -1,
      89,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,     5,
       6,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,
      -1,    17,    18,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      36,    37,    -1,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      76,    26,    27,    -1,    80,    81,    82,    83,    -1,    85,
       5,     6,    -1,    89,    -1,    91,    -1,    -1,    -1,    -1,
      96,    97,    -1,    -1,    19,    -1,    -1,    -1,    23,    54,
      -1,    26,    27,    -1,    -1,    30,    -1,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    83,    54,
      -1,    -1,    -1,    -1,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    -1,    -1,    80,    81,    82,    83,     5,
       6,    -1,    -1,    -1,    89,    -1,    91,    -1,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      26,    27,     5,     6,    30,    -1,    32,    33,    -1,    35,
      36,    37,    -1,    39,    40,    41,    42,    -1,    -1,    -1,
      23,    -1,    -1,    26,    27,    -1,    -1,    30,    54,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    54,    -1,    -1,    80,    81,    82,    83,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    76,     5,     6,    -1,    80,    81,    82,
      83,    -1,    -1,    -1,    -1,    -1,    89,    -1,    91,    92,
      -1,    -1,    23,    96,    97,    26,    27,     5,     6,    30,
      -1,    32,    33,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,
      -1,    -1,    30,    54,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    54,    -1,    -1,    80,
      81,    82,    83,    -1,    -1,    -1,    -1,    -1,    89,    90,
      91,    -1,    -1,    -1,    -1,    96,    97,    -1,    76,     5,
       6,    -1,    80,    81,    82,    83,    -1,    -1,    -1,    87,
      -1,    89,    -1,    91,    -1,    -1,    -1,    23,    96,    97,
      26,    27,     5,     6,    30,    -1,    32,    33,    -1,    35,
      36,    37,    -1,    39,    40,    41,    42,    -1,    -1,    -1,
      23,    -1,    -1,    26,    27,    -1,    -1,    30,    54,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    54,    -1,    -1,    80,    81,    82,    83,    -1,    -1,
      -1,    -1,    -1,    89,    90,    91,    -1,    -1,    -1,    -1,
      96,    97,    -1,    76,     5,     6,    -1,    80,    81,    82,
      83,    -1,    85,    -1,    -1,    -1,    89,    -1,    91,    -1,
      -1,    -1,    23,    96,    97,    26,    27,     5,     6,    30,
      -1,    32,    33,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,
      -1,    -1,    30,    54,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    54,    -1,    -1,    80,
      81,    82,    83,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      91,    92,    -1,    -1,    -1,    96,    97,    -1,    76,     5,
       6,    -1,    80,    81,    82,    83,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    91,    92,    -1,    -1,    23,    96,    97,
      26,    27,    -1,    -1,    30,    -1,    32,    33,    59,    35,
      36,    37,    -1,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    73,    74,    -1,    76,    -1,    78,    54,    -1,
      81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    94,    -1,    -1,    97,    98,    -1,    -1,
      76,    -1,    -1,    -1,    80,    81,    82,    83,    -1,    85,
       5,     6,    -1,    89,    -1,    91,    -1,    -1,    -1,    -1,
      96,    97,    -1,    -1,    19,    -1,    -1,    -1,    23,    -1,
      -1,    26,    27,     5,     6,    30,    -1,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,    -1,    -1,
      -1,    23,    -1,    -1,    26,    27,    -1,    -1,    30,    54,
      32,    33,    -1,    35,    36,    37,    -1,    39,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    54,    -1,    -1,    80,    81,    82,    83,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    91,    -1,    -1,    -1,
      -1,    96,    97,    -1,    76,     5,     6,    -1,    80,    81,
      82,    83,    -1,    -1,    -1,    -1,    -1,    89,    -1,    91,
      -1,    -1,    -1,    23,    96,    97,    26,    27,     5,     6,
      30,    -1,    32,    33,    -1,    35,    36,    37,    -1,    39,
      40,    41,    42,    -1,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    54,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    54,    -1,    -1,
      80,    81,    82,    83,    23,    -1,    -1,    26,    27,    89,
      -1,    91,    -1,    -1,    -1,    -1,    96,    97,     5,     6,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    91,    54,    23,    -1,    -1,    26,
      27,     5,     6,    30,    -1,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,     5,     6,    -1,    23,
      79,    80,    26,    27,    83,    -1,    -1,    54,    -1,    -1,
      89,    90,    91,    -1,    23,    -1,    -1,    26,    27,     5,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    80,    -1,    59,    83,    23,    -1,    -1,
      26,    27,    89,    -1,    91,    54,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    80,     5,     6,    83,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    91,    54,     5,
       6,    80,    -1,    59,    83,    23,    -1,    -1,    26,    27,
      89,    -1,    91,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      26,    27,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      -1,     5,     6,    89,    -1,    91,    54,    -1,     5,     6,
      -1,    -1,    -1,    -1,    -1,     5,     6,    53,    54,    23,
      -1,    -1,    26,    27,    -1,    -1,    23,    -1,    -1,    26,
      27,    79,    80,    23,    -1,    83,    26,    27,    -1,    -1,
      -1,    89,    -1,    91,    80,    -1,    -1,    83,    -1,    53,
      54,    -1,    -1,    89,    -1,    91,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    -1,    -1,    80,    -1,    89,    83,    91,    -1,    -1,
      80,    -1,    89,    83,    91,    59,    60,    61,    -1,    89,
      -1,    91,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    77,    78,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      94,    -1,    -1,    97,    98,    99,   100,    59,    60,    61,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    78,    -1,    -1,    81,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    94,    -1,    -1,    97,    98,    99,   100,    59,
      60,    61,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    78,    -1,
      80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    94,    -1,    -1,    97,    98,    99,
     100,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    -1,
      78,    -1,    80,    81,    82,    83,    84,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    -1,    97,
      98,    99,   100,    73,    74,    -1,    76,    -1,    78,    -1,
      -1,    81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    94,    -1,    -1,    97,    98,    67,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    -1,
      78,    -1,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    92,    93,    94,    -1,    -1,    97,
      98,    99,   100,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    -1,    78,    -1,    -1,    81,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    92,    -1,
      94,    -1,    -1,    97,    98,    99,   100,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    -1,    78,    -1,
      -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    92,    -1,    94,    -1,    -1,    97,    98,    99,
     100,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    -1,    78,    -1,    80,    81,    82,    83,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    97,    98,    99,   100,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    -1,    78,    -1,    -1,    81,
      82,    83,    84,    -1,    -1,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    94,    -1,    -1,    97,    98,    99,   100,    67,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    -1,
      78,    -1,    -1,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    97,
      98,    99,   100,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    -1,    78,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    97,    98,    99,   100,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    -1,    78,    -1,
      -1,    81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    94,    -1,    -1,    97,    98,    99,
     100,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    -1,    78,    -1,    -1,    81,    82,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    94,    -1,
      -1,    97,    98,    99,   100,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    -1,    78,    -1,    -1,    81,
      82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    97,    98,    99,   100
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,   102,     4,     0,     5,     7,     9,    53,   103,
     104,   107,   115,   141,   146,   156,     6,    89,   105,   108,
     211,     6,    89,   157,   159,   214,    89,   142,   144,   214,
       6,    89,   147,   149,   150,   151,     5,     6,    23,    26,
      27,    54,    79,    80,    83,    89,    90,    91,   193,   196,
     197,   198,   201,   207,   208,   212,   213,   214,   215,   221,
     222,   223,   224,   225,    91,   152,   209,   211,     6,   175,
      93,    90,   158,   159,     6,    59,   193,    90,   143,   144,
      59,   145,   193,    59,    91,   152,   193,    90,   148,   149,
     209,    88,   193,    91,    85,    80,    85,   193,    27,   193,
     193,     5,     6,    30,    32,    33,    35,    36,    37,    39,
      40,    41,    42,    76,    80,    81,    82,    83,    89,    92,
      96,    97,   169,   170,   171,   172,   173,   174,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   193,   199,   226,
      91,   194,    90,    93,    79,   193,   193,   200,   225,   153,
     154,   214,   209,    85,   106,   185,    89,   193,   210,   211,
     209,   214,    90,   158,   169,   192,    59,    90,   143,   192,
      59,   193,     6,   193,    90,   148,     6,   193,     6,    86,
      95,   193,   216,   217,   218,   219,   220,     6,    83,   196,
     202,   203,   204,   206,   214,    90,   209,    88,   169,   193,
     200,    67,    68,    69,    70,    71,    72,    73,    74,    76,
      78,    81,    82,    83,    84,    94,    97,    98,    99,   100,
     227,   228,   229,   230,    88,    89,    91,   187,   188,   189,
     190,   191,    88,   194,    89,    92,   170,   193,   195,    90,
     213,   193,    92,    93,   155,   219,   106,    11,    13,    15,
      17,    18,    21,    22,    24,    25,    28,    29,   109,   110,
     114,   115,   116,   117,   118,   119,   120,   122,   128,   130,
     131,   135,   160,   161,   162,   163,   164,   165,   167,   168,
     169,   185,   186,   192,   214,   193,   106,    93,   192,   192,
      92,   209,   193,    86,   217,    94,   196,   194,    86,   203,
      32,   205,   193,   106,     6,    90,   169,     6,    89,    90,
     192,   193,    87,   169,   175,    90,   192,   200,    93,    92,
      93,   153,   160,   169,    85,   136,   160,   169,    19,   111,
     112,   113,   160,   169,   192,   214,     6,   121,    85,   192,
     169,   121,   121,   169,    80,    59,    60,    61,   166,   228,
     229,    86,   109,   166,   228,   229,    75,   169,   200,   219,
     194,   205,   193,    90,    90,    93,    92,   169,    87,    92,
      93,    90,   195,    92,    77,   185,    14,    16,   132,   133,
     134,     6,   137,   171,    77,    85,   169,   185,   185,   185,
      77,    59,    75,    14,    16,    86,   123,   124,   125,   169,
     192,    59,    59,   192,   192,    90,   192,    87,    92,    92,
     169,    92,   169,    12,   129,   192,    86,   132,    87,    75,
      85,    88,    85,   169,   132,   111,   169,    19,    19,   126,
     127,   162,   169,   192,   214,    86,   124,    87,    90,   169,
      87,    92,   185,   128,   185,   186,   171,    14,    16,   138,
     139,   140,    89,   132,    85,    86,    77,   169,   169,    59,
      75,   186,    92,   169,   129,    88,   195,    86,   138,    87,
      53,    86,   132,   160,   127,   169,   127,    92,    89,   186,
      90,    86,    53,    90
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   102,   103,   103,   103,   104,   104,   104,
     104,   105,   106,   107,   108,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   110,
     110,   110,   111,   111,   112,   113,   113,   113,   114,   115,
     115,   115,   116,   117,   117,   118,   118,   119,   119,   120,
     120,   121,   122,   122,   123,   123,   124,   125,   125,   125,
     126,   126,   126,   127,   128,   128,   129,   129,   129,   130,
     130,   131,   131,   131,   131,   132,   132,   133,   134,   134,
     135,   136,   136,   137,   137,   138,   138,   139,   140,   140,
     141,   142,   142,   142,   143,   143,   144,   145,   145,   145,
     146,   147,   147,   147,   148,   148,   149,   149,   150,   151,
     151,   152,   153,   153,   154,   155,   156,   157,   157,   157,
     158,   158,   159,   159,   159,   160,   160,   160,   160,   160,
     160,   161,   162,   163,   164,   164,   165,   165,   166,   166,
     166,   167,   168,   169,   169,   170,   170,   171,   171,   171,
     171,   171,   171,   171,   171,   172,   172,   173,   174,   175,
     176,   176,   176,   176,   177,   177,   178,   178,   178,   178,
     178,   178,   179,   179,   180,   181,   181,   181,   181,   182,
     183,   183,   184,   106,   185,   186,   186,   187,   188,   188,
     189,   189,   189,   189,   189,   189,   190,   191,   191,   191,
     191,   192,   192,   193,   193,   193,   194,   194,   194,   195,
     195,   196,   196,   197,   197,   197,   197,   197,   197,   197,
     197,   198,   199,   200,   201,   202,   202,   203,   203,   204,
     204,   205,   205,   206,   206,   207,   208,   209,   209,   210,
     210,   211,   211,   211,   212,   212,   213,   213,   213,   213,
     213,   214,   214,   215,   215,   216,   216,   217,   217,   218,
     219,   219,   220,   220,   221,   222,   223,   224,   224,   225,
     225,   225,   226,   226,   226,   226,   226,   226,   226,   227,
     227,   227,   227,   227,   228,   228,   228,   228,   228,   228,
     228,   229,   229,   229,   229,   230,   230,   230,   230,   230,
     230
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     1,     5,     4,     3,
       4,     1,     1,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     1,     0,     5,     4,     4,     2,     2,     1,
       1,     1,     2,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     4,     3,     2,     1,     3,     2,     2,     1,
       3,     3,     1,     1,     6,     4,     2,     2,     0,     1,
       1,     7,     6,     5,     4,     2,     1,     3,     2,     1,
       6,     0,     2,     7,     5,     2,     1,     3,     2,     1,
       2,     1,     3,     2,     2,     1,     2,     3,     2,     0,
       2,     1,     3,     2,     2,     1,     1,     1,     3,     2,
       3,     3,     3,     1,     2,     1,     2,     1,     3,     2,
       2,     1,     2,     4,     3,     1,     1,     1,     1,     1,
       1,     0,     3,     1,     2,     2,     3,     3,     1,     2,
       2,     3,     1,     1,     3,     1,     2,     1,     1,     1,
       2,     2,     2,     2,     2,     4,     3,     3,     1,     1,
       1,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     2,     1,     2,     3,     4,
       5,     4,     4,     3,     7,     6,     4,     3,     3,     5,
       2,     1,     3,     2,     1,     3,     0,     3,     4,     3,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     4,     0,     1,     2,     1,     3,
       2,     0,     1,     3,     2,     2,     2,     1,     2,     1,
       1,     3,     2,     4,     3,     1,     3,     2,     2,     1,
       2,     3,     1,     4,     3,     2,     1,     1,     1,     2,
       3,     1,     1,     2,     3,     5,     2,     2,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 30 "lab2.yacc"
                      {printf("Find package and import\n");}
#line 2218 "y.tab.c"
    break;


#line 2222 "y.tab.c"

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

#line 442 "lab2.yacc"


int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
	yyparse();
        fclose(yyin);
	if(error_ == 0)
		printf("OK\n");
        
}
