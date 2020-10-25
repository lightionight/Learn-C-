/**
 * define an array contain the string of month, pass it by reference to a function and print it.
*/

#include "cppBaseInclude.h"

typedef char* stringMonth;

void printIt(stringMonth& thisYear);

int main(){
    // ISO C++ forbids converting a string constant to 'char*'
    char* monthString = "January, Ferburay, March, April, May, June, July, Augest, Septerber, Octerber, November, December";
    stringMonth& thisYear = monthString;
    printIt(thisYear);
    return 0;

}

void printIt(stringMonth& thisYear){
    int i = 0;
    while(thisYear[i] != '\0')
    {
        std::cout << thisYear[i];
        i++;
    }
}