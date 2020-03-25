#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v { 1, 2, 3, 4, 5,};
    
    //Check for odd number and double it
    for(auto iter = v.begin(); iter != v.end(); ++iter)
    {
        *iter = (*iter % 2 == 0) ? *iter : *iter * 2;
    }
    
    //Print the vector
    for(auto x : v)
    {
        cout << x << endl;
    }
    
    //Advanced for loop
    vector<int> v2 { 1, 2, 3, 4, 5,};
    for(auto & x : v2)
    {
        x = (x % 2 == 0) ? x : x * 2;
        cout << x << endl;
    }

    return 0;
}
