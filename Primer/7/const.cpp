#include <iostream>

using namespace std;

int main()
{
    const int a {1};
    int const * const pa = &a;
    cout << *pa << endl;
    
    //We can bind reference to a const to non const;
    int b {1};
    int const & rb = b;
    cout << rb << endl;
    
    return 0;
}
