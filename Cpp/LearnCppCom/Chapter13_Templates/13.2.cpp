/***************************************************
 * NAME : Function Templates inStances
 * AUTHOR :FENG
 * DATE: 2020.11.03
 * ************************************************/

// C++ does not compile the template function directly. Instead ,at compile time,
// the compiler will cout the call to a tempalte function, and replicates them with actual types.
// this function template with actual types is called function template instance.

// when we want use function template we must do some more operator define about max template.
#include <string>
#include <iostream>
template <typename T>
const T& max(const T& x, const T& y) {return (x > y) ? x : y;}

class Person{
    private:
        std::string name;
        int age;
    public:
        Person(const std::string& stringN, int ages){
            name = stringN;
            age = ages;

        }
        int getAge(){
            return this->age;
        }
        friend bool operator>(const Person& A, const Person& B) // define this Operator function template can using
        {
            return(A.age > B.age);
        }
        friend std::ostream& operator<<( std::ostream& out, const Person& A){
            out << "Name is : " << A.name << ", Age is : " << A.age << std::endl;
            return out;
        }
};

int main(){
    Person A("HAHA",12);
    Person B("HEHE", 15);
    Person C =max(A, B);
    std::cout << C;
    return 0;

}