#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector<int> v1 {1, 2, 3, 4, 5};
    list<int> l1 {1, 2, 3, 4, 5};
    list<int> l2 {1, 2, 3, 5};
    
    cout << boolalpha << (vector<int> (l1.begin(), l1.end()) == v1 ) << endl;
    cout << boolalpha << (vector<int> (l2.begin(), l2.end()) == v1 ) << endl;

    return 0;
}
