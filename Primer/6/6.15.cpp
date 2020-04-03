#include <iostream>

using namespace std;

void findChar()
{
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
    findChar();
    
    cout << "Position: " << position << " and number of occurrence: " << numOfOccur << endl;
    return 0;
}
