#include <iostream>
#include <string>

using namespace std;

void replace(string & s, string const & oldVal, string const & newVal)
{
    for(auto iter = s.begin(); iter != s.end(); )
    {
        string temp(iter, iter + oldVal.size());
        if(temp == oldVal)
        {
            cout << "HIT " << temp << endl;
            s.erase(iter, iter + oldVal.size());
            iter = s.insert(iter, newVal.begin(), newVal.end());
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
