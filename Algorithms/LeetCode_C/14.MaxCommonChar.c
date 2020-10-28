/*
    多个字符串数组的最大公约字符串

    */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct arrayData{
    char *arrayPtr;
    int len;
    int index;
};

void arrayDataInit(struct arrayData *result);

int main(){
    struct arrayData result, *resultPtr;
    resultPtr = &result;
    char *ptr1, *ptr2, *ptr3;
    char arr1[6] = "FLOWER";
    char arr2[4] = "FLOW";
    char arr3[6] = "FLIGHT";
    ptr1 = arr1;
    ptr2 = arr2;
    ptr3 = arr3;

    int len1 = sizeof(arr1)/ sizeof(arr1[0]);
    int len2 = sizeof(arr2)/ sizeof(arr2[0]);
    int len3 = sizeof(arr3)/ sizeof(arr3[0]);
    //int minlen = lenCompare(len1, len2, len3);
    printf("%d, %d, %d\n", len1, len2, len3);
    int i, j, k;
    arrayDataInit(resultPtr);
    for(i = 0; i < len1; i++){
        j = k = 0;
        
        if(ptr1[i] == ptr2[j] && ptr2[j] == ptr3[k] && resultPtr->len == 0)
        {
            resultPtr->len += 1;// ????
            resultPtr->index = i;
            ++j;
            ++k;
        }
        if(ptr1[i] == ptr2[j] && ptr2[j] == ptr3[k] && resultPtr->len != 0)
        {
            resultPtr->len += 1;
            ++j;
            ++k;
        }
        else
        {
            ++j;
            ++k;
        }
        
    }
    
    //复制最大公约数到新的字符组;
    resultPtr->arrayPtr == (char *)(malloc(sizeof(char) * resultPtr->len));
    int n;
    for(n = 0; n < resultPtr->len; n++)
    {
        resultPtr->arrayPtr[n] = arr1[resultPtr->index + resultPtr->len];
        printf("%c,", resultPtr->arrayPtr[n]);
    }
    printf("%d, %d", resultPtr->index, resultPtr->len);
    return 0;
    
}

void arrayDataInit(struct arrayData *result){
    result->arrayPtr = 0;
    result->index = 0;
    result->len = 0;
}

int lenCompare(int A, int B, int C){
    int temp = A < B ? A : B;
    return temp < C ? temp : C;
}
