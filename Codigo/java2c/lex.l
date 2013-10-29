%{
#include <stdio.h>
#include <string.h>
#include "yacc.tab.h"
%}



SYSTEMTOK 		"System"		
OUTTOK 			"out"			
PRINTLNTOK 		"println"			
QUOTE 			[\"]
INT			"int"
DOUBLE			"double"
CHAR			"char"
FLOAT			"float"
NAME			[a-z][a-zA-Z0-9]*
DOT			[.]
COMMA			[,]
OPARENTHESES            [(]
EPARENTHESES 		[)]
QUOTEDTEXT		\"[^"\n]*["\n]


%%

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
{NAME} {
	return NAME;
}
{DOT} {
	return DOT;
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


%%

