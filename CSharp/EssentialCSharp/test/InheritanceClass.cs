using System;

namespace EssentialCSharp.testAbstract
{
    public class Student: human
    {
        public Student(string myname, int ID){
            this.myname = myname;
            this.ID = ID;
        }
        public override void speakHello(){
            System.Console.WriteLine("Hello, Friends");
        }
        
        public override void PrintmyName(){
            System.Console.WriteLine($"My name is {this.myName}, And ID is {this.ID}");
        }
        


    }
}