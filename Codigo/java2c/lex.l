%{
#include <stdio.h>
#include <string.h>
#include "yacc.tab.h"
FILE *arq;
%}


WHITESPACE [ \n\r\t]+
COMPARATOR		[\> \< >= <= != == =]?
SYSTEMTOK 		"System"		
OUTTOK 			"out"			
PRINTLNTOK 		"println"			
QUOTE 			[\"]
INT			"int "
DOUBLE			"double "
CHAR			"char "
FLOAT			"float "
CLASS			"class "
IF			"if"
ELSE			"else"
ELSEIF			"else if"
NEW			"= new"
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
	yylval.strval = strdup(yytext);
	return COMPARATOR;
}			
{SYSTEMTOK} {
	yylval.strval = strdup(yytext);
	return SYSTEMTOK;
}
{OUTTOK} {
	yylval.strval = strdup(yytext);
	return OUTTOK;
}
{PRINTLNTOK} {
	yylval.strval = strdup(yytext);
	return PRINTLNTOK;
}
{QUOTE} {
	yylval.strval = strdup(yytext);
	return QUOTE;
}
{INT} {
	yylval.strval = strdup(yytext);
	return INT;	
}
{DOUBLE} {
	yylval.strval = strdup(yytext);
	return DOUBLE;
}
{CHAR} {
	yylval.strval = strdup(yytext);
	return CHAR;
}
{FLOAT} {
	yylval.strval = strdup(yytext);
	return FLOAT;
}
{CLASS} {
	yylval.strval = strdup(yytext);
	return CLASS;
}
{IF} {
	yylval.strval = strdup(yytext);
	return IF;
}
{ELSE} {
	yylval.strval = strdup(yytext);
	return ELSE;
}
{ELSEIF} {
	yylval.strval = strdup(yytext);
	return ELSEIF;
}
{NEW} {
	yylval.strval = strdup(yytext);
	return NEW;
}
{NUMBER} {
	yylval.strval = strdup(yytext);
	return NUMBER;
}
{NAME} {
	yylval.strval = strdup(yytext);
	return NAME;	
}
{NAMECLASS} {
	yylval.strval = strdup(yytext);
	return NAMECLASS;
}
{DOT} {
	yylval.strval = strdup(yytext);
	return DOT;
}
{DOTCOMMA} {
	yylval.strval = strdup(yytext);
	return DOTCOMMA;
}
{COMMA} {
	yylval.strval = strdup(yytext);
	return COMMA;
}
{OPARENTHESES} {
	yylval.strval = strdup(yytext);
	return OPARENTHESES;
}
{EPARENTHESES} {
	yylval.strval = strdup(yytext);
	return EPARENTHESES;
}
{OBRACKET} {
	yylval.strval = strdup(yytext);
	return OBRACKET;
}
{EBRACKET} {
	yylval.strval = strdup(yytext);
	return EBRACKET;
}
{QUOTEDTEXT} {
	yylval.strval = strdup(yytext);
	return QUOTEDTEXT;
}
