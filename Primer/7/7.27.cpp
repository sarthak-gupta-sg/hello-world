#include<iostream>
#include "Screen727.h"

using namespace std;

int main()
{
    Screen screen(5, 5, 'X');
    screen.move(4, 0).set('#').display(cout);
    cout << endl;
    screen.display(cout);
    cout << endl;
    return 0;
}
