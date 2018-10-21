#include <iostream>

int main()
{
    int out = 1;
    //out的值在1-5内增加循环
    while(out <= 5){
        //初始化in的值
        int in = 5;
        while(out <= in){
            //in每循环一次减少1
            std::cout<< in-- << " ";
        }
        //内循环一次换一行
        std::cout<< "\n";
        
        ++out;    
    }
    return 0;
}

int main()
{
    int out = 5;
    while(out > 0){
        int in = 5;
        while(out <= in){
            std::cout<< in-- << " ";
        }
        std::cout<< "\n";
        --out;    
    }
    return 0;
}
