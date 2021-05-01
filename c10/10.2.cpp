#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    list<string> values;
    string terms, value;
    
    cout << "Enter strings (x to stop):\n";
    while(cin >> terms)
    {
        if(terms == "x")
        {
            break;
        }
        values.push_back(terms);
    }
    
    /* When we press Ctrl-D, stream cin gets closed
     * and further input is ignored. This is true for file redirection also
     * like ./a.out < input.txt.
     * We need to do following:
     * 1. Put a non int character like x in the stream input
     * 2. No need to press Ctrl-D
     * 3. cin.clear() and cin.ignore are required remove non int char from stream and 
     * 4. restore the stream from failed state to good state.
     * 5. File redirection is failing for above mentioned method also
     */ 
    //
    cin.clear();
    cin.ignore();
    cout << "\nEnter value to search:";
    cin >> value;
    
    cout << count(values.cbegin(), values.cend(), value) << "\n";
    
    return 0;
}
