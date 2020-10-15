#ifndef _SELF_ARRAY_H_
#define _SELF_ARRAY_H_

#include <stdio.h>
#include <stdlib.h>

#ifdef _RANDOM_ARRAY
#include <time.h>
#endif /* _RANDOM_ARRAY */

struct arrayData{
    int *ptr;
    int length;
    int index;
};

void arrayDataInit( struct arrayData *arrayData, int *arr, int lens){
    arrayData->ptr = arr;
    arrayData->length = lens;
    arrayData->index = 0;
}

void traversingArrayData(struct arrayData *arrayData){
    int i;
    for(i = 0; i < arrayData->length; i++){
        printf("%d, ", arrayData->ptr[i]);
    }
    printf("\n");
}

void insertingArrayData(struct arrayData *arrayData, int Position, int value){
    if(Position > arrayData->length){
        printf("The Position lager than array length.");
        exit(1);
    }
    int *temp = (int *)(malloc(sizeof(int) * (arrayData->length + 1)));
    int i;
    arrayData->length++;
    for(i = 0; i < arrayData->length; i++){
        if(i < Position - 1){
            temp[i] = arrayData->ptr[i];
        }
        else if(i == Position - 1){
            temp[i] = value;
        }
        else{
            temp[i] = arrayData->ptr[ i - 1];
        }
    }
    //free(arrayData->ptr);
    arrayData->ptr = temp;
}

void searchArrayData(struct arrayData *arrayData, int seachValue){
    
}
#ifdef _RANDOM_ARRAY

void randomArrayData(struct arrayData *arrayData)
{

}

#endif /* _RANDOM_ARRAY */

#endif 
/* _SELF_ARRAY_H_ */