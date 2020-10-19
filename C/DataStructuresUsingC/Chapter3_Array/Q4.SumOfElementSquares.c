/*
    Calculate Sum of square of the elements


*/

#include <stdio.h>
#define _RANDOM_ARRAY
#include <self_array.h>

#define _ARRAY_LENGTH 50

int main( )
{
    struct arrayData array; 
    struct arrayData *arrayPtr;
    arrayPtr = &array;
    arrayDataInitWithoutPtr(arrayPtr, _ARRAY_LENGTH);
    randomArrayData(arrayPtr);
    for(int i = 0; i < arrayPtr->length; i++)
    {
        if(i + 1 == arrayPtr->length)
        {
            printf("%d.\n", *(arrayPtr + i));
        }
        else if( (i + 1) % 10 == 0)
        {
            printf("%d,\n", *(arrayPtr + i));
        }
        else
        {
            printf("%d,", *(arrayPtr + i));
        }
        
    }
    return 0;
}