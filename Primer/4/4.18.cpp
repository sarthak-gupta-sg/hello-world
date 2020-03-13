#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Program to print all element of a vector til the first negative element
    vector<int> v { 5, 10, 23, 45, -6, -7};
    
    auto beg = v.begin();
    while(beg != v.end() && *beg >= 0)
        cout << *++beg << " " << endl << flush;

    return 0;
}
