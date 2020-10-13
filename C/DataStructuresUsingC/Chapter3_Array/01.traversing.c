/*
 * using genernal way to traversing array
 */

#include <stdio.h>

int main(){
    int rank[5] = {5, 4, 3, 17, 23};
    int i;
    // traversing array using for loop base on array length;
    for(i = 0; i < sizeof(rank)/ sizeof(int); i++)
    {
        printf("Array index is %d, Value is %d.\n", i, rank[i]);
    } 
    return 0;
}