/*
    a function that swaps(or exchange the value of )two integers
    
    using int* as the arugement type
    
    and write another swap using int& as the argument type
    */

/******************************************************
 * AUTHOR: F3NG
 * DATE:   2020.08.22
 ******************************************************/

#include "cppBaseInclude.h"

void swapByPointer(int* first, int* last)
{
    int temp = *first;
    *first = *last;
    *last = temp;
}
//First: first number value
//Last:  second number value 
void swapByReference(int& first, int& last)
{
    int temp = first;
    first = last;
    last = temp;
}

int main(){
    int a = 5, b = 15;
    std::cout << "a is " << a << "," << "b is " << b << std::endl;
    swapByPointer(&a,&b);
    std::cout << "a is " << a << "," << "b is " << b << std::endl;
    int& aR = a;
    int& bR = b;
    swapByReference(aR, bR);
    std::cout << "a is " << a << "," << "b is " << b << std::endl;
}
