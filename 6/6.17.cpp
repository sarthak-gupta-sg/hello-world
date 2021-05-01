#include <iostream>

using namespace std;

void stringLower(string & data)
{
    for(auto & x : data)
    {
        x = tolower(x);
    }
    
    return;
}

bool stringCapitalAny(string const & data)
{
    for(auto & x : data)
    {
        if(isupper(x))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string data {""};
    cout << "Enter any string: ";
    cin >> data;
    
    cout << "Capital Letters: " << boolalpha << stringCapitalAny(data); 
    
    stringLower(data);
    cout << " and string converted to lower: " << data << endl;
    return 0;
}
