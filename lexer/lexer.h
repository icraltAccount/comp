#pragma once 

typedef enum {

FUCTION_MAIN, // main
FUCTION_PAREN, // (
FUCTION_INITIAL_KEY, // {
FUCTION_KEY_END // }

/* 

sintax: 

main( {

} 

*/

}TokensType;


typedef struct {

TokensType type;

char *read;

}Token;

