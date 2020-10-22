/*
    typedef 
        unsigned char, 
        const unsigned char, 
        pointer to integer,
        pointer to pointer to char,
        pointer to array of char,
        array of 7 pointer to int, -------> first define a arryof 7 Pointer to int like typedef int* array[7]
        pointer to an array of 7 pointer to int ------->then  re define typeof array* arrPtr, arrPtr is Pointer to an array of 7 pointer to int
        array of 8 arrays of 7 pointer to int;  -------->redefine like above;
*/

int main()
{
    typedef unsigned char uchar;
    typedef const unsigned char cUchar;
    typedef int* iPtr;
    typedef int** iPPtr;
    typedef char** cPPtr;
    typedef char*  cPtr;
    typedef int* array[7];
    typedef array* Pointer;
    typedef array* array8[8];
    typedef array8* finnas;

}