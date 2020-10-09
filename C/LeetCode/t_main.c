#include <stdio.h>
/*#include "PointerGetInput.c"*/

void maxArea(int arr[], int *result, int arrlen);
void maxAreaVer2(int arr[], int *result, int arrlen);


int main(){
    int arr[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int result = 0;
    int arrlen = (int)(sizeof(arr)/sizeof(arr[0]));
    printf("%d\n",arrlen);
    maxArea(arr, &result, arrlen);
    printf("The max Area is %d.\n", result);
    return 0;
}
//single Pointer move
void maxArea(int arr[], int *result, int arrlen){
    int *i, *j;
    i = arr;
    j = i + 1;
    int temp;
    while (*i )
    {
        while(*j != NULL)
        {
            temp = ((*i) < (*j))? (*i) * (j - i): (*j) * (j - i);
            if(temp > (*result))
                (*result) = temp;
            ++j;
        }
        ++i;
    }

}

void maxAreaVer2(int arr[], int *result, int arrlen){

}