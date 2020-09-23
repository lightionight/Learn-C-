#include <stdio.h>

int main(){
    int a = 5;
    int *p = &a;
    printf("The adress is : 0X%X, Value is : %d, Variable a adress is 0X%X", p, *p, &a);
    return 0; 
}