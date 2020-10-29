/**
 * 5.9.13
 * Define a struct Date to keep track of dates.
 * Provide functions that read Dates from input,
 * Write Dates to Output and initalize DAte with a date.
 * Tips:  Considering Write a class about Data 
 *        and Contain construct and deconstruct and base operator Modifity function.
*/
/******************************************************
 * AUTHOR: FENG
 * TIME：2020.10.28
 * ***************************************************/

#include "5.9.13_DataClass.cpp"

int main(){
    test::Date* date = new test::Date();
    test::Date* date1 = new test::Date(1, 2, 2020);
    date1->PrintIt();
}