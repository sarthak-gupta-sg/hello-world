#include <iostream>
#include "salesData712.h"

using namespace std;

//Call using a.out < input.txt > output.txt to read from input.txt and store output to output.txt
int main()
{
    //Variable to hold data for next transaction
    
    //salesData sales;
    salesData sales("Z");
    //salesData sales("Z", 1, 1);
    
    //read the first transaction and ensure that there are data to process
    if(cin >> sales.bookNo >> sales.unitsSold >> sales.revenue)
    {
        salesData trans;    //Variable to hold running sum
        
        //Read and process remaining transactions
        while(read(cin, trans))
        {
            //If we are still processing the same book
            if(sales.isbn() == trans.isbn())
            {
                sales = add(sales, trans);
            }
            else
            {
                //Print results for previous book
                print(cout, sales) << endl;
                sales = trans;
            }
        }
        
        //Print the last transaction
        print(cout, sales) << endl;
    }
    else
    {
        //No input! warn the user
        cerr << "No data!" << endl;
        return -1;
    }
    
    return 0;
}
