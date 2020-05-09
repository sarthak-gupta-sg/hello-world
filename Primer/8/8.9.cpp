#include <iostream>
#include <sstream>

using namespace std;

istream& function(istream& in)
{
    string n {""};
    while(1)
    {
        in >> n;
        if(in.fail())
        {
            cout << "EOF";
            break;
        }
        cout << n << endl;
    }
    in.clear();
    return in;
}

int main(int argc, char *argv[])
{
    stringstream s(*(argv + 1));
    
    //stringstream s("Hello World");    //This also works
    
    function(s);
    return 0;
}
