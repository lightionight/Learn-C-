using System;
class MyFirstLambdaDelegate{
    public static void Main(){
        int x = 5;
        x => x % 2 == 0;
        Console.WriteLine(x);
    }
}