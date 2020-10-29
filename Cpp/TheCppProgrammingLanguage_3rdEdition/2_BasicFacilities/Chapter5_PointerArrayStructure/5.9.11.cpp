/**
 * 5.9.11. P105
 * Read a sequence of words from input.
 * Use Quit as word that terminates the input.
 * Print the words in the order they were enterd.
 * Don't Print word Twice.  //This not approch,需要一个动态的string Array来记录已经输入过的值
 * Modifity the program sort the words before Print them.
*/
/******************************************************
 * AUTHOR: FENG
 * TIME：2020.10.28
 * ***************************************************/

#include "cppBaseInclude.h"
#include <string>
#include <algorithm>
#include <array>
void getInput(std::string& test);
void printIt(std::string& result);

int main(){
    std::string data;
    getInput(data);
    std::sort(data.begin(),data.end());
    printIt(data);
    return 0;

}

void getInput(std::string& test)
{
    std::cin >> test;
    if(test == "Quit")
    {
        std::cout << "Program now is exit.";
        exit(0);
    }
}

void printIt(std::string& result)
{
    std::cout << result;
}