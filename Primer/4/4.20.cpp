#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> v { "NDLS", "MMCT", "INDB"};
    
    auto iter = v.begin();

    cout << *iter++ << endl;
    cout << (*iter)++ << endl;

    return 0;
}
