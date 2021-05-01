#include <iostream>
#include <vector>

using namespace std;

int & function(int & a)
{
    return a;
}


int main()
{
    int num {2};
    
    auto &b = function(num);
    
    cout << b << endl;
    
    b *= 2 ;
    
    cout << num << endl;
    
    return 0;
}
