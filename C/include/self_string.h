#ifndef _SELF_STRING_
#define _SELF_STRING_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*  getLine: 获取char 长度 
	lim ---> Limit
*/
// int getLine(char s[], int lim){
//     int c, i;
//     for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
//         s[i] = c;
//     if(c == '\n'){
//         s[i] = c;
//         ++i;
//     }
//     s[i] = '\o';// s[i]的指针归为NULL;
//     return i;
// }
// #define MAXLEN 1000
/* readLine: 读取输入字符行数 */
// int readLine(char *linePtr[], int maxLines){
//     int len, nLines;
//     char *p, line[MAXLEN];
    
//     nLines = 0;
//     while((len = getLine(line, MAXLEN)) > 0){
// 		if(nLines >= maxLines || p = malloc(len) == NULL)
// 			return -1;
// 		else{
// 			line[len - 1] = '\0';
//             strcpy(p, line);
//             linePtr[nLines++] = p;
// 		}
// 	}
//     return nLines;
// }

//动态Int数组Struct
struct DymaticIntArray{
    int *arrayPtr;
    int arrLen;
    int arrIndex;
};

void DymaticIntArrayInit(struct DymaticIntArray *array, int *arrPtr, int lens){
    array->arrayPtr = arrPtr;
    array->arrLen = lens;
}

// * returnArray must be initlaized by using DymaticIntArrayInit( )
void DymaticArrayAppend(struct DymaticIntArray *returnArray, struct DymaticIntArray *appendArray){
    int i,j;
    
    //alloc new array length memory block;
    int *arrayTemp = (int *)(malloc(sizeof(int) * ((returnArray->arrLen) + (appendArray->arrLen))));
    for(i = 0; i < returnArray->arrLen; i++){
        arrayTemp[i] = returnArray->arrayPtr[i];
        
    }
    
    //free(returnArray->arrayPtr);
    i = returnArray->arrLen;
    j = 0;
    DymaticIntArrayInit(returnArray, arrayTemp, (returnArray->arrLen + appendArray->arrLen));
    for(; i < returnArray->arrLen ; i++){
        //printf("%d\n", i);
        returnArray->arrayPtr[i] = appendArray->arrayPtr[j++];
    }
}

//动态Char数组
struct DymaticCharArray{
    char *arrayPtr;
    int  arrLen;
    int  arrIndex;
};



#endif /*selfSting*/
