#include <string>
#include <iostream>

int calculate(int x,int y, char op)
{
    switch (op)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '%':
            return x % y;
        default :
            std::cout::<< "calculate fution unknow \n";
        return 0;
    }
}

int main()
{
	std::cout << "Enter x value ";
    int x;
    std::cin >> x;

    std::cout << "Enter y value ";
    int y;
    std::cin >> y;

    std::cout << "Enter a mathematical opratar : ";
    char op;
    std::cin >> op;

    std::cout << x << " " << op << " " << y << " is " << calculate(x, y, op) << "\n";
    return 0;
}
