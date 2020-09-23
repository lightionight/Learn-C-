#include <ctime>
#include <iostream>
//产生1-100的随机数
int prng(){
    int randomNumber;
    std::srand((unsigned)time(NULL));
    randomNumber = rand() % 100 + 1;
    return randomNumber;    
}

//获取用户猜测数字
int getInput(){
    int i;
    std::cin >> i;
    return i;
}

void letsPlay(){
    int y = prng();
    int loopTime = 1;
    std::cout << "Let's play a game. I'm thinking of a number. You have 7 tries to guess what it is.";
    while(loopTime <= 7){
        std::cout << "Guess #" << loopTime << ":" << getInput();
        int x = getInput();
        if(x > y){
                std::cout << "Your guess is too high";
                ++loopTime;
            }
            else if(x < y){
                std::cout << "Your guess is too low";
                ++loopTime;
            }
            else {
                std::cout << "Correct! You win!";
                loopTime = 8;
            }
        

    }
}



int main(){
    std::cout << prng();
    return 0;
}
// std::cout << "Guess #" <<  << ":";
// 
// 
// 
// 
// std::cout << "Sorry, you lose. The correct number was " <<  ;
// std::cout << "Would you like to play again (y/n) ?";