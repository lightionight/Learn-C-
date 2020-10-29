#ifndef _DATE_CLASS_CPP_
#define _DATE_CLASS_CPP_

#include <iostream>

namespace test{
    class Date{
            int day, month, year;
            int& getDay(){ return day;}
            int& getMonth(){ return month;}
            int& getYear(){ return year;}
            //assign value
            void assignDay(int& d){ day = d;}
            void assignMonth(int& m){ month = m;}
            void assignYear(int& y){ year = y;}
        public:
            Date(){
                day = 1;
                month = 1;
                year = 2000;
            }
            Date(int d, int m, int y){
                assignDay(d);
                assignMonth(m);
                assignYear(y);
            }
            void PrintIt()
            {
                std::cout << "This year is : " << year << std::endl;
                std::cout << "This month is : " << month << std::endl;
                std::cout << "This days is : " << day << std::endl;
            }


    };
}

#endif  //_DATE_CLASS_CPP_