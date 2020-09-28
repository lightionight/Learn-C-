 /***************************************************
  *                                                 *
  *    USing for loop Print F and C from high to low*
  *                                                 *
  *                                                 *
  * ************************************************/

/*  Can use Symbolic Constant to replace the variable 
    and give the meaning for the variable and modifide
    will be so efficent
    just like this:
        #define LOWER  0        //表示最低温度为0度;
        #define UPPER  300      //表示上限温度为300度;
        #define STEP   20       //表示步长为20°;
*/

 #include <stdio.h>

 int main(){
     float fahr; // 为什么for循环的初始变量不能在for循环表达式里面申明???
     for (fahr = 300.0; fahr >= 0; fahr -= 20)
     {
         printf("F is %5.1fF, C is %5.1fC\n", fahr, (fahr -32) * (5.0 / 9.0));
     }
     return 0;
 }