#include <iostream>
#include <vector>

using namespace std;

class NoDefault
{
public:
    NoDefault(int a) {} 
};

class C
{
public:
    C() : X(0) {}
    NoDefault X;
};

int main()
{
    C c;
    vector<C> vec(10);
    return 0;
}
