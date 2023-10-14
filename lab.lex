%{
    #include <iostream>
	#include "y.tab.h"
	void yyerror(const char *s);
    int line_counter = 0;
%}

%option yylineno
%option noyywrap

%%
'\n'									{line_counter++;yylval++;}
"//"(\\.|[^\n])*[\n]					;
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

"true"|"false"							{return BOOL;}
"iota"									{return IOTA;}

";"										{return SEMICOLON;}
"^"										{return XOR;}
":="									{return PEQ;}
"="										{return EQ;}
"&&"									{return AND;}
"||"									{return OR;}
"<<"									{return LSHIFT;}
">>"									{return RSHIFT;}
"++"									{return INC;}
"--"									{return DEC;}
"-="									{return SUBEQ;}
"+="									{return PLUSEQ;}
"*="									{return MULEQ;}
"\\="									{return DIVEQ;}
"%="									{return MODEQ;}
"=="									{return EQUAL;}
"!="									{return NOTEQUAL;}
">="									{return GREATEROREQUAL;}
"<="									{return LESSOREQUAL;}

[a-zA-z]*((\.[a-zA-z]+))+				{return METHOD;}
\"(\\.|[^\"])*\"						{return CONST_STRING;}

0[bB]?[_]?([0-1]+[_]?)+					{return CONST_BIN;}
0[bB]?[_]?([0-9]+[_]?)+					{return CONST_BIN_ERR;}

0[oO]?[_]?([0-7]+[_]?)+					{return CONST_OCTAL;}
0[xX]?[_]?([0-9A-Fa-f]+[_]?)+			{return CONST_HEX;}
0[xX]((([_]?([0-9a-fA-F][_]?)+)\.([0-9a-fA-F][_]?)+)|([_]?([0-9a-fA-F][_]?)+)|(\.([0-9a-fA-F][_]?)+))		{return FLOAT_HEX;}
[pP][+-]+								{return HEX_EXPONENT;}

([0-9]+[_]?[0-9]+)+|0					{return CONST_INT;}
"-"([0-9]+[_]?[0-9]+)+|0				{return NEG_CONST_INT;}
[eE][+-]?								{return EXPONENT;}
[a-zA-Z_][A-Za-z_0-9]*					{return id;}
";"|"="|","|"{"|"}"|"("|")"|"["|"]"|"*"|"+"|"-"|"/"|"?"|":"|"&"|"|"|"^"|"!"|"~"|"%"|"<"|">"					{return yytext[0];}
"'"."'"									{return CONST_CHAR;}
(\r\n)                                  {yylval++;line_counter++;}
[ \t]+                                  /* empty */
[ \t\n]									;
%%
