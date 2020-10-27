/**
 * Ref: https://www.learncpp.com/cpp-tutorial/programs-with-multiple-code-files/
 * Test difference about include files and add to compiler time.
 * 
*/

#include <iostream>
#define PRINT
#include "add.h"

int main()
{
    int a,b;
    a = 5;
    b = 4;
    int result = add(a, b);
    std::cout << result;
    std::cout << std::endl;
    doSomething();
    return 0;
}