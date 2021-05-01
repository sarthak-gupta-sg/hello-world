#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    int ia[] { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    
    //Copy this to list and vector
    
    // Poor style
    /*
    
    list<int> la;
    vector<int> va;
    
    for(auto i = 0; i != 11; ++i) 
    {
        la.emplace(ia[i]);
        va.emplace(ia[i]);
    }
    */ 
    
    //Better
    list<int> la(ia, end(ia));
    vector<int> va(la.begin(), la.end());
    
    //Erase odd from list 
    auto iter = la.begin();
    while(iter != la.end())
    {
        if(*iter & 0x01)
        {
            iter = la.erase(iter);
        }
        else
        {
            ++iter;
        }
    }
    
    //Print results
    for(auto const & x : la)
    {
        cout << x << " " ;
    }
    cout << "\n";
        
        
    //Erase even from vector
    auto iter2 = va.begin();
    while(iter2 != va.end())
    {
        if(!(*iter2 & 0x01))    //(*iter2 & 0x00) will not work :) 
        {
            iter2 = va.erase(iter2);
        }
        else
        {
            ++iter2;
        }
    }
    
    //Print results
    for(auto const & x : va)
    {
        cout << x << " " ;
    }
    cout << "\n";
    
    return 0;
}
