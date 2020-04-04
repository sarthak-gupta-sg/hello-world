#include <iostream>
#include <vector>

using namespace std;

void print(vector<int>::iterator beg, vector<int>::iterator end)
{
    if(beg != end)
    {
        cout << *beg;
        print(++beg, end);
    }
    return;
}


int main()
{
    vector<int> v {1, 2, 3, 4, 5};
    print(v.begin(), v.end());
    return 0;
}
