#include <stdio.h>

int main(){
    int num = 5;
    int *p = &num;
    printf("%d, %d", *p , p);
    return 0;
}