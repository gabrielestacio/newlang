all: compilador

compilador: lex.yy.c y.tab.c 
	gcc lex.yy.c y.tab.c record.c hash_table.c -o parser.exe

lex.yy.c: lexer.l
	lex lexer.l

y.tab.c: parser.y  
	yacc parser.y -d -v -g

clean:
	rm -rf lex.yy.c y.tab.* parser.exe y.output