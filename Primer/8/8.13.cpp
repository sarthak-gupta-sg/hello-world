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

bool valid(string const & number)
{
    //Code to check validity
    return true;
}

string const & format(string const & number)
{
    //format number and return
    return number;
}

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
    
    for(auto const & entry : people)
    {
        ostringstream formatted, badNums;
        for(auto const & nums : entry.phones)
        {
            if(!valid(nums))
            {
                badNums << " " << nums;
            }
            else
            {
                formatted << " " << format(nums);
            }
        }
        if(badNums.str().empty())
        {
            cout << entry.name << " " << formatted.str() << endl;
        }
        else
        {
            cerr << "input error: " << entry.name
                 << "invalid number (s): " << badNums.str() << endl;
        }
    }
    
    return 0;
}
