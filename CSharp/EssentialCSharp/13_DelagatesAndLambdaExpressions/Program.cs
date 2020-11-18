using System;

namespace _13_DelagatesAndLambdaExpressions
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            int x = 5;
            x => x % 2 == 0;
            Console.WriteLine(x);
        }
    }
}
