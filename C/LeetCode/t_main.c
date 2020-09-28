#include <stdio.h>
/*#include "PointerGetInput.c"*/

void maxArea(int arr[], int *result);


int main(){
    int arr[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int result = 0;
    maxArea (arr, &result);
    printf("The max Area is %d.\n", result);
    getchar();
    return 0;
}

void maxArea(int arr[], int *result){
    int *i, *j, *storeValue;
    i = arr;
    j = i + 1;
    storeValue = result;
    int temp;
    while (i++)
    {
        while(j++)
        {
            if((*i) < (*j)){
                temp = (*i) * (j - i);
                printf("1,i = %d, j = %d.\n", *i, *j);
            }
            else{
                temp = (*j) * (j - i);
                printf("2,i = %d, j = %d.\n", *i, *j);
            }
            if(temp > *storeValue)
                *storeValue = temp;
            j++;
        }
    }

}