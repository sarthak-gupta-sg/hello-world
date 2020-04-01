#include <iostream>
#include "chapter6.h"

using namespace std;

int main()
{
    int number = 0;
    cout << "Enter a positive integer to calculate facotrial:";
    cin >> number;
    cout << "Factorial is: " << fact(number) << endl;
    return 0;
}
