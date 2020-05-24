/*
 * Program to remove even numbered elements and
 * duplicate the odd numbered elements
 */ 

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> lst { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };
    
    for(auto iter = lst.begin(); iter != lst.end(); )
    {
        if(*iter % 2)
        {
            //odd
        }
        else
        {
            //even
            lst.erase(iter);
        }
    }
    
    for(auto const &x : d)
    {
        cout << x << " " ;
    }
    cout << "\n";
    return 0;
}
