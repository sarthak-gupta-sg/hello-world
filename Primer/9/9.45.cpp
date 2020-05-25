#include <iostream>
#include <string>

using namespace std;

void function(string & s, string const & prefix, string const & suffix)
{
    s.insert(s.begin(), prefix.begin(), prefix.end());
    s.append(suffix);
    return;
}


int main()
{
    string str{"James"};
    function(str, "Mr. ", " Jr.");
    std::cout << str << std::endl;

    return 0;
}
