#include <iostream>

using namespace std;

int arr[] = {1, 2, 3, 4, 5};
int *p = arr;
int (*ptr)[5] = &arr;

//This is pointer to first element of the array
int * funcOne(int index)
{
    switch(index)
    {
        case 1 : return arr;
        case 2 : return p;
        case 3 : return *ptr;
    }
    
    return arr;
}

//This is pointer to the whole array
int (* funcTwo(int index))[5]
{
    switch(index)
    {
        case 1 : return &arr ;
        case 2 : return ptr;
    }
    
    return ptr;
}


int main()
{
    int index {3};
    int *x = funcOne(index);
    for(auto i = 0; i != 5; ++i)
    {
        cout << *(x + i) << " ";
    }
    
    //Will not work since we do not have iterators which can be computed by begin(p) and end(p)
    //p just holds an address we can't compute the end and begin of array from just p
    /*
    for(auto z : p)
    {
        cout << z << " ";
    }
    */
    
    //This will work since 
    for(auto z : *ptr)
    {
        cout << z << " ";
    }
    
    cout << endl;
    return 0;
}
