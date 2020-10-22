/*
    Write declaration:
        a pointer to a char,
        an array of 10 integers,
        a reference to an array of 10 integers,
        a pointer to an array of character strings,
        a pointer to a pointer to a character,
        a pointer to a pointer a constant integer,
        a pointer to a constant integer,
        a constant pointer pointer to an integer
    And initialize ecah one.

    int const* ptr----> reading it from right to left   ptr is a pointer to const int
    int *const ptr----> reading it from right to left   ptr is a const pointer to int 
*/

int main()
{
    char i = 'A';
    char* cPtr = &i;        //a pointer to a char.
    int number[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // an array of 10 integers
    int& cArrayPtr = *(number);     // a reference to an array of 10 integers.
    char name[] = "Tom Jackson";
    char* namePtr = name;           // a pointer to an array of character strings.
    char** cPPtr = &cPtr;   //a pointer to a pointer to a character.
    const int PI = 3;
    int const* intPtr = &PI;     // a pointer to const int
    int const** intPtrPtr = &intPtr;    // a pointer to pointer to const int
    int a = 5;
    int *const intConstPtr = &a;   // a const pointer to int.
}