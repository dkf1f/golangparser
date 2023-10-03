

all: 
	make clean 
	lex --nounistd --always-interactive -D=_CRT_SECURE_NO_WARNINGS -D=_CRT_SECURE_NO_DEPRECATE parser.l
	bison -d parser.y
	gcc -o parser.exe parser.tab.c parser.tab.h lex.yy.c
	
clean:
	rm -rf parser.exe parser.tab.h parser.tab.c lex.yy.c