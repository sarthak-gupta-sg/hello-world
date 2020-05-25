#include <iostream>
#include <string>

using namespace std;

int main()
{
    string domain { "aceimnorsuvwxz"}, word;
    
    while(cin >> word)
    {
        if(word.find_first_not_of(domain) == string::npos)
        {
            cout << word << " HIT\n";
        }
    }
    return 0;
}
