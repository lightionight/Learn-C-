// Ref: https://www.geeksforgeeks.org/function-pointer-in-c/
#include <stdio.h>

void fun(int a)
{
    printf("Value of a is %d\n", a);
}
void func1(){printf("Function1\n");}
void func2(){ printf("Function2\n");}
void warpper(void (*fun)())
{
    fun();
}
int main(){
    void (*fun_ptr)(int) = &fun;// and remove &, 
                                // just write void(*fun_ptr)(int) = fun;
    //equal void (*fun_ptr)(int);
    //fun_ptr = &fun;
    // function pointer points to Code, not data.
    // function name can get function memory address. simply like &fun, just like &a, get adress notion
    (*fun_ptr)(10);
    //like normal data pointers, a function pointer can also be pass as an argument 
    // And can also return
    warpper(func1);
    warpper(func2);
    return 0;
}