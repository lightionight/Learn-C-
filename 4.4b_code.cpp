#include <iostream>
#include <string>

int main()
{
    //get user name
    using namespace std;
    cout << "what's your name ";
    string name;
    getline(cin , name);
    
    //get user age
    cout << "how old are you ";
    string age;
    getline(cin , age);
    
    //output information
    cout << "You're live " << age << " years for each letter in " << name;
    
    return 0;
    
    
  
}
