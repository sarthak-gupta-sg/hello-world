#include <iostream>
#include <vector>

using namespace std;

bool function(int v, vector<int>::iterator iter1, vector<int>::iterator iter2)
{
    while(iter1 != iter2)
    {
        if(*iter1 == v)
        {
            return true;
        }
        iter1++;
    }
    
    return false;
}


int main()
{
    vector<int> values {1, 2, 3, 4, 5};
    vector<int>::iterator iter1 = values.begin();
    vector<int>::iterator iter2 = values.end();
    
    int v {0};
    cout << "Enter value to search:" ;
    cin >> v;
    
    cout << function(v, iter1, iter2);

    return 0;
}
