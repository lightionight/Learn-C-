#include <stdio.h>

//#define TESTMESSAGE

int main()
{
    #ifdef TESTMESSAGE
    printf("This is define");
    #else
    printf("THis is not define");
    #endif
    return 0;
}