#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> vOne { "NDLS", "MMCT", "INDB"};
    vector<string> vTwo ; //Empty
    
    auto iter = vOne.begin();
    auto iter2 = vTwo.begin();

    cout << *iter++ << endl;
    
    //Illegal for strings as they do not have ++ defined
    //cout << (*iter)++ << endl;
    
    //Illegal. . binds tighter than * thus iter.empty() is evaluated first. iter is a pointer (or iterator). It has no member named empty()
    //cout << *iter.empty() << endl;
    
    cout << "True is: " << true << " and False is: " << false << endl; 
    if(iter->empty() == false)
    {
        cout << "Vector is not empty" << endl;
    }
    
    if(iter2->empty() == true)
    {
        cout << "Vector is not empty" << endl;
    }

    return 0;
}
