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



#endif /*selfSting*/
