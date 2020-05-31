#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    vector<int> values;
    int result {0};
    int terms {0};
    
    cout << "Enter Integers (x to stop):\n";
    while(cin >> terms)
    {
        /* This statement can't be used 
         * because 
         */  
        //if(terms == 'x') break;
        values.push_back(terms);
    }
    
    result = accumulate(values.cbegin(), values.cend(), 0);
    cout << "Your result is: " << result << "\n";
    
    return 0;
}
    
    
