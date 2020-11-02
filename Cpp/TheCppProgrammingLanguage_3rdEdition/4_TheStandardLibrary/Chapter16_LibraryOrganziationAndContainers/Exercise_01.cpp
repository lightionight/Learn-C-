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
        Alpha(int startIndex, int endIndex);
        Alpha(int endIndex);
        Alpha(int startIndex);
        Alpha(std::vector<char>& string);
        void insertAlpha();
        void OrderIt();
        void reverseIt();
        void printIt();

};

void Alpha::insertAlpha(){
    m_string.resize(m_endIndex - m_startIndex);
    for(int i = 0; i < (m_endIndex - m_startIndex); i++)
    {
        Alpha::m_string.push_back((char)(i + m_startIndex));
    }
}

Alpha::Alpha(int startIndex, int endIndex){
    m_startIndex = startIndex;
    m_endIndex = endIndex;
    insertAlpha();

}

Alpha::Alpha(int endIndex){
    m_endIndex = endIndex;
    m_startIndex = 97;
    insertAlpha();
}

Alpha::Alpha(int startIndex){
    m_startIndex = startIndex;
    m_endIndex = 122;
    insertAlpha();
}

void Alpha::reverseIt(){
    

}

int main(){

}
