#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> flist { 1, 1, 2, 1, 1, 1, 3, 4, 9, 1, };
    
    //we need two iterators for forward_lists
    auto prev = flist.before_begin();
    auto curr = flist.begin();
    
    while(curr != flist.end())
    {
        if(*curr % 2)   //odd element delete it
        {
            curr = flist.erase_after(prev);
        }
        else
        {
            ++curr;
            ++prev;
        }
    }
    
    //Print
    for(auto const &x : flist)
    {
        cout << x << " " ;
    }
    cout << "\n";
    return 0;
}
