#include <iostream>

int main()
{
    int a = 1;
    while(a <= 5){
        int b = 1;
        while(b <= 5){
            int c = 5;
            while(b < c){
                std::cout <<"x ";
                --c;
            }
            std::cout << b << " ";
            ++b;
            
        }
        std::cout << "\n";
        ++a;
        
    }
    return 0;
}
