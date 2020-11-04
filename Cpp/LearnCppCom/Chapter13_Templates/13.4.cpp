/************************************************
 * NAME   : Template non-type parameters
 * AUTHOR : F3NG
 * DATE   : 2020.11.04.
************************************************/
//template type parameter are not only type of template parameter avaiable.
//Template Classes and function can make use of another kind if Template parameter known as a non- type parameter.
//A template non-type parameter is does not substitute for a type, but is instead replaced by a value.
// following are some representation:
// a value that has int type or enum;
// a pointer or reference to a class object;
// a pointer or reference to a function;
// a pointer or reference to a class member function;
// std::nullptr_t
template <class T, int size> // size is non-type parameter, will replace by a value;
class StaticArray{
    private:
        T m_array[size];
    public:
        T* getArray();
        T* operator[](int index);
};

//Template class implement

template<class T, int size>
T* StaticArray<T, size>::getArray(){
    return m_array;
}

//one noteworthy thiig about above example is that we do not have to dynamically allocate the m_array
//member variale, because any instance of StaticArray the size is actually constant.
//This is used by standard libaray class std::array;
//You can simply create an array about 5 int number by 
#include <array>
std::array<int, 5> myvariable;