#include <iostream>

using namespace std;

int main()
{
    //Program to generate an uncaught exception
    unsigned int a {0}, b {0};
    
    cout << "Enter two positive integers:";
    cin >> a >> b;
    
    if(b == 0)
    {
        throw ("Divisor is 0");
    }
    else
    {
        cout << "Result is: " << a/b << endl;
    }
    
    return 0;
}
