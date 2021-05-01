#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    list<char const *> lvar { "ONE", "TWO", "THREE"};
    vector<string> vvar;
    
    vvar.assign(lvar.cbegin(), lvar.cend());
    
    for(auto const & x : vvar)
    {
        cout << x << " " ;
    }
    
    cout << "\n" ;
    return 0;
}
