#ifndef _INSERT_SORT_
#define _INSERT_SORT_

/*  
    insertSortA: 插入排序
    len--->length of array
*/
void insertSortA(int arr[], int len){
    int i, j, key;

    for(j = 1; j < len; j++){
        key = arr[j];
        i = j - 1;
        while(i != 0 && arr[i] > key){
            arr[i + 1] = arr[i];
            --i;
        }
        arr[i + 1] = key;
    }
}

/*
    Increasing Insert Sort
*/
void insertSortB(int arr[], int len){
    int i, j, key;

    for(i = 1; i < (len - 1); i++){
        key = arr[i];
        j = 0;
        while(j < i && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            ++j;
        }
        arr[j - 1] = key;
    }
}
#endif /*_INSERT_SORT_*/