/*
    给定包含2_9的字符串,返回所有可能的字母组合;
    ** 1不对应任何字母;
    思路,将数字对应的Ascii 编码序号储存下来 制作成新的数组;
    Calcular all possblie way;
    对于有N个子集,每个子集内有M个元素, 每个子集必须包含一个元素的组合,不重复为 N.M *((N -1).M)

    
    Ref : https://en.cppreference.com/w/c/language/ascii;
    2 -> abc             asciiIndexStart = 97,       length = 3;
    3 -> def             asciiIndexStart = 144,     length = 3;
    4 -> ghi             asciiIndexStart = 147,     length = 3;
    5 -> jkl              asciiIndexStart = 152,     length = 3;
    6 -> mno          asciiIndexStart = 155,     length = 3;
    7 -> pqrs          asciiIndexStart = 160,     length = 4;
    8 -> tuv            asciiIndexStart = 164,     length = 3;
    9 -> wxyz         asciiIndexStart = 167,     length = 4;
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAXLENGTH 8

struct telNum
{
    int asciiIndexStart;
    int length;
};

struct outArray
{
    char *charArray;
    int length;
};

typedef struct telNum telNum;
typedef struct outArray outArray;

int main()
{
    telNum *ptr;
    int telNumLength = 0;
    char input[MAXLENGTH];
    printf("Input translate telNumber:\n");
    scanf("%8s", &input);

    translateTelNumberToChar(ptr, &telNumLength, input, MAXLENGTH);
    int OutArrayLength = getAllpossible(ptr, telNumLength);
    outArray *out = (outArray *)(malloc(sizeof(outArray) * OutArrayLength));
    outArrayInit(out, OutArrayLength, telNumLength);
    

    
}

/* 
translateTelNumberToChar（） 将输入的数字字符串对应映射到对应的字母列表上；
ptr:           转换Char结构体序列的指针    
length :       转换Char结构体长度；    
input：        输入的字符串组；    
inputLength ： 输入的字符串组长度；
*/
void translateTelNumberToChar(telNum *ptr, int *telnumLength, char *input, int inputLength)
{
    int _checkLength;
    for(int i = 0; i < inputLength; i++)
    {
        if(input[i] != NULL)
        {
            _checkLength++;
        }
    }
    telNum *returnPtr = (telNum *)(malloc(sizeof(telNum) * _checkLength));
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
    telnumLength = _checkLength;
}

/* 计算所有字符组合可能的长度 返回 字符组长度 */
int getAllpossible(telNum *array, int length)
{
    int result = 1;
    for(int i = 0; i < length; i++)
    {
        result *= array->length;
    }
    return result;
}

void outArrayInit(outArray *array, int arrayLength, int stringlength)
{
    for(int i = 0; i < arrayLength; i++)
    {
        array[i].charArray = NULL;
        array[i].length = stringlength;
    }
}