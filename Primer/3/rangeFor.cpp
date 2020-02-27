#include <iostream>

using namespace std;

int main()
{
    const size_t val {5};
    int arr[val][val] {};
    
    //Print all values using range for
    for(auto & row : arr)
    {
        for(auto col : row)
        {
            col += 1;
            cout << col << " " ;
        }
        cout << endl;
    }
    
    return 0;
}
