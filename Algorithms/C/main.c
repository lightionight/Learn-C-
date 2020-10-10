#include <stdio.h>
#include <string.h>
#include "./01.Sort_Problem/insertSort.h"
#include "./01.Sort_Problem/heapSort.h"

int main(){
    int a[] = {31, 41, 59, 26, 41, 58};
    int len = sizeof(a) / sizeof(a[0]);
    int Update;
    //Output origin sort
    for(Update = 0; Update < len; Update++){
        printf("%d,", a[Update]);
    }
    //insertSortA(a, len);
    insertSortB(a, len);
    //Ouput after sort result
    printf("\n");
    for(Update = 0; Update < len; Update++){
        printf("%d,", a[Update]);
    }
    return 0;
}