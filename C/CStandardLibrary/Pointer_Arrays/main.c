#include <stdio.h>
//#include "PointerGetInput.c"

int main(){
    //int *pn, result;
    //scanf("%d", *pn);
    //result = getint(pn);
    //printf("%d", result);
    int a = 5;
    int *p;
    p = &a;
    printf("0X%X, value is : %d", p, *p);
    return 0;
}