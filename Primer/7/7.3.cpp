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
        
        //Read and process remaining transactions
        while(cin >> trans.bookNo >> trans.unitsSold >> trans.revenue)
        {
            //If we are still processing the same book
            if(sales.isbn() == trans.isbn())
            {
                //sales.unitsSold += trans.unitsSold;
                //sales.revenue += trans.revenue;
                sales.combine(trans);
            }
            else
            {
                //Print results for previous book
                cout << "ISBN: " << sales.isbn() << endl
                     << "Units sold: " << sales.unitsSold << endl
                     << "Total revenue: " << sales.revenue << endl
                     << endl;
                     
                sales = trans;
            }
        }
        
        //Print the last transaction
        cout << "ISBN: " << sales.isbn() << endl
             << "Units sold: " << sales.unitsSold << endl
             << "Total revenue: " << sales.revenue << endl
             << endl;
    }
    else
    {
        //No input! warn the user
        cerr << "No data!" << endl;
        return -1;
    }
    
    const int a {1};
    int const * const p = &a;
    cout << *p << endl;

    return 0;
}
