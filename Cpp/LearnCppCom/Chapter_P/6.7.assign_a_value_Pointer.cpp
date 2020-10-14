#include <iostream>

int main(){
    int v{5};
    int *p = {&v};
    std::cout << &v << '\n';
    std::cout << p << '\n';
}