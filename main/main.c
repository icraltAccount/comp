#include <stdio.h>
#include <string.h>

#include "../include/logs.h"
#include "../include/compiler.h"
#include <sys/stat.h>

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

printf(ERROR "Invalid argument\n" RESET);

return -1;
}

struct stat info;

  
  if (stat(argv[1], &info) == 0 && S_ISDIR(info.st_mode)) 
 {
        printf(ERROR "A passed file and a directory\n" RESET);
        
        printf(WARNING "Make sure to pass the correct argument.\n" RESET);

 return 1;
 
}


file = fopen(argv[1], "r");

if (file == NULL) 
{

printf(ERROR "File Not Found\n" RESET);

return -1;

}

compiler(file);

return 0;

}