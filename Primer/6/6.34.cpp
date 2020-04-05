#include <iostream>

using namespace std;

int factorial(int number)
{
    if(number > 1)
    {
        return factorial(number - 1) * number;
    }
    return 1;
}


int main()
{
    int num {0};

    cout << "Enter a number to find its factorial: ";
    cin >> num;
    
    cout << "Factorial is : " << factorial(num) << endl;
    return 0;
}
