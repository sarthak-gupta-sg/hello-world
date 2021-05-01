#include <iostream>

using namespace std;

void swap(int *m, int *n)
{
    int temp = *m;
    *m = *n;
    *n = temp;
    return;
}

int main()
{
    int a = 5, b = 10;
    cout << "Before swap a: " << a << " and b: " << b << endl;
    swap(&a, &b);
    cout << "After swap a: " << a << " and b: " << b << endl;
    return 0;
}
