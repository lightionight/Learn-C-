/************************************************
 * NAME   : Int Array Templates
 * AUTHOR : F3NG
 * DATE   : 2020.11.04
************************************************/
// when we create an class about int array
class IntArray{
    private:
        int  m_length;
        int* m_ptr;
    public:
        IntArray();
        IntArray(int length);
        IntArray(int* array, int length);
        ~IntArray(){ delete[] m_ptr;}
        void Erase();
        int& operator[](int index){
            return m_ptr[index];
        }
        int length(){return m_length;}
        
};
// what if we want create datea type about double version?
//we must rewrite 
class DoubleArray{
    private:
        int m_length;
        double* m_ptr;
    public:
        DoubleArray();
        DoubleArray(int length);
        DoubleArray(double* array, int length);
        ~DoubleArray();
        void Erase();
        double& operator[]( int index);
        double length();
};

//like this we just do the same work again. there is a simply way by use Template Class


template<class T>
class Array{
    private:
        int m_length;
        T* m_Ptr;
    public:
        Array();
        Array(int length);
        Array(T* array, int length);
        ~Array();
        void Erase();
        T& operator[](int index);
        double length();
};

//Template is compiler time define, and if you are not uding this template in other place.
//the compiler won't even compiler it

//template class are ideal for implementing container classes.
//because it's highly desirable to have containers work across a wide variety of data types,
//template allow us to do so without duplicating code.
//although it has small problem,But it still most useful features.

//template is not a class or a function, it's a stencil used to create class or function.
//it's does not work in quite the same way as normal functions or class.

//In non-template class, the common procedure is to put the class definition in a head files,
//and the memmber function definition in a similarly named code file.
// just like this:
/*
              Class
            /       \
           /         \ 
          /           \
    Head files     implement code files
*/