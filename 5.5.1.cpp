#include <iostream>

int main()
{
    int x = 1;
    while(x <= 5){
        int y = 5;
        while(y >= 1){
            if(y <= x){
                std::cout << y << " ";
            }
            else{
                std::cout << "  ";
            }
            --y;
        }
        std::cout << "\n";
        ++x;
    }
    return 0;
}
