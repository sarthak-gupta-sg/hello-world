#include <iostream>

using namespace std;

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

//This is pointer to first element of the array
int * arrType(int index)
{
    return (index % 2) ? odd : even;
}

//This is pointer to the whole array
decltype(odd) * arrType2(int index)
{
    return (index % 2) ? &odd : &even;
}


int main()
{
    int index {0};
    cout << "Enter a positive integer: ";
    cin >> index;
    
    int *p = arrType(index);
    for(auto i = 0; i != 5; ++i)
    {
        cout << *(p + i) << " ";
    }
    
    //Will not work since we do not have iterators which can be computed by begin(p) and end(p)
    /*
    for(auto x : p)
    {
        cout << x << " ";
    }
    */
    
    int (*ptr)[5] = arrType2(index);
    for(auto i = 0; i != 5; ++i)
    {
        cout << *(*ptr + i) << " ";
    }
    
    
    cout << endl;
    return 0;
}
