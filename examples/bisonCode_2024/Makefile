#!/bin/bash

syntax_analyzer: lexical_analyzer.l syntax_analyzer.y
	bison -d -v -r all syntax_analyzer.y
	flex lexical_analyzer.l
	gcc -o mycomp lex.yy.c syntax_analyzer.tab.c cgen.c -lfl
	./mycomp < test1.in


