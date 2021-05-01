#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    vector<string> text;
    fstream infile("8.1.cpp");
    
    while(!infile.eof())
    {
        string word;
        //getline(infile, line);
        infile >> word;
        text.push_back(word);
    }
    
    for(auto & v : text)
    {
        cout << v << endl;
    }
    
    infile.close();
    return 0;
}
