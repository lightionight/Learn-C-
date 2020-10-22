/*
    Q: what data type is your system largeest number
        char short, int, long ,float, double, long double, unsigned
*/

#include "cppBaseInclude.h"

int main()
{
    int a = sizeof(char);
    int b = sizeof(short);
    int c = sizeof(int);
    int d = sizeof(long);
    int e = sizeof(float);
    int f = sizeof(double);
    int g = sizeof(long double);
    int h = sizeof(unsigned);

    std::cout << a << ','
              << b << ','
              << c << ','
              << d << ','
              << e << ','
              << f << ','
              << g << ','
              << h << '.' << std::endl;      
}