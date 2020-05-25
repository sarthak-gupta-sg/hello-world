#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<char> vc { 'a', 'b', 'c' };
    string s(vc.begin(), vc.end()); 
    
    cout << s << endl;
    
    vc.insert(vc.end(), { 'd', 'e', 'f'});
    s.insert(s.end(), { 'd', 'e', 'f'});
    
    cout << s << endl;
    return 0;
}
