%{
#include "global.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
%}

%token INTTOK
%token STRINGTOK
%token CHARTOK
%token BOOLEANTOK
%token CONSTANTTOK
%token FLOATTOK
%token DOUBLETOK
%token LONGTOK
%token SHORTTOK
%token VOIDTOK

%token IFTOK
%token ELSETOK
%token SWITCHTOK
%token CASETOK
%token BREAKTOK

%token DOTOK
%token FORTOK
%token WHILETOK
%token RETURNTOK

%token SYSTEMTOK
%token OUTTOK
%token PRINTLNTOK
%token PRINTTOK

%token NAME
%token FILENAME

%token QUOTE

%token OBRACE
%token EBRACE

%token OBRACKET
%token EBRACKET

%token OPARENTHESES
%token EPARENTHESES

%token COMMA
%token DOT
%token SEMICOLON

%token CLASSPATH
%token PARAMETER

%start class_path

%%

stmt:
	class
;

parameters_list:
		parameters	
	|	parameters_list ',' parameters	
;

parameters:
	PARAMETER
;

class_path:
	CLASSPATH
;

class_path_list:
		class_path
	|	class_path_list '.' class_path
;

class:
	//metodo1(1,2);
		class_path_list "(" parameters_list ")"; 
;

%%
