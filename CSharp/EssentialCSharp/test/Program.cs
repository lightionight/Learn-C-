using System;
using EssentialCSharp.testAbstract;

namespace test
{
    class Program
    {
        static void Main(string[] args)
        {
            Student myfriend = new Student("Tom Hackson", 32);
            myfriend.speakHello();
            myfriend.PrintmyName();
            
        }
    }
}
