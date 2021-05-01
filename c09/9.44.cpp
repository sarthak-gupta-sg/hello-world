#include <iostream>
#include <string>

using namespace std;

void replace(string & s, string const & oldVal, string const & newVal)
{
    for(auto iter = 0; iter != s.size(); )
    {
        string temp = s.substr(iter, oldVal.size());
        if(temp == oldVal)
        {
            cout << "HIT " << temp << endl;
            s.replace(iter, oldVal.size(), newVal);
            iter += newVal.size();
        }
        else
        {
            ++iter;
        }
    }
    return;
}


int main()
{
    {
        string str{"To drive straight thru is a foolish, tho courageous act."};
        replace(str, "thru", "through");
        replace(str, "tho", "though");
        std::cout << str << std::endl;
    }
    {
        string str{"To drive straight thruthru is a foolish, thotho courageous act."};
        replace(str, "thru", "through");
        replace(str, "tho", "though");
        std::cout << str << std::endl;
    }
    {
        string str{"To drive straight thru is a foolish, tho courageous act."};
        replace(str, "thru", "thruthru");
        replace(str, "tho", "though");
        std::cout << str << std::endl;
    }
    {
        string str{"my world is a big world"};
        replace(str, "world", "worldddddddddddddddddddddddddddddddddddddddddddddddd");
        std::cout << str << std::endl;
    }
    return 0;
}
