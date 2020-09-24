#ifndef _INSERT_SORT_
#define _INSERT_SORT_

#include <stdio.h>


/*  
    insertSort: 插入排序
    len--->length of array
*/
int insertSort(int *arr[], int len){
    int i, j, key;

    for(j = 2; j < len; j++){
        key =  *arr[j];
        i = j - 1;
        while(i > 0 && *arr[i] > key){
            *arr[i + 1] = *arr[i];
            i = i - 1;
        }
        *arr[i + 1] = key;
    }
    return *arr;
}


#endif /*_INSERT_SORT_*/
