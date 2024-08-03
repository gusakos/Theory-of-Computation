#!/bin/bash

lexer1: lexical_analyzer.l
	flex lexical_analyzer.l
	gcc -o mylexer lex.yy.c -lfl
	./mylexer < example-3.test-1.in

