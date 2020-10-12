#ifndef _SELF_STRING_
#define _SELF_STRING_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*  getLine: 获取char 长度 
	lim ---> Limit
*/
int getLine(char s[], int lim){
    int c, i;
    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\o';// s[i]的指针归为NULL;
    return i;
}
#define MAXLEN 1000
/* readLine: 读取输入字符行数 */
int readLine(char *linePtr[], int maxLines){
    int len, nLines;
    char *p, line[MAXLEN];
    
    nLines = 0;
    while((len = getLine(line, MAXLEN)) > 0){
		if(nLines >= maxLines || p = malloc(len) == NULL)
			return -1;
		else{
			line[len - 1] = '\0';
            strcpy(p, line);
            linePtr[nLines++] = p;
		}
	}
    return nLines;
}

//动态Int数组
struct DymaticIntArray{
    int *arrayPtr;
    int arrLen;
    int arrIndex;
};

void DymaticIntArrayInit(struct DymaticIntArray *array, int *arrayInt, int lens){
    array->arrayPtr = arrayInt;
    array->arrIndex = 0;
    array->arrLen = lens;
}

struct DymaticIntArray * dymaticIntArrayAppend(const int *ptr[], int lens, struct DymaticIntArray *array)
{
    int i, *m_ptr = 0;
    m_ptr = (int *)(malloc(sizeof(int) * (lens + array->arrLen)));
    for(i = 0; i < array->arrLen; i++)
    {
        m_ptr[i] = array->arrayPtr[i];
    }
    free(array->arrayPtr);
    array->arrayPtr = m_ptr;
    array->arrLen += lens;

    for(i = 0; i < lens; i ++)
    {
        array->arrayPtr[array->arrLen + i] = ptr[i];
    }
    return array;
}


//动态Char数组
struct DymaticCharArray{
    char *arrayPtr;
    int  arrLen;
    int  arrIndex;
};



#endif /*selfSting*/
