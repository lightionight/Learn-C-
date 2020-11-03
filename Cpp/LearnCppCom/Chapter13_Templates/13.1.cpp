/***************************************************
 * NAME : Function Templates
 * AUTHOR :FENG
 * DATE: 2020.11.03
 * ************************************************/


// we often write
int max1(int x, int y);

//when need double version, we also rewrite a double version
double max2(double x, double y);

//This is violate the general programming guideline
//So we need Function templates

//What is Function template?
// A template is a model that servers as a pattern for creating similar objects
// In C++, function templates are functions that serve as apattern for creating other similar functions
// Base idea is create a function without having to anndence exact type 
// This is solution
//T max3(T x, T y) {return (x > y) ? x : y;}

// Add C++ function Template form
template <typename T>  // brackets< > inside keyword is typename or class, there is no difference.
T max4(T x, T y) {return (x > y) ? x : y;}
//That's all we need.
/**but, if you use class, you must care argument pass a class is not good optional
 * hence we usually using reference
*/
#include <iostream>

template <typename T>
const T& max(const T& x, const T& y) {return (x > y) ? x : y;}

int main(){
    int i = max(3, 7);
    std::cout << i << std::endl;
}