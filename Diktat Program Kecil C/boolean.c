#include <stdio.h>
#include "boolean.h"

int main(){
    boolean found;
    found = FALSE;
    char mystring [] = "Hello, world!";

    for(int i=0; i< sizeof mystring; i++){
        if (mystring[i] == 'e'){
            found = TRUE;
        }
    }

    printf("found %d\n", found);
    return 0;
}