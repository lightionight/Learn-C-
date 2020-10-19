#include <baseIncludeHead.h>

void loop(int *array, int length, int *sum);
int loopv2(int n);
int main(){
    int array[5] = {1, 2, 3, 4, 5};
    int length = 5;
    int sum = 1, *ptr;
    ptr = &sum;
    //loop(array, 5, ptr);
    //printf("%d", *ptr);
    int val = loopv2(5);
    printf("%d", val);
    
}
void loop(int *array, int length, int *sum)
{
    int temp = 1;
    for(int i = 0; i < length; i++)
    {
        temp *= array[i];
        printf("%d\n", temp);
    }
    *sum = temp;
    temp = 1;
    length--;
    if(length > 0)
    {
         loop(array, length, temp);
    }
}

int loopv2(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return(n * loopv2((n - 1)));
    }
    
}