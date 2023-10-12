

all: 
	make clean 
	flex lab.lex
	bison -y -d lab.yacc
	g++ y.tab.c lex.yy.c -o example
	
clean:
	rm -rf example y.tab.h y.tab.c lex.yy.c