#include <iostream>

int main()
{
	int i;
	std::cout << "Enter an number =";
	std::cin >> i;
	switch(i)
	{
		case 1:
		    std::cout << 1 << '\n';
			break;
		case 2:
		    std::cout << 2 << '\n';
			break;
		case 3:
		    std::cout << 3 << '\n';
			break;
		
		default:
		    std::cout << "unknow";
		    break;
	}
	
	return 0;
}