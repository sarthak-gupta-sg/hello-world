#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    list<int> li { 1, 2, 3, 4, 5 };
    vector<double> vd (li.cbegin(), li.cend());
    
    cout << "Initialized double vector is :\n" ;
    for(auto const & x : vd)
    {
        cout << x << " " ;
        
    }
    cout << endl;

    return 0;
}
