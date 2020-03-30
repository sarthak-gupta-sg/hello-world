#include <iostream>

using namespace std;

int main()
{
    //Program to generate a caught exception
    unsigned int a {0}, b {0};
    
    cout << "Enter two positive integers:";
    cin >> a >> b;
    
    try
    {
        if(b == 0)
        {
            throw runtime_error("Divisor is 0");
        }
        else
        {
            cout << "Result is: " << a/b << endl;
        }
    }
    catch(runtime_error e)
    {
        cout << e.what() << endl;
    }
    catch(exception e)
    {
        cout << e.what() << endl;
    }
    catch(...)  //This can only be the last catch else compiler error will occur
    {
        cout << "A general exception has occurred" << endl;
    }
    
    return 0;
}
