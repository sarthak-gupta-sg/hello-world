#include <iostream>
#include <vector>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int main()
{
    int m {0}, n {0};
    
    cout << "Enter two positive integers:";
    cin >> m >> n;
    
    //Using directive
    using PF = int (*) (int, int);
    vector<PF> v1 = { add, sub, multiply, divide};
    
    for(auto x : v1)
    {
        cout << x(m, n) << endl;
    }
    
    //Another way
    vector<int (*)(int, int)> v2 = { &add, &sub, &multiply, &divide};
    
    for(auto x : v2)
    {
        cout << x(m, n) << endl;
    }
    return 0;
}
