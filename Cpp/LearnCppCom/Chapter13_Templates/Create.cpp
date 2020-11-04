/************************************************
 * NAME: Creating Template FIles
 * Author: F3NG
 * DATE : 2020.11.04
*************************************************/
#include <string>
#include <vector>
#include <fstream>
#include <iostream>

int main(){
    std::vector<std::string> data = {
        "/************************************************",
        " * NAME   : ",
        " * AUTHOR : F3NG",
        " * DATE   : 2020.11.04.",
        "************************************************/"
    };
    std::string pathName = "D:\\Project\\Learn_C_Family_Language\\Cpp\\LearnCppCom\\Chapter13_Templates\\";
    std::string filesName;
    std::cout << "Input Files Name : ";
    std::cin >> filesName;
    std::string path = pathName + filesName;
    std::ofstream createFile(path.data());
    if(createFile){
        for(int i = 0; i < data.size(); i++)
        {
            createFile << data.at(i) << std::endl;
        }
        createFile.close();
        std::cout << "create "<< filesName << " is done.";
    }
}