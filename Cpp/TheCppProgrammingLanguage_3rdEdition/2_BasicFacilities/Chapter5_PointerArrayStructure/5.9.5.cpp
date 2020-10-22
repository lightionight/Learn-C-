/*
    What size of string??
    char str[] = "a short string"
*/

#include "cppBaseInclude.h"

int main(){
    char str[] = "a short string";
    int size = sizeof(str);
    int length = sizeof(str) / sizeof(str[0]);
    std::cout <<"Size is " << size << ',' << " Length is " << length << std::endl;
}