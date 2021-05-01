#include <iostream>

using namespace std;

int checkLarger(int const m, int const *n)
{
    return (m > *n) ? m : *n;
}


int main()
{
    int a {0}, 
        b {0};

    cout << "Enter two numbers:";
    cin >> a >> b;
    
    cout << "Larger of two is: " << checkLarger(a, &b) << endl; 
    return 0;
}
