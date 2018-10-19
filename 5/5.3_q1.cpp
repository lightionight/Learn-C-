#include <string>
#include <iostream>

enum calculateType
{
	a = "+",
	b = "-",
	c = ""
}

int calculate(int x,int y)
{
	using namespace std;
	cout << "Enter x value";
	cin >> x;
	cout << '\n';
	cout << "Enter y value";
	cin >> y;
	
	return x+y;
}

int main()
{
	calculate();
	std::cout << ""
}
