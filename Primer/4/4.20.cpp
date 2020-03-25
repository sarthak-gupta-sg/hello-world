#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> v { "NDLS", "MMCT", "INDB"};
    
    auto iter = v.begin();

    cout << *iter++ << endl;
    
    //Illegal for strings as they do not have ++ defined
    //cout << (*iter)++ << endl;
    
    //Illegal. . binds tighter than * thus iter.empty() is evaluated first. iter is a pointer (or iterator). It has no member named empty()
    //cout << *iter.empty() << endl;
    
    cout << "True is: " << true << " and False is: " << false << endl; 
    if(iter->empty

    return 0;
}
