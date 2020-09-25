#include <stdio.h>
//#include "PointerGetInput.c"

void maxArea(int arr[], int *result);


int main(){
    int arr[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int result = 0;
    maxArea (arr, &result);
    printf("The max Area is %d.\n", result);
    return 0;
}

void maxArea(int arr[], int *result){
    int *i, *j, *storeValue;
    i = arr;
    j = i + 1;
    storeValue = result;
    int temp;
    while (i == i++){
        while(j == j++){
            if(*i < *j)
                temp = *i * (j - i);
            else
                temp = *j * (j - i);
            if(temp > *storeValue)
                *storeValue = temp;
        }
    }

}