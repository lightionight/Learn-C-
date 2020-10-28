/**
 * LeetCode 01 Two number sum
 * 
 * Give array about int and target value
 * find two number in array that sum equal target, return them array index number.
 * only have one possible, and every element can using once.
 * Ref: cplusplus.com
*/
// AUTHOR:F3NG
//   TIME:20201027
//-------------------------------------------------------
//Question : What type Contains C++ have?
//


#include "cppBaseInclude.h"
#include <array>
#define TARGET 9
int main(){
    std::array<int, 5> number = {2, 5, 7, 10, 13};
    int* Ptr = number.data();
    for(int i = 0; i < number.size(); i++)
    {
        std::cout << *(Ptr + i) << std::endl;
    }
    return 0;
    
}
int getPair(std::array<int>& array)

