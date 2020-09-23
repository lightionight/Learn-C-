#include <stdio.h>
#include <stdlib.h>

int sortArr(int* arr, int arrlength);
int maxArea(int* arr, int arrlength);

int main(){
    int num[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    size_t arrLength = sizeof(num) / sizeof(num[0]);
    //printf("\nThe maxArea is : %d", maxArea(num, arrLength));
    getchar();
    return 0;
}

int sortArr(int* arr, int arrLength){
    int sort_Arr[2][arrLength];
    for(int n = 0; n < arrLength; n++){
        sort_Arr[0][n] = arr[n];
        sort_Arr[1][n] = n ;
        printf("Sort_arr[0][%d] = %d , Sort_arr[1][%d] = %d\n", n, sort_Arr[1][n], n, sort_Arr[0][n]);
    }
    return sort_Arr;
}

int maxArea( int* arr, int arrLength){
    for(int n = 0; n < arrLength; n++){
        int temp0, temp1;
        temp0 = temp1 = 0;
        if(arr[0][n] < arr[0][n + 1])
        {
            temp0 = arr[0][n];
            temp1 = arr[1][n];
            arr[0][n] = arr[0][n + 1];
            arr[1][n] = arr[1][n + 1];
            arr[0][n + 1] = temp0;
            arr[1][n + 1] = temp1;
        }
        printf("%d", arr[0][n]);
    }
}