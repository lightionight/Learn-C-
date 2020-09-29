/***********************************************
    TEST TYPE CHAR SIZE IN C#
***********************************************/

using System;

namespace EssentialCSharp.Chapter1
{
    public class SizeOfChar{
        public static void PrintLengthOfChar(){
            char myName;
            myName = 'T';
            Console.WriteLine(sizeof(char));
            Console.WriteLine(sizeof(Int16));
            Console.WriteLine(sizeof(Int32));
            Console.WriteLine(sizeof(Int64));
            //Console.WriteLine(sizeof(string));
            Console.WriteLine(sizeof(float));
            Console.WriteLine(sizeof(double));
        }
    }
}
