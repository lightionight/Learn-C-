/**************************************************
    Once the String type variable asigned,
    it will be Immutable and Can't Change it's value
    the only way is asign it's value to other String
    type variable.
**************************************************/

using System;

namespace Chapter02
{
    class CheckStringValue{
        public static void test()
        {
            string myName = "This is immutabble", yourName;
            myName.ToUpper();
            Console.WriteLine(myName);
            yourName = myName.ToUpper();
            Console.WriteLine(yourName);
            Console.WriteLine(myName);
        }
    }
}