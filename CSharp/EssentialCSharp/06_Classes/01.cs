/*
* OOP 3 Rules
    1.encapsulation
    2.Inheritance
    3.Polymorphism

* C# does NOT need delete Operator memory allocation and de-allocation are details that runtime manages.

*/

//Make files name as same as class name.
//Define an class
public class myName{ } //this is base class type. 



//Inheritance class
// C# Inheritance is SINGLE Inheritance,
public class students{
    private string name;
    int age;
    virtual getAge();
    public string name{ get {return this.name;} set{this.name = value;}}
    public string name2{get=> this.name; set=>this.name = value;}

public class litStudents: students{
    override getAge(){}
}
