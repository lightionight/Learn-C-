#include <stdio.h>

int main(){
    char *s;
    char ar[] = {'2', '4', '5', '6', 'u'};
    s = ar;// Point *
    int n;
    for( n = 0; n < 5; n++)
    {
        if(n != 4){
            printf("%c, ", *(s++));

        }
        else{
            printf("%c", *(s++));
        }
        
    }
    return 0;
}