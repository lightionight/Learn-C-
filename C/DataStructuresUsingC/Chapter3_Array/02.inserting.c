/*
 * using genernal way to inserting array
 */

#include <stdio.h>

int main(){
    int rank[5] = {5, 4, 3, 17, 23};
    int i;
    int a = 6, b = 10, c = 12;
    // particular position iserting balue;
    for(i = 0; i < sizeof(rank)/ sizeof(int); i++)
    {
        if(i < 4);
        printf("Array index is %d, Value is %d.\n", i, rank[i]);
    } 
    return 0;
}