/*
    POSIX 2017  https://pubs.opengroup.org/onlinepubs/9699919799.2018edition/

    
    自动生成随机数 use rand() and srand() function.
    srand() 是种子生成器, 利用导入参数输出固定的一个数组,当导入参数固定时, 导出数组也会被固定;
        srand() 传入的参数一般为时间t,如time(0), 即获取当前时间,
        但是由于程序执行过快, 仍然会生成相同的随机数;
    rand() 随机数生成器, 用之前,必须初始化srand(), 否则系统默认srand(1),会产生重复的随机数;
    rand() 生成的是0 - RAND_MAX(32767);
    如何生成固定范围的随机数?
        example: 生成 2 - 15 的随机数
            rand() % (15 - 2 + 1) + 2
    Hence produce random a - b  randomly number
           rand() % (b - a + 1) + a;
    Ref: https://blog.csdn.net/xyphf/article/details/72938174
    两数之和问题
    */
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

#define _NUM_SUM 50
#define _ARRAY_LENGTH 100

int main(){
    int *array, *arrayPtr1, *arrayPtr2;
    array = (int *)(malloc(sizeof(int) * _ARRAY_LENGTH));
    /* 给定随机数 */
    srand(time(0));
    for(int i = 0 ; i < _ARRAY_LENGTH; i++)
    {
        array[i] = rand() % 101;
    }
    for(int i = 0 ; i < _ARRAY_LENGTH; i++)
    {
        printf("The index %3d is %3d.\n", i + 1, array[i]);
        
    }

    arrayPtr2 = arrayPtr1 = array;
    for(int i = 0; i < _ARRAY_LENGTH - 1; i++)
    {
        for(int j = (i + 1); j < _ARRAY_LENGTH; j++)
        {
            if((*(arrayPtr1 + i) + *(arrayPtr2 + j)) == _NUM_SUM)
            {
                printf("The match pair int index %2d and %2d is %2d and %2d  Sum is %d.\n",(i+1), (j + 1), *(arrayPtr1 + i), *(arrayPtr2 +j), _NUM_SUM);
            }
        }
    }
    free(array);
    return 0;
}


