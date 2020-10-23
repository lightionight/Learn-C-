
/**
 * TEST OVERLOADING
 * Define function f(char), g(char&), h(const char&)
 * Call them with argument 'a', 49, 3300, c, uc, sc,
 * c is char;
 * uc is unsigned char;
 * sc is signed char
 * Ref :what is unsigned Char and signed char 
 * ref: https://www.cnblogs.com/lsgxeva/p/10913024.html
*/

/******************************************************
 * AUTHOR: F3NG
 * DATE:   2020.08.23
 ******************************************************/

#include "cppBaseInclude.h"

char f(char);
char g(char&);
char h(const char&);

int main(){
    char c = 'a';
    unsigned char uc = 'a';
    signed char sc = 'a';
    f('a');
    f(49);  //(char)((int)49)
    f(3300);  //(char)((int)3300)
    f(c);   // no conversion
    f(uc);  //(char)(uc)
    f(sc);  // (char)(sc)

}

