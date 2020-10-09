/*
    * Transform int to Roman
    * :Like  I, V, X, L, C, D, M
    * I Can place before V or X to express 4 or 9;
    * X can place before L or C to express 40 or 90;
    * C cam place before D or M to express 400 or 900;
    * example
    *  3 = III;
    *  9 = IV;
    *  900 = CM;
    * 1 <= num <= 3999
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LENGTH 50;
#define RAND_MAX 3999

enum romanNumber{
    five = 5,
    ten = 10,
    five_ten = 50,
    hundred = 100,
    five_houdred = 500,
    thousand = 1000
};
enum testNum{
    ten = 10,
    houdred = 100,
    thousand = 1000
};
int main(){
    int num = rand();
    //设定输出参数char array；
    char s[MAX_LENGTH] = “look there”;
    char *p = s;


}