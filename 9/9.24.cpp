#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> const & vec)
{
    //This throws exception ON EMPTY VECTOR
    cout << "\nat() notation: " << vec.at(0) ;
    
    //This SEGFAULTS ON EMPTY VECTOR
    cout << "\n[] notation: " << vec[0] ;
    
    //This SEGFAULTS ON EMPTY VECTOR
    cout << "\nfront() notation: " << vec.front() ;
    
    //This SEGFAULTS ON EMPTY VECTOR
    cout << "\nbegin() notation: " << *vec.begin() ;
    return;
}


int main()
{
    vector<int> v ; //{ 1, 2, 3, 4, 5 };
    
    print(v);
    
    cout << "\n";

    return 0;
}
