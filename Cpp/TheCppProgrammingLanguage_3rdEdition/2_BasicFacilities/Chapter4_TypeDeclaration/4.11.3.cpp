#include "cppbaseInclude.h"


int main(){
    int num = 5;
    int* ptr = &num;
    enum week{After, before, now};
    std::cout << sizeof(int) << ',' << sizeof(int*) << ','<< sizeof(week);
}