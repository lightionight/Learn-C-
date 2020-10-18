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
    int _is2DArray;
    int row;
    int col;
};

void arrayDataInit( struct arrayData *arrayData, int *arr, int lens){
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
void arrayDataInitWithoutPtr(struct arrayData *arrayData, int lens)
{
    int *array = (int *)(malloc(sizeof(int) * lens));
    arrayData->ptr = array;
    arrayData->length = lens;
    arrayData->index = 0;
    arrayData->_is2DArray = 0;
    arrayData->row = 0;
    arrayData->col = 0;
}

void array2DataInit(struct  arrayData *arrayData, int row, int col)
{
    /* row order 2d array*/
    arrayData->ptr = (int *)(malloc(sizeof(int) * (row * col) ));
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

void searchArrayData(struct arrayData *arrayData, int seachValue)
{
    
}


#ifdef _RANDOM_ARRAY
#define TIME_UTC
void randomArrayData(struct arrayData *arrayData)
{
    struct timespec ts;
    if(timespec_get(&ts, TIME_UTC))
    {
        printf("Get Time error.\n");
    }
    srand(time(ts.tv_nsec ^ (int)ts.tv_nsec));
    for(int i = 0; i < arrayData->length; i++)
    {
        *(arrayData->ptr + i) = (rand() % 101);
    }
}

#endif /* _RANDOM_ARRAY */

void array_2dArraySum()

#endif  /* _SELF_ARRAY_H_ */