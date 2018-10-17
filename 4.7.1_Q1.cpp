
#include <iostream>

struct advertising
{
    int adsCount;
    double clickPercentage;
    double eachClickMoney;
};

advertising getAdvertising()
{
    advertising temp;
    std::cout << "How many ad's your website show today ?";
    std::cin >> temp.adsCount;
    std::cout << "How much user's clickPercentage of each ads";
    std::cin >> temp.clickPercentage;
    std::cout << "How much you can earn of one click";
    std::cin >> temp.eachClickMoney;
    return temp;
}

void printAdvertising（advertising ad）
{
    std::cout << "Number of ads show =" << ad.adsCount << '\n';
    std::cout << "User's clickPercentage of each ads =" << ad.clickPercentage << '\n';
    std::cout << "every click ,you earn money is " << ad.eachClickMoney << '\n';
    
    std::cout << "totally earn money is" << 
        (ad.adsCount * ad.clickPercentage / 100 * ad.eachClickMoney) << '\n';
}

int main()
{
    advertising ad = getAdvertising();
    printAdvertising(ad);
    
    return 0;
}
