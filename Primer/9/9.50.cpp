#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> s1 { "1", "2", "3", "4", "5", "6", "7", "8", "9", };
    vector<string> s2 { "1.1", "2.1", "3.1", "4.1", "5.1", "6.1", "7.1", "8.1", "9.1", };
    
    long sum = 0;
    for(auto const &x : s1)
    {
        sum += stoi(x);
    }
    cout << sum << "\n";
    
    double dsum = 0;
    for(auto const &x : s2)
    {
        dsum += stod(x);
    }
    cout << dsum << "\n";
    return 0;
}
