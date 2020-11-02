/**
 * P459
 * Create a vector<char> containing the letters of the alphabet in order, 
 * Print the elements of the vector in order and reverse Order
*/

// AUTHOR :FENG
// DATE: 2020.11.02
#include <iostream>
#include <vector>
class Alpha{
    private:
        std::vector<char> m_string;
        int m_startIndex;
        int m_endIndex;
        //int getSIndex(){ return m_startIndex;}
        //int getEIndex(){ return m_endIndex;}
    public:
        Alpha();
        Alpha(int& startIndex, int& endIndex);
        Alpha(std::vector<char>& string);
        void insertAlpha();
        void reverseIt();
        void printIt();

};
Alpha::Alpha(){
    m_startIndex = 97;
    m_endIndex = 122;
    insertAlpha();
}

void Alpha::insertAlpha(){
    m_string.(m_endIndex - m_startIndex); // <------ Problem On there
    for(int i = 0; i < (m_endIndex - m_startIndex); i++)
    {
        Alpha::m_string.push_back((char)(i + m_startIndex));
    }
}


Alpha::Alpha(int& startIndex, int& endIndex){
    m_startIndex = startIndex;
    m_endIndex = endIndex;
    insertAlpha();

}

void Alpha::reverseIt(){
    char temp;
    for(int i = 0; i < m_string.size() / 2; i++)
    {
        temp = m_string.at(i);
        m_string.at(i) = m_string.at(m_string.size() - i - 1);
        m_string.at(m_string.size() - i - 1) = temp;
    }

}

void Alpha::printIt(){
    for(int i = 0; i < m_string.size(); i++)
    {
        if(i != m_string.size() - 1){
            std::cout << m_string.data()[i] << ',';
        }
        else{
            std::cout << m_string.data()[i] << '.' << std::endl;
        }
            
    }
}

int main(){
    Alpha a;
    a.reverseIt();
    a.printIt();
    return 0;
}
