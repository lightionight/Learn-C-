#include <stdio.h>
#include "PointerGetInput.c"

int main(){
    int *pn, result;
    result = getint(*pn);
    printf("%d", result);
    return 0;
}