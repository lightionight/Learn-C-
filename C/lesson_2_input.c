#include <stdio.h>

int main()
{
    int this_is_a_number;

    printf("Please enter a number: ");
    scanf("%d", &this_is_a_number);
    printf("You Entered %d", this_is_a_number);
    getchar();
    return 0;
}