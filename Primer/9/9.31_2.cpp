/*
 * Program to remove even numbered elements and
 * duplicate the odd numbered elements
 * using forward_lists
 */ 

#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> flst { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };
    
    for(auto curr = flst.begin(), prev = flst.before_begin(); curr != flst.end(); )
    {
        if(*curr % 2)
        {
            //odd
            
            //Good Implementation
            curr = flst.insert_after(prev, *curr);
            advance(curr, 2);
            advance(prev, 2);
            
            //Brittle Implementation - Can break if not careful
            /*
            flst.insert_after(prev, *curr);
            advance(curr, 1);
            advance(prev, 2);
            */ 
        }
        else
        {
            //even
            curr = flst.erase_after(prev);
        }
    }
    
    //Print
    for(auto const &x : flst)
    {
        cout << x << " " ;
    }
    cout << "\n";
    
    //For testing
    for(auto curr = flst.begin(); curr != flst.end(); ++curr)
    {
        cout << *curr << " " ;
    }
    cout << "\n";
    return 0;
}
