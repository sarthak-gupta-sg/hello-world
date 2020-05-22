#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> iv { 1, 2, 2, 4, 5, 2, 7, 8, 2, 10 };
    int some_val = 2;
    vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
    
    while(iter != mid)
    {
        if(*iter == some_val)
        {
            *iter = 2 * some_val;
        }
        iter++;
    }

    for(auto iter = iv.cbegin(); iter != iv.cend(); ++iter)
    {
        cout << *iter << " " ;
    }
    cout << "\n";
    return 0;
}
