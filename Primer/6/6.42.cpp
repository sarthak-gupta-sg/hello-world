#include <iostream>

using namespace std;

string make_plural(size_t ctr, string const & word, string const & ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}


int main()
{
    string word {""};
    int cnt {0};
    cout << "Enter word and count: ";
    cin >> word >> cnt;
    cout << make_plural(cnt, word, "es") << endl;
    cout << make_plural(cnt, word) << endl;
    return 0;
}
