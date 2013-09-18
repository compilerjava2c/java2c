%{
#include <stdio.h>
#include "sintatico.h"
%}

%%

int                     return INTTOK;
String			return STRINGTOK;
char			return CHARTOK;
boolean			return BOOLEANTOK;
constant		return CONSTANTTOK;
float			return FLOATTOK;
double 			return DOUBLETOK;
long 			return LONGTOK;
short			return SHORTTOK;
void 			return VOIDTOK;

if			return IFTOK;
else			return ELSETOK;
switch			return SWITCHTOK;
case			return CASETOK;
break			return BREAKTOK;

do			return DOTOK;
for 			return FORTOK;
while			return WHILETOK;
return 			return RETURNTOK;		

[a-z][a-zA-Z0-9]*    	yylval=strdup(yytext); return NAME;
[a-zA-Z0-9\/.-]+        yylval=strdup(yytext); return FILENAME;

\"                      return QUOTE;

\{                      return OBRACE;
\}                      return EBRACE;

\[                      return OBRACKET;
\]                      return EBRACKET;

;                       return SEMICOLON;
\n                      /* ignore EOL */;

[ \t]+                  /* ignore whitespace */;

%%
