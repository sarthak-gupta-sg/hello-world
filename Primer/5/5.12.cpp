#include <iostream>

using namespace std;

int main()
{
    char ch;
    int count = 0;
    while(cin >> ch)
    {
        if(ch == 'f')
        {
            cin >> ch;
            switch(ch)
            {
                case 'f': case 'l' : case 'i' : 
                ++count;
                break;
            }
        }
    }
    cout << count << endl;

    return 0;
}
