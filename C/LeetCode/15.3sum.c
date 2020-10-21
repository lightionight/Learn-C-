/*
    LeetCode 15 两数之和
    Ref: https://leetcode-cn.com/problems/3sum/
*/

#include <baseIncludeHead.h>
# define SumNumer 3
# define INPUT_LENGTH 10

/* define Bool Type */
# define TRUE 1
# define FALSE 0;
typedef int bool;

typedef struct data{
    int *arr1;
    int *arr2;
    int *arr3;
}Data;

void Init(Data *ptr, int *dataLength)
{
    *dataLength += 1;
    ptr->arr1 = NULL;
    ptr->arr2 = NULL;
    ptr->arr3 = NULL;
}

void threeSumLoop(Data *dataPtr,int *dataLength, int *array, int arrayLength);

int main(){
    int test[10] = {1, 5, 6, 4, -5, -2, 0, 8, -2, 7};
    Data *result;
    int dataL = 0;
    int *dataLength = &dataL;
    threeSumLoop(result, dataLength, test, INPUT_LENGTH);
    
    /* Print result */
    //printf("%d", *dataLength);
    for(int i = 0; i < *dataLength; i++)
    {
        printf("[");
        //?????? 无法输出answer!
        printf("%d, %d, %d",*((result + i)->arr1), *((result + i)->arr2), *((result + i)->arr3));
        printf("]\n");
    }
    free(result);
    return 0;
    

}


/*  input: 为输入结构体,
    length: 为输入结构体长度,
    appendLength: 需要增加的长度 */
Data * dymaticArray(Data *input, int *dataLength)
{
    Data *temp;
    if(*dataLength == 0)
    {
        *dataLength = 1;
        temp = (Data *)(malloc(sizeof(Data) * *dataLength));
        temp->arr1 = NULL;
        temp->arr2 = NULL;
        temp->arr3 = NULL;
    }
    else{
        *dataLength += 1;
        temp = (Data *)(malloc(sizeof(Data) * (*dataLength)));
        for(int i = 0; i < *dataLength; i++)
        {
            if(i == (*dataLength - 1) && i != 0)
            {
                temp[i].arr1 = NULL;
                temp[i].arr2 = NULL;
                temp[i].arr3 = NULL;
            }
            temp[i].arr1 = input[i].arr1;
            temp[i].arr2 = input[i].arr2;
            temp[i].arr3 = input[i].arr3;

        }
        free(input);
    }
    input = temp;
    return input;
}

/*


*/
void threeSumLoop(Data *dataPtr,int *dataLength, int *array, int arrayLength)
{ 
    for(int i = 0; i < arrayLength - 2; i++)
    {
        for(int j = i + 1; j < (arrayLength - 1); j++)
        {
            for(int k = j + 1; k < arrayLength; k++)
            {
                if(array[i] + array[j] + array[k] == 0)
                {
                    dataPtr = dymaticArray(dataPtr, dataLength);
                    dataPtr[*dataLength - 1].arr1 = array + i;
                    dataPtr[*dataLength - 1].arr2 = array + j;
                    dataPtr[*dataLength - 1].arr3 = array + k;
                }
            }
        }
    }
}
