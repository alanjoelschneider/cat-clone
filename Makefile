.DEFAULT_GOAL := all

all: main.c
	gcc -o rat main.c
