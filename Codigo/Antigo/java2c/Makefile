java2c: lex.l lex.y
	bison -d lex.y
	mv lex.tab.h sintatico.h
	mv lex.tab.c sintatico.c
	flex lex.l
	mv lex.yy.c lexico.c
	gcc -o java2c sintatico.c lexico.c -lm

clean:
	rm lexico.* sintatico.* java2c
