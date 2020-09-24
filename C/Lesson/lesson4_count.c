#include <stdio.h>
#define BLANK   0x20
#define TAB     0x09
#define NEWLINE 0x0A

int main()
{
    int c , nL, nB, nT;
    nL = nB = nT;
    while ((c = getchar()) != EOF)
    {
        if(c == BLANK)
            ++nB;
        else if(c == TAB)
                ++nT;
            else if(c == NEWLINE)
                ++nL;
        printf("Newline is %d, blank is %d, tab is %d\n", nL, nB, nT);
    }
    return 0;
}