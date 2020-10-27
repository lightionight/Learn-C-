/**
 * Write a function call doubleNumber() that takes one integer parameter.
 * The function should return double the value of the parameter.
 * Print it into console.
*/

/******************************************************
 * AUTHOR: F3NG
 * DATE:   2020.10.26
 ******************************************************/

#include <iostream>


int doubleNumber(int x)
{
    return (x + x);
}

int main()
{
    int i;
    std::cin >> i; // 没有输入判断;
    std::cout << doubleNumber(i);
    return 0;
}