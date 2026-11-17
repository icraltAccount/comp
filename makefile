
all:
	gcc main/main.c compiler/compiler.c compiler/preprocessor/processer.c -o mainn

clean:
	rm -rf *mainn *.o output.c

.PHONY: all

