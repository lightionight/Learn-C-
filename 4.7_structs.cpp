#include <iostream>

struct students
{
    short id;
    int age;
    double wage;
};
//
void printStudentsInformation(students Student)
{
    std::cout << "ID : " << Student.id << "\n";
    std::cout << "Age : " << Student.age << "\n";
    std::cout << "wage : " << Student.wage << "\n";
}

int main ()
{
    students tom = {1,20,60.5};
    students jack = {2,24,45.5};
    //print one's information
    printStudentsInformation(tom);
    std::cout << "\n";
    printStudentsInformation(jack);
    return 0;
}
