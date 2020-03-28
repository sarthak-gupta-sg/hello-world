#include <iostream>

using namespace std;

int main()
{
    string word = "", 
            previous = "x";
    int runCount = 0, highCount = 0;
    while(cin >> word)
    {
        if(word == previous)
        {
            ++runCount;
        }
        else
        {
            if(runCount > highCount)
            {
                highCount = runCount;
            }
            runCount = 1;
        }
        previous = word;
    }
    cout << highCount << endl;

    return 0;
}
