# adicione coisas no makefile de acordo com arquivo, se nao souber mexer deixe comigo.

all:
	gcc main/main.c compiler/compiler.c -o mainn

	 

clean:

	 	rm -rf *mainn *.o 


.PHONY: all 