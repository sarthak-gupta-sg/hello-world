#include <iostream>
#include "salesData712.h"

using namespace std;

//Call using a.out < input.txt > output.txt to read from input.txt and store output to output.txt
int main()
{
    //Variable to hold data for next transaction
    
    //Initialize and read the first transaction
    salesData sales(cin);
    
    //Ensure that there are data to process
    if(sales.isbn().length() != 0) // You can use if(!sales.isbn().empty())
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
                cout << sales.isbn().length() << endl;
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
