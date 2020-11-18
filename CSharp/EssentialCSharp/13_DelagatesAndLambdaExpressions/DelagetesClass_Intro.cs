/************************************************
NAME : Delagates AND Lambda Expressions
AUTHOR : F3NG
DATE : 2020. 11.04
************************************************/
//Lambda expression Also CAll Anonymous function(匿名函数或者匿名方法)
// as same as C/C++ delegate more like a function Pointer using. we can see function name as an pointer.
using system;
namespace DelegateTest
{
    class Test{
        public delegate void addNum(int a, int b);
        public delegate void SumNum(int a, int b);

        public void sum(int a, int b)
        {
            Console.WriteLine(a + b);

        }
        public void Add(int a, int b)
        {
            Console.WriteLine(a - b);
        }
        public static void Main(string[] Args)
        {
            Test obj = new Test();
            addNum del_obj1 = new addNum(obj.sum);
            SumNum del_obj2 = new SumNum(obj.Add);
            del_obj1(100, 40);
            del_obj2(100, 60);
        }
        
    }
}