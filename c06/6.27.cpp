#include <iostream>

using namespace std;

//initializer lists are shared and not copied -- (VERIFY for function calls also)
//Therefore no need for references

long add(initializer_list<int> vals)
{
    long sum = 0;
    
    for(auto x : vals) //for(auto & x : vals) is also ok
    {
        sum += x;
    }
    return sum;
}

int main()
{
    initializer_list<int> vals { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    cout << "Sum of the list is: " << add(vals) << endl;
    
    return 0;
}
