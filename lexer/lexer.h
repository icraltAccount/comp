#pragma once 

typedef enum {

TOKEN_ADD, 
TOKEN_NUMBER,
TOKEN_OTHER_NUMBER,
TOKEN_EQUAL

/* 

sintax: 

1+1=

} 

*/

}TokensType;


typedef struct {

TokensType type;

char *read;

}Token;

