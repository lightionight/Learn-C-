/*************************************************************
 * about Count blanks tabs and newlines
 * include <stdio.h>
 * variables :
 *      bl----->blanks
 *      ta----->tabs
 *      nl----->newlines
*************************************************************/

#include <stdio.h>
#define space 32
int main(){
    int bl, ta, nl, input;
    bl = ta = nl = 0;
    while((input = getchar()) != EOF)
    {
        switch (input)
        {
        case '\n':
            ++nl;
            break;
        case '\t':
            ++ta;
            break;
        case space:
            ++bl;
            break;
        default:
            break;
        }
    }
    printf("blanks is %d, tabs is %d, newline is %d.\n", bl, ta, nl);
    return 0;
}