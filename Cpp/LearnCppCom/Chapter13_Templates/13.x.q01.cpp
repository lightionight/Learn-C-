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
// #include <iostream>
// template<typename T>
// void Pairs(T T1, T T2){
//     //add compare who is bigger than other.
//     if(T1 > T2){
//         std::cout << "Pair: " << T1 << ' ' << T2 << std::endl;
//     }
//     else{
//         std::cout << "Pair: " << T2 << ' ' << T1 << std::endl;
//     }
// }
//Q1 answer
#include <iostream>
template<class T>
class Pair{
    private:
        T T1, T2;
    public:
        Pair(const T& first, const T& last): T1(first), T2(last){}
        // /~Pair();
        const T& Fisrt(){return T1;}
        const T& last(){return T2;}
        void Pairs(){
            std::cout << "Pair: " << Fisrt() << ' ' << last() << std::endl;
        }
};
//Q2 answer
template<class TA, class TB>
class Pair2{
    private:
        TA m_ta;
        TB m_tb;
    public:
        Pair2(const TA& first, const TB& last): m_ta(first), m_tb(last) {}
        const TA& first(){return m_ta; }
        const TB& last(){return m_tb; }
        void Pairs(){
            std::cout << "Pair: " << first() << ' ' << last() << std::endl;
        }
};

// template<std::string name, int size>
// class Pair3: public Pair2<name, size>{
//     protected:
// };



int main()
{
    Pair<int> p1(5, 6);
    p1.Pairs();
    Pair<double> p2(1.2, 3.4);
    p2.Pairs();

    Pair2<int, double> p3(5, 1.2);
    p3.Pairs();
    Pair2<double, int> p4(3.4, 2);
    p4.Pairs();
    Pair2<std::string, int> p5("hello", 5);
    p5.Pairs();

}