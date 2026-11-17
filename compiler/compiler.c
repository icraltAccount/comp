#include <stdio.h>
#include <string.h>

#include "../include/logs.h"
#include "../include/loader.h"


/*

* The main compiler file is responsible for organizing 
* compilation calls and invoking services
* it should not act on its own.

*/

int compiler(FILE *file) {


loader(file);


return 0;
}

