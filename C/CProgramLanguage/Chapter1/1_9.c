/*************************************************************
 * About Copy input to ouput, and replace each blank or more 
 * blank to single blank
 * 
*************************************************************/

#include <stdio.h>
#define MAX  10
int main(){
    int blank = 32;
    int blCount = 0;
    char name[] = "The world need    some  beautiful things.";
    //printf("%c\n", name);
    char *cPtr;
    cPtr = name;
    for(;*(cPtr) != '\0';){
        if((int)*(cPtr) == blank){
            printf("%c",*(cPtr));
            while((int)*(++cPtr) == blank){}
        }
        printf("%c",*(cPtr));
        ++cPtr;  
    }
    

    
}