/************************************************
 * NAME   : Class template specialization
 * AUTHOR : F3NG
 * DATE   : 2020.11.04.
************************************************/
// In last chapter we had do function template for some specilization for spec type,
// this is also work for class template .
template<class T>
class storage8{
    T m_array[8];
    public:
        void set();
        void get(){
            // detail for type get() function.
        }
};
//think about if type is bool type. variables are address, and cpu can't address anything smaller than a byte.
//bool data type only need 1 bit, and 7 bit was waste.
//so we must spec implement about bool data type.

template<> // remove abstract parameter class T;
class storage8<bool>{ // 明确data type 为 bool 类型
    private:
        unsigned char m_data;
    public:
        void set();
        void get(){
            //do some difference with general type implement.
        }
};


