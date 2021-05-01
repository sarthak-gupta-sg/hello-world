#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    vector<string> text;
    vector<string> tokens;
    fstream infile("8.1.cpp");
    
    while(!infile.eof())
    {
        string line;
        getline(infile, line);
        text.push_back(line);
    }
    
    for(auto & v : text)
    {
        cout << v << endl;
    }
    
    infile.close();
    return 0;
}
