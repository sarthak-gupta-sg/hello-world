#include <iostream>

using namespace std;

int main(int argc, char ** argv)
{
    //concat two args
    string s(*(argv + 1));
    s = s + *(argv + 2);
    cout << s << endl;

    //print out all arguments
    while (*argv != 0)  //Because element one past the last argument is guaranteed to be zero (pg 219)
    {
        cout << *argv++ << endl;
    }
    
    return 0;
}
