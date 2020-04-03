#include <iostream>

using namespace std;

void swap(int *m, int *n)
{
    int *temp = nullptr;
    temp = m;
    m = n;
    n = temp;
    return;
}


int main()
{
    int a {25}, 
        b {45};

    int *pa = &a,
        *pb = &b;
        
    cout << "a: " << *pa << " and b: " << *pb << endl;
    swap(pa, pb);
    cout << "a: " << *pa << " and b: " << *pb << endl;
    return 0;
}
