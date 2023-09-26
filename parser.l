%{
	#include <stdio.h>
	#include "parser.tab.h"
	int line_counter = 0;
%}

%%
'\n'									{line_counter++;}
"//"(\\.|[^\n])*[\n]					;
"import"([ ]+)?((\(([ \t\n\v\r]*(\"(\\.|[^"()]*)+\"))+[ \t\n\v\r]*\))|(\"(\\.*[^()]|[^"()])*\"))		{return IMPORTS;}
"package"[ ]+[a-zA-z_][a-zA-z_0-9]* 	{return PACKAGE;}
"func"									{return FUNCTION;}
"string"								{return STRING;}
"complex"								{return COMPLEX;}
"int"((16)|(32)|(64))?					{return INT;}
"byte"									{return BYTE;}
"float"((16)|(32)|(64))?				{return FLOAT;}
"rune"									{return RUNE;}
"uint"((16)|(32)|(64))? 				{return UINT;}
"var"									{return VAR;}
"const"									{return CONST;}
"bool"									{return BOOL_TYPE;}
"true"|"false"							{return BOOL;}
"if"									{return IF;}
"else"									{return ELSE;}
"fallthrough"							{return FALLTHROUGH;}
"switch"								{return SWITCH;}
"case"									{return CASE;}
"default"								{return DEFAULT;}
"for"									{return FOR;}
[a-zA-z]*(\.[a-zA-z]+)					{return METHOD;}
[A-Z]+									{return CONST_ID;}
\"(\\.|[^\"])*\"						{return CONST_STRING;}
[0-9]+									{return CONST_INT;}
[0-9]+"."[0-9]+							{return CONST_FLOAT;}
[a-zA-z_0-9]+						 	{return id;}
";"|"="|","|"{"|"}"|"("|")"|"["|"]"|"*"|"+"|"-"|"/"|"?"|":"|"&"|"|"|"^"|"!"|"~"|"%"|"<"|">"					{return yytext[0];}
"'"."'"									{return CONST_CHAR;}
[/][*]([^*]|[*]*[^*/])*[*]+[/]          ;
[ \t\n]									;

																    

%%