#include <iostream>

using namespace std;

istream& function(istream& in)
{
    int n {0};
    while(1)
    {
        in >> n;
        if(in.eof())
        {
            cout << "EOF";
            break;
        }
        cout << n << endl;
    }
    in.clear();
    return in;
}

int main()
{
    function(cin);
    return 0;
}
