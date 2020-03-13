#include <iostream>

using namespace std;

int main()
{
    cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << endl;
    cout << -2 % 2 << endl;
    
    int a = 10, b = 8, c = 6, d = 4;
    
    //Check
    if(a > (b > (c > d)))
        cout << "Working" << endl;
        
    int val = 0;
    
    //This will work since left side of && is always evaluated first. 
    //However we must avoid setting and using the value in same expression as results can be undefined (Primer Pg 138).
    while(cin >> val && val != 42)
        cout << " " << val << endl << flush ;
    return 0;
}
