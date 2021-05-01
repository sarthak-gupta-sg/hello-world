#include <iostream>

using namespace std;

void findChar(const string & data, const char & c, int & position, int & numOfOccur)
{
    int cntr = 0;
    for(auto const & x : data) //reference to a const
    {
        if(x == c)
        {
            numOfOccur++;
            
            //Set position
            if(position == 0)
            {
                position = cntr;
            }
        }
        cntr++;
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
    
    cout << "First Position: " << position << " and number of occurrence: " << numOfOccur << endl;
    return 0;
}
