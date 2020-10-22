#include <iostream>
#include <array>

using namespace std;

int main()
{
    //Trials for std::<array> initializations
    array<int, 5> ai;
    array<int, 5> bi {5};
    array<int, 5> ci (bi);
    array<int, 5> di {ci};
    array<int, 5> ei = di;
    
    //Invalid for array
    //array<int, 5> fi (5);
    //array<int, 5> gi (5, 5);

    cout << "\nai is : " ;
    for(auto const & x : ai)
    {
        cout << x << " " ;
    }

    cout << "\nbi is : " ;
    for(auto const & x : bi)
    {
        cout << x << " " ;
    }
    
    cout << "\nci is : " ;
    for(auto const & x : ci)
    {
        cout << x << " " ;
    }
    
    cout << "\ndi is : " ;
    for(auto const & x : di)
    {
        cout << x << " " ;
    }

    cout << "\nei is : " ;
    for(auto const & x : ei)
    {
        cout << x << " " ;
    }
    cout << endl;

    return 0;
}

