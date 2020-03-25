#include <iostream>

using namespace std;

int main()
{
    string s = "word";
    string p = s + ((s[s.size() - 1] == 's') ? "" : "s");

    cout << p << " " << s.size() << endl;

    return 0;
}
