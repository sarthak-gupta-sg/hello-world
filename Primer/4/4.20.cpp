#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> vOne { "NDLS", "MMCT", "INDB"};
    vector<string> vTwo { "", }; //NON Empty Container with EMPTY string
    vector<string> vThree ; //Empty Container 
    
    auto iter = vOne.begin();
    auto iter2 = vTwo.begin();
    auto iter3 = vThree.begin();

    cout << *iter++ << endl;
    
    //Illegal for strings as they do not have ++ defined
    //cout << (*iter)++ << endl;
    
    //Illegal. . binds tighter than * thus iter.empty() is evaluated first. iter is a pointer (or iterator). It has no member named empty()
    //cout << *iter.empty() << endl;
    
    cout << "True is: " << true << " and False is: " << false << endl; 
    if(iter->empty() == false) //better use if(!iter->empty())
    {
        cout << "Vector is not empty" << endl;
    }
    
    if(iter2->empty() == true) //better use if(iter->empty())
    {
        cout << "Vector's first element is empty" << endl;
    }
    
    //SEG FAULT since iter3 is not pointing to anywhere (Empty container)
    /*
    if(iter3->empty() == true)
    {
      
    }
    */
    
    if(vThree.empty())
    {
         cout << "Empty Vector" << endl;
    }

    return 0;
}
