/*
    a function that swaps(or exchange the value of )two integers
    
    using int* as the arugement type
    
    and write another swap using int& as the argument type
    */

#include "cppBaseInclude.h"

void swapByPointer(int* first, int* last)
{
    int temp = *first;
    *first = *last;
    *last = temp;
}

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
