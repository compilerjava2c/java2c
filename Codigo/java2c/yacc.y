%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lex.yy.c"
FILE *arq;
FILE *arq2;

%}

%token SYSTEMTOK 				
%token OUTTOK 						
%token PRINTLNTOK 					
%token QUOTE 	
%token INT
%token DOUBLE
%token CHAR
%token FLOAT
%token CLASS	
%token NAME
%token NAMECLASS
%token QUOTEDTEXT
%token DOT
%token DOTCOMMA
%token COMMA
%token OPARENTHESES
%token EPARENTHESES

%{
char str1 [1000];
char buffer [1000];
%}

%%

inicio:
	print
	| class
	| chamada_metodo_estatico
	| chamada_metodo_parametro
	| chamada_metodo
	| metodo
	| ready_parameters_list
	| parameters_list
	| parameters
	| type
	| inttype
	| doubletype
	| chartype
	| floattype
	| chamada_metodo_estatico
;

print:
	| SYSTEMTOK DOT OUTTOK DOT PRINTLNTOK OPARENTHESES String EPARENTHESES //ver com o professor pra pegar o que tiver entre os parenteses

	{
	printf("printf reconhecido");
	fprintf(arq,"printf(%s);",str1);
	}
;

class:
	CLASS NAMECLASS
	{
		printf("reconheceu o class");
		strcpy(buffer, yytext);
		fprintf(arq2,"typedef struct %s {}_%s",buffer,buffer);
	}
;

chamada_metodo_estatico:
	NAMECLASS DOT chamada_metodo ready_parameters_list
	{
		printf("reconheceu a chamada de metodo estático com parametros");			
	}
;


chamada_metodo_parametro:
	chamada_metodo ready_parameters_list
	{
		printf("reconheceu a chamada de metodos com parametros");			
	}
;

chamada_metodo:
	NAME DOT NAME 
	{
		printf("reconheceu a chamada de metodos");			
	}
	|NAME DOT chamada_metodo
	{
		printf("reconheceu a chamada de metodos");			
	}
;

String:
	QUOTEDTEXT 

	{ strcpy(buffer, yytext);
	  strcat(str1, buffer);
	}
	
	String |
;

metodo:
	type ready_parameters_list
	{
		printf("metodo reconhecido\n");
	}
	|NAME ready_parameters_list
	{
		printf("metodo reconhecido\n");
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
	| parameters_list COMMA parameters
	{
	printf("multiple parameter list reconhecido\n");
	}
;

parameters:

	type
	{
	printf("type parameter reconhecido\n");
	}
	|NAME
	{
	printf("NAME reconhecido\n");
	}
;

type:
	inttype
	|doubletype
	|chartype
	|floattype
;

inttype:
	INT NAME
	{
	printf("INT NAME reconhecido\n");
	}

	|INT 
	{
		strcpy(buffer, yytext);
	 	strcat(str1, buffer);
	}
	|NAME 
	{
		strcpy(buffer, yytext);
	 	strcat(str1, buffer);
	}
	|DOTCOMMA 
	{
		printf("reconheceu o atributo");
		strcpy(buffer, yytext);
	 	strcat(str1, buffer);
		fprintf(arq2,"\n%s",str1);
	}
;

doubletype:
	DOUBLE NAME
	{
	printf("DOUBLE NAME reconhecido\n");
	}
;

chartype:
	CHAR NAME
	{
	printf("CHAR NAME reconhecido\n");
	}
;

floattype:
	FLOAT NAME
	{
	printf("FLOAT NAME reconhecido\n");
	}
;

%%

int yywrap(){
	return 0;
}

int yyerror(char *s){
	printf("%s\n", s);
}

int main(void){
	
	arq = fopen ("teste.c","w");//criar arquivo com permissão de escrita
	arq2 = fopen ("teste.h","w");//criar arquivo com permissão de escrita
	fflush (arq);//limpa o buffer 
	fflush (arq2);//limpa o buffer 
	
	fprintf(arq, "#include <stdio.h> \n");
	fprintf(arq, "#include <stdio.h> \n");
	fprintf(arq, "int main (){ \n");

	yyparse();

	fprintf(arq, "\n}");

	fclose(arq);//nao pode mais escrever
	fclose(arq2);//nao pode mais escrever

}

