#ifndef _SELF_ARRAY_H_
#define _SELF_ARRAY_H_

#include <stdio.h>
#include <stdlib.h>


#include <time.h>

typedef struct arraydata{
    int *ptr;
    int length;
    int index;
    int _is2DArray;
    int row;
    int col;
}ArrayData;

void arrayDataInit( ArrayData *arrayData, int *arr, int lens){
    arrayData->ptr = arr;
    arrayData->length = lens;
    arrayData->index = 0;
    arrayData->_is2DArray = 0;
    arrayData->row = 0;
    arrayData->col = 0;
}

/*  arrayData type after using must free() 
    lens : array length 
*/
void arrayDataInitWithoutPtr(ArrayData *arrayData, int lens)
{
    int *array = (int *)(malloc(sizeof(int) * lens));
    arrayData->ptr = array;
    arrayData->length = lens;
    arrayData->index = 0;
    arrayData->_is2DArray = 0;
    arrayData->row = 0;
    arrayData->col = 0;
}

void array2DataInit(ArrayData *arrayData, int row, int col)
{
    /* row order 2d array*/
    arrayData->ptr = (int *)(malloc(sizeof(int) * (row * col) ));
}


void traversingArrayData(ArrayData *arrayData){
    int i;
    for(i = 0; i < arrayData->length; i++){
        printf("%d, ", arrayData->ptr[i]);
    }
    printf("\n");
}

void insertingArrayData(ArrayData *arrayData, int Position, int value){
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

void searchArrayData(ArrayData *arrayData, int seachValue)
{
    
}


/*
    struct timespec 包含nanosecond
    clock_gettime() define in time.h
*/
void randomArrayData(ArrayData *arrayData)
{
    struct timespec ts;
    if(clock_gettime(CLOCK_REALTIME, &ts))
    {
        printf("Get Time error.\n");
    }
    
    for(int i = 0; i < arrayData->length; i++)
    {
        srand(time(NULL));
        *(arrayData->ptr + i) = (rand() % 101);
        if(*(arrayData->ptr + i) ==  *(arrayData->ptr + i - 1))
        {
            --i;
        }
    }
}


void array_2dArraySum()
{

}

#endif  /* _SELF_ARRAY_H_ */