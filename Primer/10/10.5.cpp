#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector<const char * > roster1 { "abc", "def", "ghi"};
    list<const char * > roster2 { "abc", "def", "ghi"};
    //list<const char * > roster2(roster1.cbegin(), roster1.cend());
    bool result;
    
    result = equal(roster1.cbegin(), roster1.cend(), roster2.cbegin());
    cout << "Your result is: " << result << "\n";
    
    std::cout << (void *) roster1[0] << std::endl;
    std::cout << (void *) roster2.front() << std::endl;
    
    char const * c1 = "abcd";
    char const * c2 = "abcd";
    
    if(c1 == c2)
    {
        cout << (void *)c1 << " and " << (void *)c2 << " are equal\n" ;
    }
    else
    {
        cout << (void *)c1 << " and " << (void *)c2 << " are not equal" ;
    }
     
     cout << strlen(c1) << "\n";
    return 0;
}
