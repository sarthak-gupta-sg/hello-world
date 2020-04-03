#include <iostream>

using namespace std;

void findChar(const string & data, const char & c, int & position, int & numOfOccur)
{
    for(auto x : data)
    {
        if(x == c)
        {
            numOfOccur++;
        }
    }
    return;
}

int main()
{
    string data {""};
    char c {'x'};
    cout << "Enter any string and character to find: ";
    cin >> data >> c;
    
    int position {0};
    int numOfOccur {0};
    findChar(data, c, position, numOfOccur);
    
    cout << "Position: " << position << " and number of occurrence: " << numOfOccur << endl;
    return 0;
}
