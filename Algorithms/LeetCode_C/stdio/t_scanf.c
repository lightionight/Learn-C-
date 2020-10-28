#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("input value is : %d, Adress is : 0X%X", a, &a);
    return 0;
}