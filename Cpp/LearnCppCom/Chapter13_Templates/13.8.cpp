/************************************************
 * NAME   : Partial template specialization for pointers
 * AUTHOR : F3NG
 * DATE   : 2020.11.04.
 * Ref: https://www.learncpp.com/cpp-tutorial/13-8-partial-template-specialization-for-pointers/
************************************************/
// look closely about this
template <class T> 
class Array{
    Array();
};

template <>
class Array<char*>::Array(char* ptr){} // there is doesnt know what it type Pointer it is, the type Pointer is difference type.

// so we must rewrite Pointer type version class template
template<class T>
class Array<T*>{
    //detail about pointer type implement...
};