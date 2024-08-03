#!/bin/bash

lexer1: mylexer.l 
	flex mylexer.l
	gcc -o mylexer lex.yy.c -lfl
	
myanalyzer: mylexer.l myanalyser.y
	bison -d -v -r all myanalyser.y
	flex mylexer.l
	gcc -o mycompyler lex.yy.c myanalyser.tab.c cgen.c -lfl

clean: 
	rm myanalyser.tab.c
	rm myanalyser.output
	rm lex.yy.c	
