#include <stdio.h>
/*#include "PointerGetInput.c"*/

void maxArea(int arr[], int *result, int arrlen);
void maxAreaVer2(int arr[], int *result, int arrlen);


int main(){
    int arr[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int result = 0;
    int arrlen = (int)(sizeof(arr)/sizeof(arr[0]));
    maxArea(arr, &result, arrlen);
    maxAreaVer2(arr, &result, arrlen);
    printf("The max Area is %d.\n", result);
    return 0;
}
/*one direction Pointer move
    \----------------------------\
    \ \--------\                 \
    \ \        \                 \
    \ \        \----->           \
    \ \        \                 \
    \ \--------\                 \
    \----------------------------\
*/
void maxArea(int arr[], int *result, int arrlen){
    int i, j;
    i = 0;
    int temp;
    while (i < (arrlen - 1))
    {
        j = i + 1;
        while(j < arrlen)
        {
            temp = arr[i] < arr[j] ? arr[i]*(j - i) : arr[j] * (j - i);
            if(temp > (*result)){
                (*result) = temp;
            }
            ++j;
        }
        ++i;
    }

}

/*double  direction Pointer moving
    \-------------------------------------------------------------------------------------------\
    \ \--------\                                                                 \-------------\\
    \ \        \                                                                 \             \\
    \ \        \----->                                              <------------\             \\
    \ \        \                                                                 \             \\
    \ \--------\                                                                 \-------------\\
    \-------------------------------------------------------------------------------------------\
*/
void maxAreaVer2(int arr[], int *result, int arrlen){
    int i, j;
    i = 0;
    j = arrlen - 1;
    int temp;
    while(i < j){
        if( arr[i] < arr[j]){
            temp = arr[i] * (j - i);
            ++i;
        }
        else{
            temp = arr[j] * (j - i);
            --j;
        }
        *result = temp > *result ? temp : *result;
    }
}