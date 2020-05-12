#include <iostream>
#include <vector>

using namespace std;

vector<int>::iterator function(int v, vector<int>::iterator iter1, vector<int>::iterator iter2)
{
    while(iter1 != iter2)
    {
        if(*iter1 == v)
        {
            return iter1;
        }
        iter1++;
    }
    
    return iter2;
}


int main()
{
    vector<int> values {1, 2, 3, 4, 5};
    
    int v {0};
    cout << "Enter value to search:" ;
    cin >> v;
    
    auto location = function(v, values.begin(), values.end());
    if ( location == values.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found at " << location - values.begin() + 1 << " from start." << endl;
    }
    
    return 0;
}
