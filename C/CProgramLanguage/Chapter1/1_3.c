 /***************************************************
  *                                                 *
  *          Print F and C                          *
  *                                                 *
  *                                                 *
  * ************************************************/

#include <stdio.h>

#define _C_TO_F_

#ifdef _F_TO_C_
 int main(){
     float fahr, celsius;
     float low, upper, step;
     low = 0;
     upper = 300;
     step = 20;
     fahr = low;
     while(fahr <= upper){
         celsius = (5.0 / 9.0) * (fahr - 32.0);
         //printf("F is %f, C is %f", fahr, celsius);
         printf("F is %5.1fF, C is %5.1fC\n", fahr, celsius);// 修改输出格式 %5.1f ----> 输出变量占据5个char .1--->小数点后取一位
         fahr += step;
     }
     return 0;
 }
#endif //  _F_TO_C_

#ifdef _C_TO_F_

int main(){
    float fahr, celsius;
    float low, upper, step;
    low = 0;
    upper = 300;
    step = 20;
    celsius = low;
    while(celsius <= upper){
        fahr = celsius / (5.0 / 9.0) + 32.0;
         //printf("F is %f, C is %f", fahr, celsius);
        printf("F is %5.1fF, C is %5.1fC\n", fahr, celsius);// 修改输出格式 %5.1f ----> 输出变量占据5个char .1--->小数点后取一位
        celsius += step;
    }
    return 0;
}

#endif //_C_TO_F_