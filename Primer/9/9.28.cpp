#include <iostream>
#include <forward_list>

using namespace std;

void search(forward_list<string> & fl, string const & term1, string const & term2)
{
    bool found = false;
    auto curr = fl.begin();
    auto prev = fl.before_begin();

    while(curr != fl.end())
    {
        if(*curr == term1)
        {
            cout << "HIT\n";
            prev = fl.insert_after(curr, term2);
            curr++;
            found = true;
        }
        else
        {
            ++curr;
            ++prev;
        }
    }
    
    if(! found)
    {
        curr = fl.insert_after(prev, term2);
    }
    return;
}

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        cout << "Usage: <prog.out> term1 term2\n";
        return 0;
    }
    
    forward_list<string> flist { "One", "Two", "Three", "Two" }; 
    
    search(flist, string(argv[1]), string(argv[2]));
    
    //Print the forward_list
    for(auto const &x : flist)
    {
        cout << x << " " ;
    }
    cout << "\n";
    return 0;
}
