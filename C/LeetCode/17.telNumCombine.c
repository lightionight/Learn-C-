/*
    给定包含2_9的字符串,返回所有可能的字母组合;
    ** 1不对应任何字母;
    思路,将数字对应的Ascii 编码序号储存下来 制作成新的数组;
    Calcular all possblie way;
    对于有N个子集,每个子集内有M个元素, 每个子集必须包含一个元素的组合,不重复为 N.M *((N -1).M)

    
    Ref : https://en.cppreference.com/w/c/language/ascii;
    2 -> abc  asciiIndexStart = 97, length = 3;
    3 -> def  asciiIndexStart = 144, length = 3;
    4 -> ghi  asciiIndexStart = 147, length = 3;
    5 -> jkl  asciiIndexStart = 152, length = 3;
    6 -> mno  asciiIndexStart = 155, length = 3;
    7 -> pqrs asciiIndexStart = 160, length = 4;
    8 -> tuv  asciiIndexStart = 164, length = 3;
    9 -> wxyz asciiIndexStart = 167, length = 4;
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAXLENGTH 8

struct telNumber{
    int charIndex;
    int asciiIndexStart;
    int length;
};
struct output{
    char *ptr; /* 输出字符串合并的字符串组指针*/
    int length; /* 为inputLength */
};

int main(){
    char input[MAXLENGTH];
    printf("Input translate telNumber:\n");
    scanf("%8s", &input);
    struct telNumber *ptr;
    int inputlength;
    return 0;
}

void translateTelNumberToChar(struct telNumber *ptr, int *length, char *input, int *inputLength)
{
    int _checkLength;
    for(int i = 0; i < inputLength; i++)
    {
        if(input[i] != NULL)
        {
            _checkLength++;
        }
    }
    struct telNumber *returnPtr = (struct telNumber *)(malloc(sizeof(struct telNumber) * _checkLength));
    for(int i = 0; i < _checkLength; i++)
    {
        switch (input[i])
        {
        case '2' :
            returnPtr[i].asciiIndexStart = 97;
            returnPtr[i].length = 3;
            break;
        case '3' :
            returnPtr[i].asciiIndexStart = 144;
            returnPtr[i].length = 3;
            break;
        case '4' :
            returnPtr[i].asciiIndexStart = 147;
            returnPtr[i].length = 3;
            break;
        case '5' :
            returnPtr[i].asciiIndexStart = 152;
            returnPtr[i].length = 3;
            break;
        case '6' :
            returnPtr[i].asciiIndexStart = 155;
            returnPtr[i].length = 3;
            break;
        case '7' :
            returnPtr[i].asciiIndexStart = 160;
            returnPtr[i].length = 4;
            break;
        case '8' :
            returnPtr[i].asciiIndexStart = 164;
            returnPtr[i].length = 3;
            break;
        case '9' :
            returnPtr[i].asciiIndexStart = 167;
            returnPtr[i].length = 4;
            break;
        default:
            break;
        }

    }
    ptr = returnPtr;
    *inputLength = _checkLength;
}

void combineChar(struct telNumber *ptr, int length, struct output *array, int *arrayLength)
{
    
}

cycleCombine(struct telNumber *ptr, int length)
{
    int temp;
    for(int i = 0; i < length; i++)
    {
        temp++;
    }
    int len = (ptr + 1)->length;
    cycleCombine(struct telNumber (ptr + 1),int len);
}