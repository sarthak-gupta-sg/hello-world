#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a (50, 5);
    
    for(auto const &x : a)
    {
        cout << x << " " ;
    }

    cout << "\n";
    
    vector<char const *> b { "Var", "sh", "a"};
    
    for(auto const &x : b)
    {
        cout << x << " " ;
    }

    cout << "\n";
    return 0;
}
