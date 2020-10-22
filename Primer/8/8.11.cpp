#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

struct PersonInfo
{
    string name;
    vector<string> phones;
};

int main()
{
    string line, word;
    vector<PersonInfo> people;
    
    istringstream record;     //Moving it outside the while loop
    while( getline(cin, line))
    {
        PersonInfo info;
        //istringstream record(line);
        record.clear();
        record.str(line);
        record >> info.name;
        
        while(record >> word)
        {
            info.phones.push_back(word);
        }
        people.push_back(info);
        cout << info.name << endl;
    }
    
    return 0;
}
