/**
 * Chapter10.2.4 Static Class Member
 * 
 * Test how to using and define an class static member
 * 
 * a static member can be referred to without mentioning the class object;
*/

class Date{
    int m_d, m_m, m_y;
    static Date default_date;
public :

    static void set_Default(int d, int m, int y);
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
    Date Date::set_Default(16, 12, 1760);
    void Date::set_Default(int d, int m, int y){
        Date::default_date = Date(d, m, y)
    }
    void f()
    {
        Date::setDefault(12, 6, 1760);
    }
}