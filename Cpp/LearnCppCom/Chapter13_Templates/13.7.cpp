/************************************************
 * NAME   : Partial template specialization
 * AUTHOR : F3NG
 * DATE   : 2020.11.04.
************************************************/
//In 13.4 we use expreesion parameter for parameterize template class
template<class T, int size> class StaticArray{};  // size is value parameter.

// when we want a functio Print all element in static array, we can implement as member function 
// or non-member function

// This is non-member function template implement it.
template<typename T, int size>
void print(StaticArray<T, size>& array){
    for(int count{0}; count < size; ++ count)
        std::cout << array[count] << ' ';
}
// it will fine with number like 1 2 3 4 5;
//but deal with char array will like this h e l l o w o r l d, this not we want
//for now, we have two way to specifying it,by function specialization like
template<>
void print(StaticArray<char,12>& array)
{
    //implement detail...
}

// or use class specialzation
template<> class StaticArray<char,8>
{
    //implement detail...
};

// What is Partial template specialization ?
//Partial template specialization allow us to specialize classes but not all.
// there is problem solution
template<int size>
class StaticArray<char, size>{
    //Implement detail......
};

//it can detial with all specialize case
StaticArray<char,12> myname;
StaticArray<char,18> myName2;

//but not effecting the general type like int type implement;
StaticArray<int,13>  number1;
StaticArray<int, 15> number2;

//NOTE!!! partial template specialization can only be with class ,in C++14;
// NOT template functions;
// And we mmust rewrite entrie class for spec, but its not good for engough;
// We can use inhert base class to impl;

template<class T, int size>
class Array_base{ //Base Class
    private:
        T* m_array;
    public:
        Array_base();
        Array_base(int size);
        virtual ~Array_base();
        void print();
};

template<class T, int size>
class StaticArray: public Array_base<T, size>{ // 继承Array base template class 
    public:
};


template <int size>
class StaticArray: public Array_base<double, size>{
    public:
        //Write difference version print about double type;
        void print(){
            //Some spec about implement double data type print.
        }
}