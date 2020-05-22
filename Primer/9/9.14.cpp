#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    list<char const *> lvar { "BARC", "RRCAT", "NPCIL"};
    vector<string> vvar;
    
    vvar.assign(lvar.cbegin(), lvar.cend());
    
    for(auto const & x : vvar)
    {
        cout << x << " " ;
    }
    
    cout << "\n" ;
    return 0;
}
