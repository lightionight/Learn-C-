/*
    * Transform int to Roman
    * :Like  I, V, X, L, C, D, M
    * I Can place before V or X to express 4 or 9;
    * X can place before L or C to express 40 or 90;
    * C cam place before D or M to express 400 or 900;
    * example
    *  3 = III;
    *  9 = IV;
    *  900 = CM;
    * 1 <= num <= 3999
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LENGTH 50;
#define RAND_MAX 3999

enum testNum{
    ten = 10,
    houdred = 100,
    thousand = 1000
};

//void intToRoman(char arr[], int Number);
void intToSingle(int arr[], int number);

int main(){
    int num = 3985;
    int arr[4];
    //设定输出参数char array；
    intToSingle(arr, num);
    //char *p = s;
    return 0;

}


/*
    intToSingle 是将一个多位数分割为单个的个位数的function
    ref:https://blog.csdn.net/weixin_43557810/article/details/86761243
*/
void intToSingle(int arr[], int number){
    //判断number是否符合判断范围;
    if(number < 1 || number > 3999)
        exit(0);
    int *nPtr, temp, i, baseNum;
    nPtr = arr;
    baseNum = 1000;
    for(i = 0; i < 4; baseNum /= 10)
    {
        *(nPtr + i) = number / baseNum % 10;
        //printf("Number is %d\n", *(nPtr + i));
        ++i;
    }

    
}

void ConditionRomanNum(int arr[], char result[]){
    int i, j;
    char *cPtr = result;
    for(i = 0; i < 4; i++){
        j = arr[i];
        while(j != 0){
            switch (i)
            {
            case 0 :
                if(j = 4){
                    j = 2;
                    while(j-- > 0)
                        *cPtr++ = ''
                }
                break;
            case 1 :
                if(j = 4);
                break;
            
            default:
                break;
            }
        }
    }
}