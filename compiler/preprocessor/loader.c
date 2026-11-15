#include <stdio.h>
#include "../../include/loader.h"

int loader(FILE *entr) {
	FILE *said = fopen("output.c", "w");

	if (!entr || !said) {
		printf("Error: could not open file\n");
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
		} else {
			fputc(c, said);
		}
	}

	fclose(said);

	return 0;
}

