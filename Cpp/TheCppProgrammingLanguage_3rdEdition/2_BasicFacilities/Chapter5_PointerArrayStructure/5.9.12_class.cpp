/**
 * 5.9.12_MATCH_DATA CLASS
 * Write a function that count the pair of letters in strings
 * one way to using c++ style code.
 * Other way to using array of char zero-Terminated style
 * Sounds like "ab" in "xabaacbaxabb"
*/
/******************************************************
 * AUTHOR: FENG
 * TIME：2020.10.29
 * ***************************************************/

#ifndef _5_9_12_CLASS_CPP_
#define _5_9_12_CLASS_CPP_
#include <string>
namespace test{
    class FindMatch{
        private:
            std::string m_InputString;
            std::string m_matchPattern;
            int m_count;
            int countPattern(std::string& inputString, std::string& matchPattern)
            {
                if(inputString.length < matchPattern.length)
                {
                    std::cout << "This Pattern too big for String."
                    return -1;
                }
                int result = 0;
                for(int i = 0; (i + matchPattern.length) < inputString.length; i++)
                {
                    int sum, count;
                    sum = 0;
                    count = matchPattern.length;
                    for(int j = 0; j < matchPattern.length; j++)
                    {
                        if(inputString[j] == matchPattern[j])
                        {
                            sum++;
                            if(sum == count)
                            {
                                result++;
                            }
                        }
                    }
                }
                return result;
            }
        public:
            FindMatch* FindMatch():m_InputString(NULL), m_matchPattern(NULL),m_count(0){}
            void FindMatch(std::string& input, std::string& pattern)
            {
                m_InputString = input;
                m_matchPattern = pattern;
                m_count = countPattern(m_InputString,m_matchPattern);
            }
            void printFindMatch()
            {
                std::cout << "The string is " << m_InputString << std::endl
                          << "Match Pattern is " << m_matchPattern << std::endl
                          << "In string  match count is " << m_count << std::enl;
            }
            //~FindMatch(){delete this}
    };
}

#endif // _5_9_12_CLASS_CPP_