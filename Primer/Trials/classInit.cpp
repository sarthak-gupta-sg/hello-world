#include <iostream>

using namespace std;

class A
{
public:
    A() = default;
    A(int num, int num2): a(num), b(num2) { }
    
    int get() const
    {
        return a;
    }
private:
    int a;
    int b;
};

int main()
{
    A a(5, 24);
    cout << a.get();
    
    A b {45,34};
    cout << b.get();
    
    A arr[2] = { {1, 2}, {3, 4} };
    cout << arr[1].get();
    
    int n(25);
    cout << n;
    return 0;
}
