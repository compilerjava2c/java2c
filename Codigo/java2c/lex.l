%{
#include <stdio.h>
#include <string.h>
#include "yacc.tab.h"
%}


WHITESPACE [ \n\r\t]+
SYSTEMTOK 		"System"		
OUTTOK 			"out"			
PRINTLNTOK 		"println"			
QUOTE 			[\"]
INT			"int"
DOUBLE			"double"
CHAR			"char"
FLOAT			"float"
CLASS			"class"
NAME			[a-z][a-zA-Z0-9]*
NAMECLASS		[A-Z][a-zA-Z0-9]*
DOT			[.]
DOTCOMMA		[;]
COMMA			[,]
OPARENTHESES            [(]
EPARENTHESES 		[)]
QUOTEDTEXT		\"[^"\n]*["\n]

%%

{WHITESPACE} /* Ignore */ ;

{SYSTEMTOK} {
	return SYSTEMTOK;
}
{OUTTOK} {
	return OUTTOK;
}
{PRINTLNTOK} {
	return PRINTLNTOK;
}
{QUOTE} {
	return QUOTE;
}
{INT} {
	return INT;
}
{DOUBLE} {
	return DOUBLE;
}
{CHAR} {
	return CHAR;
}
{FLOAT} {
	return FLOAT;
}
{CLASS} {
	return CLASS;
}
{NAME} {
	printf("carai\n");
	return NAME;
}
{NAMECLASS} {
	return NAMECLASS;
}
{DOT} {
	return DOT;
}
{DOTCOMMA} {
	return DOTCOMMA;
}
{COMMA} {
	return COMMA;
}
{OPARENTHESES} {
	return OPARENTHESES;
}
{EPARENTHESES} {
	return EPARENTHESES;
}
{QUOTEDTEXT} {
	return QUOTEDTEXT;
}
