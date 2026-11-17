#include <stdio.h>
#include <string.h>

#include "../include/logs.h"
#include "../include/compiler.h"

/*

* The main function receives the user's 
* command and calls the primary compiler
* it acts as the interface and is the first component invoked
*
* preceding the compiler itself—to perform initial, essential processing

*/

int main(int argc, char *argv[], FILE *file)
{

if (argc < 2)
{

printf(ERROR "invalid argument" RESET);

return -1;
}

file = fopen(argv[1], "r");

if (file == NULL) {

printf(ERROR "File Not Found" RESET);

return -1;

}

compiler(file);

return 0;

}