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
    
    //We can do the same with pointers
    int c {1};
    int const *pc = &c;
    cout << *pc << endl;
    
    //valid
    c = 5;
    cout << *pc << endl; 
    
    //INVALID
    //Since pc is a pointer to const we can't use pc to modify c
    //*pc = 10;
    cout << *pc << endl; 
    return 0;
}
