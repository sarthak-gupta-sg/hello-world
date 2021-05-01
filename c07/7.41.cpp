#include<iostream>
#include "salesData741.h"

using namespace std;

int main()
{
    cout << endl << "Creating sales1 : " ;
    salesData sales1;
    
    cout << endl << "Creating sales2 : " ;
    salesData sales2("X");
    
    cout << endl << "Creating sales3 : " ;
    salesData sales3("X", 5, 5);
    
    cout << endl << "Creating sales4 : " ;
    salesData sales4(cin);
    cout << endl;
    return 0;
}
