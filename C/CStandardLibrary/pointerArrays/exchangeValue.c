#include <stdio.h>

void swap(int *, int *);
void sort(int *, int *);
int main(){
    int a = 3, b = 5;
    printf("a = %d,address is 0X%X, b = %d,address is 0X%X\n", *&a, &a, *&b, &b);
    sort(&a, &b);
    printf("a = %d,address is 0X%X, b = %d,address is 0X%X", *&a, &a, *&b, &b);

    return 0;

}

void sort(int *a, int *b){
    if(*a < *b)
        swap(a, b);
}
/* Change Pointer Value about a and b */
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}