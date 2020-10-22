#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main()
{
    list<int> l { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    deque<int> dodd, deven;
    
    //Method 1
    /*
    for(auto const &x : l)
    {
        if(x % 2 == 0)
        {
            deven.emplace_back(x);
        }
        else
        {
            dodd.emplace_back(x);
        }
    }
    */
    
    //Method 2
    for(auto const &x : l)
    {
        ((x & 0x01)? dodd : deven).emplace_back(x);
    }
    
    cout << "\nOdd deque is:";
    for(auto iter = dodd.cbegin(); iter != dodd.cend(); ++iter)
    {
        cout << *iter << " " ;
    }
    cout << "\n";
    
    cout << "\nEven deque is:";
    for(auto iter = deven.cbegin(); iter != deven.cend(); ++iter)
    {
        cout << *iter << " " ;
    }
    cout << "\n";
    return 0;
}
