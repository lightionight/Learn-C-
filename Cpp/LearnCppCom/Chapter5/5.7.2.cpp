#include <iostream>

int sumTo(int value){
    int total = 0;
    for (int cout = 1; cout <= value; ++cout)
        total += cout;
    std::cout << total;
    return total;
}

int main(){
    int input;
    std::cout << "input a number\n";
    std::cin >> input;
    sumTo(input);
    return 0;
}
