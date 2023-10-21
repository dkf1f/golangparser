

all: 
	make clean 
	flex lab2.lex
	bison -y -d lab2.yacc
	g++ y.tab.c lex.yy.c -o example
	./example golangfile.go
	
clean:
	rm -rf example y.tab.h y.tab.c lex.yy.c
