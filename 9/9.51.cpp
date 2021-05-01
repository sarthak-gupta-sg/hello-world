#include <iostream>
#include <string>
#include <array>

using namespace std;

class Date
{
private:
    unsigned year;
    unsigned month;
    unsigned day;
    
    int month_from_str(string const & temp)
    {
        array<string, 12> months { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec", }; 
        
        unsigned count = 1;
        for(auto const & x : months)
        {
            if(x == temp)
            {
                return count;
            }
            ++count;
        }
        
        return 0;
    }

public:
    Date() : year(2020), month(05), day(25) {}
    
    Date(string const &input)
    {
        //Handle 1/1/1900
        int pos = input.find("/");
        if(pos != string::npos)
        {
            day = stoi(input.substr(0, pos));
            
            int pos2 = input.find("/", pos + 1);
            month = stoi(input.substr(pos + 1, pos2));
            
            year = stoi(input.substr(pos2 + 1));
        }
        else
        {
            string temp(input.substr(0, 3));
            month = month_from_str(temp);
            
            auto comma_pos = input.find(",");
            auto space_pos = input.find(" ");
            year = stoi(input.substr( comma_pos + 1));
            day = stoi(input.substr( space_pos + 1, comma_pos));
        }
    }
    
    void getDate()
    {
        cout << year << "-" << month << "-" << day;
    }
};

int main()
{
    //Case 1/1/1900
    Date date("10/12/1900");
    date.getDate();
    cout << "\n";
    
    //Case Jan 1, 1900
    Date date2{"April 25, 2050"};
    date2.getDate();
    cout << "\n";
    
    //Case January 1, 1900
    Date date3{"May 1, 2100"};
    date3.getDate();
    cout << "\n";
    return 0;
}
