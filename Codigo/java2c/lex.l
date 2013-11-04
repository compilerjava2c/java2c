%{
#include <stdio.h>
#include <string.h>
#include "yacc.tab.h"
FILE *arq;
%}


WHITESPACE [ \n\r\t]+
COMPARATOR		[\> \< >= <= != ==]?
SYSTEMTOK 		"System"		
OUTTOK 			"out"			
PRINTLNTOK 		"println"			
QUOTE 			[\"]
INT			"int"
DOUBLE			"double"
CHAR			"char"
FLOAT			"float"
CLASS			"class"
IF			"if"
ELSE			"else"
ELSEIF			"else if"
NUMBER			[0-9]*
NAME			[a-z][a-zA-Z0-9]*
NAMECLASS		[A-Z][a-zA-Z0-9]*
DOT			[.]
DOTCOMMA		[;]
COMMA			[,]
OPARENTHESES            [(]
EPARENTHESES 		[)]
OBRACKET		[{]
EBRACKET		[}]
QUOTEDTEXT		\"[^"\n]*["\n]

%%

{WHITESPACE} /* Ignore */ ;
{COMPARATOR} {
	return COMPARATOR;
}
{SYSTEMTOK} {
	yylval = yytext;
	return SYSTEMTOK;
}
{OUTTOK} {
	yylval = yytext;
	return OUTTOK;
}
{PRINTLNTOK} {
	yylval = yytext;
	return PRINTLNTOK;
}
{QUOTE} {
	yylval = yytext;
	return QUOTE;
}
{INT} {
	yylval = yytext;
	return INT;	
}
{DOUBLE} {
	yylval = yytext;
	return DOUBLE;
}
{CHAR} {
	yylval = yytext;
	return CHAR;
}
{FLOAT} {
	yylval = yytext;
	return FLOAT;
}
{CLASS} {
	yylval = yytext;
	return CLASS;
}
{IF} {
	yylval = yytext;
	return IF;
}
{ELSE} {
	yylval = yytext;
	return ELSE;
}
{ELSEIF} {
	yylval = yytext;
	return ELSEIF;
}
{NUMBER} {
	yylval = yytext;
	return NUMBER;
}
{NAME} {
	yylval = yytext;
	return NAME;	
}
{NAMECLASS} {
	yylval = yytext;
	return NAMECLASS;
}
{DOT} {
	yylval = yytext;
	return DOT;
}
{DOTCOMMA} {
	yylval = yytext;
	return DOTCOMMA;
}
{COMMA} {
	yylval = yytext;
	return COMMA;
}
{OPARENTHESES} {
	yylval = yytext;
	return OPARENTHESES;
}
{EPARENTHESES} {
	yylval = yytext;
	return EPARENTHESES;
}
{OBRACKET} {
	yylval = yytext;
	return OBRACKET;
}
{EBRACKET} {
	yylval = yytext;
	return EBRACKET;
}
{QUOTEDTEXT} {
	yylval = yytext;
	return QUOTEDTEXT;
}
