/*
    动态配置数组长度及复制值到新的长度数组中
    figuar out the dymatic memory access function malloc() and free();
    Ref: http://c.biancheng.net/cpp/html/2790.html
    指针自增 :
    *p++
    *++p
    Ref: https://blog.csdn.net/bzhxuexi/article/details/12170475

    Help Reference: https://www.cs.swarthmore.edu/~newhall/unixlinks.html#Clang
    C Stand drift Ref : http://port70.net/~nsz/c/
*/


#include <stdio.h>
#include <stdlib.h>
//动态Int数组
struct DymaticIntArray{
    int *arrayPtr;
    int arrLen;
    int arrIndex;
    int elementSize;
};


//动态Char数组
struct DymaticCharArray{
    char *arrayPtr;
    int  arrLen;
    int  arrIndex;
};



int main(){
    int arr1[4] = {4, 5, 6, 7};
    int arr2[4] = {8, 9, 10, 11};
    int i;

    int len1 = (int)(sizeof(arr1) / sizeof(arr1[0]));
    int len = (int)(sizeof(arr2) / sizeof(arr2[0]));
    len += len1;
    int *Dptr = (int *)(malloc(len * (sizeof(int))));
    for(i = 0; i < len; i++){
        if(i < len1)
            Dptr[i] = arr1[i];
        else
        {
            Dptr[i] = arr2[i - len1];
        }
        printf("The Dymatic array index %d is %d.\n", i, Dptr[i]);
    }
    free(Dptr);
    if(Dptr == NULL){
        printf("there is no such array");
    }
    return 0;

}