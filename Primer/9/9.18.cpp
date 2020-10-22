#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<string> d;
    
    string word;
    
    cout << "Enter words:\n";
    while(cin >> word)
    {
        d.emplace_back(word);
    }
    
    cout << "\nYour input is:";
    for(auto const &x : d)
    {
        cout << x << " " ;
    }
    
    cout << "\nYour input is:";
    for(auto iter = d.cbegin(); iter != d.cend(); ++iter)
    {
        cout << *iter << " " ;
    }
    cout << "\n";
    return 0;
}
