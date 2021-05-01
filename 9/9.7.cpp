#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> values {1, 2, 3, 4, 5};

    //Try to use size_type as index
    vector<int>::size_type s = values.size();
    for(auto i = 0; i != s; ++i)
    {
        cout << values[i] << " " ;
    }
    
    cout << endl;

    return 0;
}
