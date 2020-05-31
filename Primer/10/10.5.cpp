#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector<char * > roster1 { "abc", "def", "ghi"};
    list<char * > roster2(roster1.cbegin(), roster1.cend());
    int result;
    
    result = equal(roster1.cbegin(), roster1.cend(), roster2.cbegin());
    cout << "Your result is: " << result << "\n";
    
    return 0;
}
    
    
