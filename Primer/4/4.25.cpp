#include <iostream>

using namespace std;

int main()
{
    unsigned long result = 0UL;
    
    //Student number 27 passed
    result |= (1UL << 27);
    cout << result << endl;
    
    //REevaluation - Student number 27 FAILED
    result &= ~(1UL << 27);
    cout << result << endl;
    
    return 0;
}
