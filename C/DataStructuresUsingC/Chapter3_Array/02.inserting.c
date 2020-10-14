/*
 * using genernal way to inserting array *
 */

#include <stdio.h>
#include "self_array.h"

int main(){
    int rank[5] = {5, 4, 3, 17, 23};
    int i, a = 6;
    /* particular position inserting balue. */
    struct arrayData result, *resultPtr;
    resultPtr = &result;
    arrayDataInit(resultPtr, rank, 5);
    insertingArrayData(resultPtr, 3, a);
    traversingArrayData(resultPtr);
    return 0;
}