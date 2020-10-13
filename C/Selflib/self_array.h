#ifndef _SELF_ARRAY_H_
#define _SELF_ARRAY_H_

#include <stdio.h>
#include <stdlib.h>
struct arrayData{
    int *ptr;
    int length;
    int index;
};

void arrayDataInit( struct arrayData *arrayData){
    arrayData->ptr = NULL;
    arrayData->length = 0;
    arrayData->index = 0;
}

void traversingArray(struct arrayData *arrayData){
    int i;
    for(i = 0; i < arrayData->length; i++){
        printf("%d, ", arrayData->ptr[i]);
    }
    printf("\n");
}

void insertingArray(struct arrayData *arrayData, int Position, int value){
    if(Position > arrayData->length){
        printf("The Position lager than array length.");
        exit(0);
    }
    int *temp = (int *)(malloc(sizeof(int) * (arrayData->length + 1)));
    int i;
    for(i = 0; i < (arrayData->length); i++){
        temp[i] = arrayData->ptr[i];
    }
    arrayData->ptr = temp;
    free(temp);
    arrayData->length++;
    for(i = arrayData->length; i < Position; i--){
        while (i == Position)
        {
            arrayData->ptr[i] = value;
        }
        arrayData->ptr[i] = arrayData->ptr[i - 1];
    }
}

void searchArray(struct arrayData *arrayData, int seachValue){
    
}


#endif //_SELF_ARRAY_H_