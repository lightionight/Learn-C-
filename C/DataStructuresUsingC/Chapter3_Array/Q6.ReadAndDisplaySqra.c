/*
    Calcular And display square.
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>




void displaySquareNumber();

int main()
{
    char input;
    int num, squareNum;
    num = squareNum = 0;
    /* get input */
    printf("Please input The Number you need to be square.\n");
    scanf("%d", &input);
    input = atoi(&input);
    printf("%d", num);

    /* Computer result */
    squareNum = num * num;

    /* Print result */
    printf("the result is %d X %d = %d\n", num, num, squareNum);

}

