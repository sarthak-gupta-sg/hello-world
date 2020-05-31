#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    vector<double> values;
    double result {0};
    double terms {0};
    
    cout << "Enter Integers (x to stop):\n";
    while(cin >> terms)
    {
        /* This statement can't be used 
         * because ASCII value of character 'x' is 120
         * Therefore, if user enters 120 as integer value, then
         * the loop will break
         */  
        //if(terms == 'x') break;
        values.push_back(terms);
    }
    
    cin.clear();
    cin.ignore();
    result = accumulate(values.cbegin(), values.cend(), 0);
    cout << "Your result is: " << result << "\n";
    
    return 0;
}
    
    
