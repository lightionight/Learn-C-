/**
 * Test the code diffence with iteration using pointer or iteration using indexing
*/

#include "cppBaseInclude.h"

void iByPointer(int* array, int length);
void iByIndexing(int* array, int length);

int main(){
    int array[5] = {1, 2, 3, 4, 5};
    iByIndexing(array, 5);
    iByPointer(array, 5);
}

void iByPointer(int* array, int length){
    for(int i = 0; i < length; i++)
    {
        std::cout << array[i] << std::endl;
    }
}   

void iByIndexing(int* array, int length){
    int* temp = array;  
    for(int i = 0; i < length; i++)
    {
        std::cout << *(temp++) << std::endl;
    }
}