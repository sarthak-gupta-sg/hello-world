#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main()
{
    std::vector<int> vec;
    std::list<int> lst;
    int i;
    
    while(cin >> i)
    {
        lst.push_back(i);
    }
    
    std::copy(lst.cbegin(), lst.cend(), std::back_inserter(vec));
    
    return 0;
}
