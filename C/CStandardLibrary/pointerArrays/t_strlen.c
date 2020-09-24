#include <stdio.h>
#include <stddef.h>

size_t tstrlen(char *s);

int main(){
    char s[1] = {'1'};
    printf("%u", tstrlen(s));
    return 0;
}

size_t tstrlen(char *s){
    char *p = s;
    while(*p != '\0'){
        ++p;
    }
    return p - s;
}