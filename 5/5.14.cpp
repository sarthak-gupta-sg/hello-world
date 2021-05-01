#include <iostream>

using namespace std;

int main()
{
    string word = "",
            highWord = "", 
            previous = "x";
    int runCount = 0, highCount = 0;
    
    cout << "Enter words (Ctrl-d to discontinue):" << endl;
    while(cin >> word)
    {
        if(word == previous)
        {
            ++runCount;
            if(runCount > highCount)
            {
                highCount = runCount;
                highWord = word;
            }
        }
        else
        {
            runCount = 1;
        }
        previous = word;
    }
    cout << highCount << " " << highWord << endl;

    return 0;
}
