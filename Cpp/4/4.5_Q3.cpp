#include <string>
#include <iostream>

//define a fuction
int jugement()
{
    int x;
    std::cin >> x;
    if (x > 0)
     {
         std::cout<< "TRUE";
     }
     
     else
     {
         std::cout<< "False";
     }
     return x;

}

int main()
{
    std::cout <<jugement();
    return 0;
}
    
