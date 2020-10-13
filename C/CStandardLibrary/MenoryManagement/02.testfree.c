/*
    Main Function:尝试自动释放数组;
*/

#include <stdio.h>
#include <stdlib.h>
#include "self_string.h"

int main(){
    int arr1[4] = {4, 5, 6, 7};
    int arr2[4] = {8, 9, 10, 11};

    struct DymaticIntArray array1, *array1Ptr;
    array1Ptr = &array1;
    DymaticIntArrayInit(array1Ptr, arr1, sizeof(arr1)/ sizeof(arr1[0]));
    array1Ptr = dymaticIntArrayAppend(arr2, (int)(sizeof(arr2)/sizeof(arr2[0])), array1Ptr);

    int i;
    for(i = 0; i < array1Ptr->arrLen; i++)
    {
        printf("%d", array1Ptr->arrayPtr[i]);
    }
    return 0;
}

