/**
 * 10.2.1 Member Function
 * Test member function by using struct and class type represent
 * 
 * Struct has public member by default;
 * Class has private member by default;
 * Struct also have member function.
 * Ref: https://stackoverflow.com/questions/24196885/can-c-struct-have-member-functions
*/

/******************************************************
 * AUTHOR: F3NG
 * DATE:   2020.10.26
 ******************************************************/

struct DateStruct{
    int d, m, y;
    void DateStruct::init_Date(DateStruct& date, int, int, int);
    void DateStruct::add_day(DateStruct& date, int d)
    {
        date.d = d;
    }
    void DateStruct::add_month(DateStruct& date, int m)
    {
        date.m = m;
    }
    void DateStruct::add_year(DateStruct& date, int y)
    {
        date.m = m;
    }
};

class Date{
    int m_d, m_m, m_y;

    Date(int d, int m, int y)
    {
        m_d = d;
        m_m = m;
        m_y = y;
    }

    void add_day(int d){
        m_d += d;
    }
    
    void add_month(int m)
    {
        m_m +=m;
    }

    void add_year(int y)
    {
        m_y = y;
    }
};

int main(){
    DateStruct dateStruct;
    DateStruct& dateStructR = dateStruct;
    dateStruct.init_Date(dateStructR, 31, 6, 2020);
    dateStruct.add_day(dateStructR, 2);
    dateStruct.add_month(dateStructR, 1);
    dateStruct.add_year(dateStructR, 3);
}
