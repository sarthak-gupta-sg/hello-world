#include <iostream>

using namespace std;

string test[10] { "a", "b", "c"  };
string (&p)[10] = test;

//raw notation
string (& function(int index))[10]
{
    return p;
}

//C++11 notation
auto functionCPP(int index) -> string (&)[10]
{
    return p;
}

//decltype notation
decltype(test) & functionDecl(int index)
{
    return test;
}

//typedef notation
typedef string (&ptr)[10];
ptr functionTypeDef(int index)
{
    return test;
}

int main()
{
    //Since test[] is a array there is no restiction on elements
    cout << "test[34] is: " << test[34] << endl;

    //Default output the test
    cout << "Array is: " ;
    for(auto x : test)
    {
        cout << x;
    }
    cout << endl;

/*
 * 
 * Note : For all below examples the following initialization doesn't work
 * auto val = function(5);
 */


    //Raw
    string (&val)[10] = function(5);
    cout << "Raw: " ;
    for(auto x : val)
    {
        cout << x;
    }
    cout << endl;
    
    //C++11
    string (&val2)[10] = functionCPP(5);
    cout << "C++11: " ;
    for(auto x : val2)
    {
        cout << x;
    }
    cout << endl;
    
    //decltype
    string (&val3)[10] = functionDecl(5);
    cout << "decltype: " ;
    for(auto x : val3)
    {
        cout << x;
    }
    cout << endl;
    
    //typedef
    string (&val4)[10] = functionTypeDef(5);
    cout << "typeDef: " ;
    for(auto x : val4)
    {
        cout << x;
    }
    cout << endl;

    return 0;
}
