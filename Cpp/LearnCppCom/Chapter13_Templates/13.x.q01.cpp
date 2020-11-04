/************************************************
 * NAME   : 
 * AUTHOR : F3NG
 * DATE   : 2020.11.04.
************************************************/
/*
int main()
{
	Pair1<int> p1(5, 8);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
 
	const Pair1<double> p2(2.3, 4.5);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
 
	return 0;
}
*/
#include <iostream>
template<typename T>
void Pair(T T1, T T2){
    //add compare who is bigger than other.
    if(T1 > T2){
        std::cout << "Pair: " << T1 << ' ' << T2 << std::endl;
    }
    else{
        std::cout << "Pair: " << T2 << ' ' << T1 << std::endl;
    }
}

int main()
{
    Pair(5, 6);
    Pair(5, 4);
    Pair(1.2, 2.3);

}