#ifndef _ADD_H_
#define _ADD_H_
#include <iostream>
int add(int x, int y)
{
    return x + y;
}

void doSomething()
{
    #ifdef PRINT
    std::cout << "Printing!";
    #endif
    #ifndef PRINT
    std::cout << "Not Printing!";
    #endif
}

#endif //_ADD_H_
