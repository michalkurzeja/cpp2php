cpp2php.tab.c cpp2php.tab.h: cpp2php.y
	bison -d cpp2php.y

lex.yy.c: cpp2php.l cpp2php.tab.h
	flex cpp2php.l

cpp2php: lex.yy.c cpp2php.tab.c cpp2php.tab.h
	g++ cpp2php.tab.c lex.yy.c -lfl -o cpp2php
