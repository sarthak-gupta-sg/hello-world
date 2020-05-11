#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    vector<string> text;
    fstream infile("8.1.cpp");
    
    while(!infile.eof())
    {
        string line;    //Variable to store the line
        
        //Read one line from file
        getline(infile, line);  
        
        stringstream s(line);   //String stream variable to facilitate processing via >> operator
        string word;    //store each word
        
        //Tokenise stream by words
        while(s >> word)
        {
            text.push_back(word);
        }
    }
    
    //display
    for(auto & v : text)
    {
        cout << v << endl;
    }
    
    infile.close();
    return 0;
}
