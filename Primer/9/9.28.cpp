#include <iostream>
#include <forward_list>

using namespace std;

void search(forward_list<string> & fl, string const & term)
{
    cout << term << "\n";
    auto curr = fl.begin();
    auto prev = fl.before_begin();

    while(curr != fl.end())
    {
        if(*curr == term)
        {
            cout << "HIT\n";
        }
        ++curr;
        ++prev;
    }
    return;
}

int main(int argc, char *argv[])
{
    forward_list<string> flist { "One", "Two", "Three" }; 
    
    search(flist, string(argv[1]));
    return 0;
}
