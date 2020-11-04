/************************************************
 * NAME   : Function template specialization
 * AUTHOR : F3NG
 * DATE   : 2020.11.04.
************************************************/
//When instantiating a function template for a given type.
//the compiler will stencils out a copy of the template function
//replace the template type parameter with the actual type used in
//variable declaration.
//That mean difference type will have the same implementation, most time
//it's suitable for us,

#include <iostream>
template<class T>
class storage{
    T m_value;
    public:
        storage();
        ~storage();
        void print();
};

template<class T>
void storage<T>::print(){
    std::cout << m_value << std::endl;
}

//this template suit for many type, like int ,double, etc.
//But some times implement a templated function has little slightly different
// What if the data type is string, template look just not suitable.
//for specific data type. when we detail with this case how we can solve??

// To do so, we intro FUNCTION TEMPLATE SPECIALIZATION(function template specialization)

template<> // remove type T
void storage<std::string>::print(){ // give the specifying type std::string
    // we can doing some difference implement in there...
}
//Above example is Show the way to do that, by remove the template type parameter,
//and explicitly secifying the type it is.

//WE can use this for all templates member function, 
//also for the non-member template function in the same way.
template<typename T>
T max(T x, T y) {return (x > y) ? x : y;}

template<int>
int& max(int a, int b){ return a;}// this is specifying declaration implement about type int


