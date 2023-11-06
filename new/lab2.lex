%{
    #include <iostream>
	#include "y.tab.h"
	void yyerror(const char *s);
    int line_counter = 0;
	// [a-zA-z]*((\.[a-zA-z]+))+				{return METHOD;}
	/*
	"any"									{return ANYTYPE;}
"bool"									{return BOOL_TYPE;}
"byte"									{return BYTE;}
"comparable"							{return COMPARABLE;}
"string"								{return STRING;}
"complex"((64)|(128))					{return COMPLEXTYPE;}
"error"									{return ERRORTYPE;}
"uint"((8)|(16)|(32)|(64))? 			{return UINT;}
"uintptr"								{return UINTPTR;}
"int"((8)|(16)|(32)|(64))?				{return INT;}
"float"((32)|(64))						{return FLOAT;}
"rune"									{return RUNE;}
	
	*/
	
%}

%option yylineno
%option noyywrap

%%
'\n'									{line_counter++;yylval++;}
[/][/](\\.|[^\n])*[\n]					;
[/][*]([^*]|[*]*[^*/])*[*]+[/]          ; 

"import"([ ]+)?((\(([ \t\n\v\r]*(\"(\\.|[^"()]*)+\"))+[ \t\n\v\r]*\))|(\"(\\.*[^()]|[^"()])*\"))		{return IMPORTS;}
"package"[ ]+[a-zA-z_][a-zA-z_0-9]* 	{return PACKAGE;}
"break"									{return BREAK;}
"case"									{return CASE;}
"chan"									{return CHAN;}
"const"									{return CONST;}
"continue"								{return CONTINUE;}
"default"								{return DEFAULT;}
"defer"									{return DEFER;}
"else"									{return ELSE;}
"fallthrough"							{return FALLTHROUGH;}
"for"									{return FOR;}
"func"									{return FUNCTION;}
"go"									{return GO;}
"goto"									{return GOTO;}
"if"									{return IF;}
"interface"								{return INTERFACE;}
"map"									{return MAP;}
"range"									{return RANGE;}
"return"								{return RETURN;}
"select"								{return SELECT;}
"struct"								{return STRUCT;}
"switch"								{return SWITCH;}
"type"									{return TYPE;}
"var"									{return VAR;}



"true"|"false"							{return BOOL;}
"iota"									{return IOTA;}

"<-"									{return POINTER;}
";"										{return SEMICOLON;}

"+="									{return ADDEQ;}
"-="									{return DECEQ;}
"|="									{return OREQ;}
"^="									{return XOREQ;}


"*="									{return MULEQ;}
"/="									{return DIVEQ;}
"%="									{return MODEQ;}
"<<="									{return LSHIFTEQ;}
">>="									{return RSHIFTEQ;}
"&="									{return ANDEQ;}
"&^="									{return ANDXOREQ;}

":="									{return PEQ;}
"=="									{return EQUAL;}
"="										{return EQ;}

"^"										{return XOR;}

"&&"									{return AND;}
"||"									{return OR;}
"<<"									{return LSHIFT;}
">>"									{return RSHIFT;}
"++"									{return INC;}
"--"									{return DEC;}
"!="									{return NOTEQUAL;}
">="									{return GREATEROREQUAL;}
"<="									{return LESSOREQUAL;}
"&^"									{return AMP_EXP;}
"..."									{return POINT;}
\"(\\.|[^\"])*\"						{return CONST_STRING;}
\'(\\.|[^\'])*\'						{return CONST_CHAR;}

(([-]?0[bB]?[_]?([0-1]+[_]?)+)|([-]?0[oO]?[_]?([0-7]+[_]?)+)|([-]?0[xX]?[_]?([0-9A-Fa-f]+[_]?)+)|([-]?0[xX]((([_]?([0-9a-fA-F][_]?)+)\.([0-9a-fA-F][_]?)+)|([_]?([0-9a-fA-F][_]?)+)|(\.([0-9a-fA-F][_]?)+)))|([-]?([0-9]+[_]?[0-9]*)+)|((([-]?([0-9]+[_]?[0-9]*)+)(([.]([-]?([0-9]+[_]?[0-9]*)+)?([eE][+-]?([0-9]+[_]?[0-9]*)+)?)|([eE][+-]?([0-9]+[_]?[0-9]*)+)))|([.]([-]?([0-9]+[_]?[0-9]*)+)([eE][+-]?([0-9]+[_]?[0-9]*)+)?))|([-]?[0][xX]([_]?(([0-9A-Fa-f]+[_]?)+)([.]((([0-9A-Fa-f]+[_]?)+))?)?|([.](([0-9A-Fa-f]+[_]?)+)))([pP][+-]?([-]?([0-9]+[_]?[0-9]*)+))))"i"	  {return IMAGINARY_LIT;}
[\']([\\](([\\][0-7]{3})|([\\x][0-9A-Fa-f]{2})|([\\u][0-9A-Fa-f]{4})|([\\U][0-9A-Fa-f]{8})|([abfnrtv\'"])|([0-9A-Fa-f])+))	{return RUNE_LIT;}
0[bB]?[_]?([0-1]+[_]?)+					{return CONST_BIN;}
0[bB]?[_]?([0-9]+[_]?)+					{return CONST_BIN_ERR;}

0[oO]?[_]?([0-7]+[_]?)+					{return CONST_OCTAL;}
0[xX]?[_]?([0-9A-Fa-f]+[_]?)+			{return CONST_HEX;}
0[xX]((([_]?([0-9a-fA-F][_]?)+)\.([0-9a-fA-F][_]?)+)|([_]?([0-9a-fA-F][_]?)+)|(\.([0-9a-fA-F][_]?)+))		{return FLOAT_HEX;}

([0-9]+[_]?[0-9]*)+					{return CONST_INT;}
((([0-9]+[_]?[0-9]*)+)(([.]([-]?([0-9]+[_]?[0-9]*)+)?([eE][+-]?([0-9]+[_]?[0-9]*)+)?)|([eE][+-]?([0-9]+[_]?[0-9]*)+)))|([.]([-]?([0-9]+[_]?[0-9]*)+)([eE][+-]?([0-9]+[_]?[0-9]*)+)?)		{return DECIMAL_FLOAT_LIT;}

[0][xX]([_]?(([0-9A-Fa-f]+[_]?)+)([.]((([0-9A-Fa-f]+[_]?)+))?)?|([.](([0-9A-Fa-f]+[_]?)+)))([pP][+-]?([-]?([0-9]+[_]?[0-9]*)+)) {return HEX_FLOAT_LIT;}

[a-zA-Z_][A-Za-z_0-9]*					{return id;}


";"|","|"{"|"}"|"("|")"|"["|"]"|"*"|"+"|"-"|"/"|"?"|":"|"&"|"|"|"^"|"!"|"~"|"%"|"<"|">"|"."			{return yytext[0];}
(\r\n)                                  {yylval++;line_counter++;}
[ \t]+                                  /* empty */
[ \t\n]									;
%%
