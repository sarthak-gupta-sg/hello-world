#include <iostream>
#include <string>

using namespace std;

int main()
{
    string domain { "aceimnorsuvwxz" }, word, longest_word;
    unsigned word_length { 0 };
    
    while(cin >> word)
    {
        if(word.find_first_not_of(domain) == string::npos)
        {
            if(word.size() >= word_length)
            {
                longest_word = word;
                word_length = word.size();
            }
        }
    }
    
    cout << longest_word << " " << word_length << "\n";
    return 0;
}
