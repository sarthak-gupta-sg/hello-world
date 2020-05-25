#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    string expression { "1+(2*3)-5"};
    stack<char> s;
    
    bool flag = false;
    for(auto const & x : expression)
    {
        s.push(x);
        if(x == '(')
        {
            flag = true;
        }

        if(flag && x == ')')
        {
            while(s.top() != '(')
            {
                //Pop till (
                s.pop();
            }
            
            //Pop the (
            s.pop();
            
            s.push('#');
        }
    }
    
    string output;
    for (; !s.empty(); s.pop()) 
    {
        //Good strategy to fill string in reverse
        output.insert(output.begin(), s.top());
    }
    cout << output << endl;
    
    return 0;
}
