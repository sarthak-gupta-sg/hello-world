#include <iostream>
#include "salesData.h"

using namespace std;

int main()
{
    salesData sales;    //Variable to hold data for next transaction
    
    //read the first transaction and ensure that there are data to process
    if(cin >> sales.bookNo >> sales.unitsSold >> sales.revenue)
    {
        salesData trans;    //Variable to hold running sum
    }
    else
    {
        //No input! warn the user
        cerr << "No data!" << endl;
        return -1;
    }

    return 0;
}
