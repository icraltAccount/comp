#include <stdio.h>

#include "../../include/loader.h"
#include "../../include/logs.h"

/*

* This is the preprocessor, which is responsible for removing "junk"
* useless elements and the like—from the file, allowing the compiler
* to read the output more freely and flexibly
* for now, in its simplest form, that is how it works.

*/

int loader(FILE *entr) {

	FILE *said = fopen("output.c", "w");

	if (!entr || !said) {
		printf(ERROR "Error: could not open file\n" RESET);
		return 1;
	}


	char c;
	char prox;

	while ((c = fgetc(entr)) != EOF) {
		
		if (c == '/') {
			
		prox = fgetc(entr);
			
			if (prox == '/') {
			
				while ((c = fgetc(entr)) != EOF && c != '\n');
			
				if (c == '\n') {
			
					fputc('\n', said);
				}
			
			} else {
			
				fputc(c, said);
			
				if (prox != EOF) {
			
					fputc(prox, said);
				}
			}
		} 
		else {
		
			fputc(c, said);
		}
	}

	fclose(said);

	return 0;
}

