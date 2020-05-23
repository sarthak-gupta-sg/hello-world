#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> lst { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };
    
    //Both iterators at same element
    auto elem1 = lst.begin() ; 
    
    //advance by 5
    //list iterators do not support '+' operator 
    advance(elem1, 5);
    
    auto elem2 = elem1;
    lst.erase(elem1, elem2);
    
    for(auto const &x : lst)
    {
        cout << x << " " ;
    }
    cout << "\n" ;
    return 0;
}
