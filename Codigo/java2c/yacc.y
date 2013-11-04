%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lex.yy.c"
#include "cleanBuffer.c"
FILE *arqc;
FILE *arqh;

%}

%token COMPARATOR
%token SYSTEMTOK 				
%token OUTTOK 						
%token PRINTLNTOK 					
%token QUOTE 	
%token INT
%token DOUBLE
%token CHAR
%token FLOAT
%token CLASS
%token IF
%token ELSE
%token ELSEIF
%token NUMBER
%token NAME
%token NAMECLASS
%token QUOTEDTEXT
%token DOT
%token DOTCOMMA
%token COMMA
%token OPARENTHESES
%token EPARENTHESES
%token OBRACKET
%token EBRACKET

%{
char str1 [1000];
char buffer [1000];
%}

%%

inicio:
	
<<<<<<< HEAD
	|inicio print
	|inicio class
	|inicio chamada_metodo_estatico
	|inicio chamada_metodo_parametro
	|inicio chamada_metodo
	|inicio metodo
	|inicio ready_parameters_list
	|inicio typevariable
	|inicio typeparameter
	|inicio name_recursive

=======
	|print inicio
	|class inicio
	|chamada_method_estatico inicio
	|chamada_method_parametro inicio
	|chamada_method inicio
	|method inicio
	|ready_parameters_list inicio
	|type inicio
	|name_recursive inicio
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
;

print:
	| SYSTEMTOK DOT OUTTOK DOT PRINTLNTOK OPARENTHESES String EPARENTHESES //ver com o professor pra pegar o que tiver entre os parenteses

	{
	printf("printf reconhecido");
	fprintf(arqc,"printf(%s);",str1);
	}
;

class:
	CLASS NAMECLASS OBRACKET class_content EBRACKET
	{
		printf("reconheceu o class");
		strcpy(buffer, yytext);
		fprintf(arqh,"typedef struct %s {}_%s",buffer,buffer);
	}
;

class_content:
	variables 
<<<<<<< HEAD
	|metodo
	| variables metodo
=======
	|method
	| variables method
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
;


variables:
<<<<<<< HEAD
	typevariable
=======
	type
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
	| variables
;

chamada_method_estatico:
	NAMECLASS DOT chamada_method ready_parameters_list
	{
		printf("reconheceu a chamada de method estático com parametros");			
	}
;

if_rule:
	IF OPARENTHESES id COMPARATOR id EPARENTHESES
;

id:
	NAME
	|NUMBER
;

chamada_method_parametro:
	chamada_method ready_parameters_list
	{
		printf("reconheceu a chamada de methods com parametros");			
	}
;

chamada_method:
	NAME DOT NAME 
	{
		printf("reconheceu a chamada de methods");			
	}
	|NAME DOT chamada_method
	{
		printf("reconheceu a chamada de methods");			
	}
;

String:
	QUOTEDTEXT 

	{ strcpy(buffer, yytext);
	  strcat(str1, buffer);
	}
;

<<<<<<< HEAD

metodo:
	typeparameter ready_parameters_list

=======
method:
	type ready_parameters_list
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
	{
		printf("method reconhecido\n");
	}
	|NAME ready_parameters_list
	{
		printf("method reconhecido\n");
	}
;

ready_parameters_list:
	OPARENTHESES parameters_list EPARENTHESES
;

parameters_list:
	parameters
	{	
	printf("parameter list reconhecido\n");
	}	
	|parameters_list COMMA parameters
	{
	printf("multiple parameter list reconhecido\n");
	}
;

parameters:

	typeparameter
	{
	printf("type parameter reconhecido\n");
	}
	|NAME
	{
	printf("NAME reconhecido\n");
	}
;

typevariable:
	inttypevariable
	|doubletypevariable
	|chartypevariable
	|floattypevariable
;

inttypevariable:
	INT NAME DOTCOMMA
	{
	 fprintf(arqc,"%s\n",$1);
	}
;

doubletypevariable:
	DOUBLE NAME DOTCOMMA
	{
	fprintf(arqc,"%s\n",$1);
	}
;

chartypevariable:
	CHAR NAME DOTCOMMA
	{
	fprintf(arqc,"%s\n",$1);
	}
;
	
floattypevariable:
	FLOAT NAME DOTCOMMA
	{
	fprintf(arqc,"%s\n",$1);
	}
;

typeparameter:
	inttypeparameter
	|doubletypeparameter
	|chartypeparameter
	|floattypeparameter
;

inttypeparameter:
	INT NAME
	{
	printf("%s %s ", $1,$2);
	}
<<<<<<< HEAD
=======
	| INT NAME DOTCOMMA
	{
	printf("INT NAME reconhecido\n");
	}
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
;

doubletypeparameter:
	DOUBLE NAME
	{
	printf("DOUBLE NAME reconhecido\n");
	}
	| DOUBLE NAME DOTCOMMA
	{
	printf("DOUBLE NAME reconhecido\n");
	}
;

chartypeparameter:
	CHAR NAME
	{
	printf("CHAR NAME reconhecido\n");
	}
<<<<<<< HEAD
	
=======
	| CHAR NAME DOTCOMMA
	{
	printf("CHAR NAME reconhecido\n");
	}
>>>>>>> 81d5d5233919d838a6e2d32ca82eef1cd0b18414
;

floattypeparameter:
	FLOAT NAME
	{
	printf("FLOAT NAME reconhecido\n");
	}
	| FLOAT NAME DOTCOMMA
	{
	printf("FLOAT NAME reconhecido\n");
	}
;

name_recursive:
	NAME
	|name_recursive COMMA NAME
;

%%

int yywrap(void){
	return 1;
}

int yyerror(char *s){
	printf("%s\n", s);
}

int main(int argc, char** argv){
	
	FILE *input = fopen("Aluno.java", "r");
	if(!input){
		fprintf(stderr,"arquivo nao encontrado");
		return -1;
	}
	yyin = input;
	do{
		arqc = fopen ("teste.c","w");//criar arquivo com permissão de escrita
		arqh = fopen ("teste.h","w");//criar arquivo com permissão de escrita
		fflush (arqc);//limpa o buffer 
		fflush (arqh);//limpa o buffer 
	
		fprintf(arqc, "#include <stdio.h> \n");
		fprintf(arqc, "#include <stdlib.h> \n");
		fprintf(arqc, "int main (){ \n");

		yyparse();

		fprintf(arqc, "\n}");

		fclose(arqc);//nao pode mais escrever
		fclose(arqh);//nao pode mais escreve	

	}while(!feof(yyin));

	return 0;

}

