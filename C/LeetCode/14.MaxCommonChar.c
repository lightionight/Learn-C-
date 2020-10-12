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
    char arr1[6] = {'F', 'L', 'O', 'W', 'E', 'R'};
    char arr2[4] = {'F', 'L', 'O', 'W'};
    char arr3[6] = {'F', 'L', 'I', 'G', 'H', 'T'};

    int len1 = strlen(arr1);
    int len2 = strlen(arr2);
    int len3 = strlen(arr3);
    int minlen = lenCompare(len1, len2, len3);

    int i, j, k;
    for(i = 0, i < minlen;){
        
    }

    
}

void arrayDataInit(struct arrayData *result){
    result->arrayPtr = NULL;
    result->index = 0;
    result->len = 0;
}

int lenCompare(int A, int B, int C){
    int temp = A < B ? A : B;
    return temp < C ? temp : C;
}
