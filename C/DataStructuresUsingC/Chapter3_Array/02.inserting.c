/*
 * using genernal way to inserting array
 */

#include <stdio.h>
#include "self_array.h"

int main(){
    int rank[5] = {5, 4, 3, 17, 23};
    int i;
    int a = 6, b = 10, c = 12;
    // particular position iserting balue;
    struct arrayData result, *resultPtr;
    resultPtr = &result;
    arrayDataInit(resultPtr, rank, 5);
    insertingArray(resultPtr, 3, a);
    traversingArray(resultPtr);
    return 0;
}