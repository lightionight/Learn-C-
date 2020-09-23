#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, *p;
    p = malloc(a);
    a = 5;
    
    printf("0X%X\n", p);
    //free(&a);
    return 0;
}