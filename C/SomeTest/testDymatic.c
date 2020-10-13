#include <stdio.h>
#include "self_string.h"

int main(){
    struct DymaticIntArray test, test2,test3, *testPtr, *test2Ptr, *test3Ptr;
    testPtr = &test;
    test2Ptr = &test2;
    test3Ptr = &test3;
    int arr1[5] = {1, 2, 4, 5, 6};
    int arr2[5] = {10, 4, 3, 2, 5};
    int arr3[5] = {10, 4, 3, 2, 5};
    DymaticIntArrayInit(testPtr, arr1, sizeof(arr1)/ sizeof(int));
    DymaticIntArrayInit(test2Ptr, arr2, sizeof(arr2)/ sizeof(int));
    DymaticIntArrayInit(test3Ptr, arr3, sizeof(arr3)/ sizeof(int));
    DymaticArrayAppend(testPtr,test2Ptr);
    DymaticArrayAppend(testPtr,test3Ptr);
    
    //print test
    int i;
    for(i = 0; i < testPtr->arrLen; i++)
    {
        printf("The index is %d number is %d.\n", i, testPtr->arrayPtr[i]);
    }
    return 0;
}