#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <cstring>

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
    
    char const * c1 = "abcdef";
    char const * c2 = "abcdef";
    
    cout << *c1 << "\n";
    if(c1 == c2)
    {
        cout << (void *)c1 << " and " << (void *)c2 << " are equal\n" ;
    }
    else
    {
        cout << (void *)c1 << " and " << (void *)c2 << " are not equal" ;
    }
    
    cout << "strlen: " << strlen(c1) << " vs sizeof: " << sizeof(c1) << "\n";
    
    char c3[] = "def";
    cout << "strlen: " << strlen(c3) << " vs sizeof: " << sizeof(c3) << "\n";
    return 0;
}
