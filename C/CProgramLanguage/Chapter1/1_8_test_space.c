#include <stdio.h>
#define space 32
int main(){
    int c;
    c = getchar();
    if(c == space)
    {
        printf("this is space");
    }
    else
    {
        printf("not ok");
    }
    return 0;
}
