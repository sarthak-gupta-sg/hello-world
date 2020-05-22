#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<string> l;
    
    string word;
    
    cout << "Enter words:\n";
    while(cin >> word)
    {
        l.emplace_back(word);
    }
    
    cout << "\nYour input is:";
    for(auto const &x : l)
    {
        cout << x << " " ;
    }
    
    cout << "\nYour input is:";
    for(auto iter = l.cbegin(); iter != l.cend(); ++iter)
    {
        cout << *iter << " " ;
    }
    cout << "\n";
    return 0;
}
