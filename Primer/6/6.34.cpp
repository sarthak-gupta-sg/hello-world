#include <iostream>

using namespace std;

int factorial(int number)
{
    cout << number << " x " ;
    if(number != 0)
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
    
    long result = factorial(num);
    cout << "\nFactorial is : " << result << endl;
    return 0;
}
