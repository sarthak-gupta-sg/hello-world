#include <iostream>
#include <fstream>
#include "salesData.h"

using namespace std;

int main(int argc, char *argv[])
{
    salesData sales;    //Variable to hold data for next transaction
    
    //read the first transaction and ensure that there are data to process
    ifstream infile;
    infile.open(*(argv + 1));
    
    ofstream outfile(*(argv + 2), ofstream::app);
    
    if(infile >> sales.bookNo >> sales.unitsSold >> sales.revenue)
    {
        salesData trans;    //Variable to hold running sum
        
        //Read and process remaining transactions
        while(infile >> trans.bookNo >> trans.unitsSold >> trans.revenue)
        {
            //If we are still processing the same book
            if(sales.bookNo == trans.bookNo)
            {
                sales.unitsSold += trans.unitsSold;
                sales.revenue += trans.revenue;
            }
            else
            {
                //Print results for previous book
                outfile << "ISBN: " << sales.bookNo << endl
                     << "Units sold: " << sales.unitsSold << endl
                     << "Total revenue: " << sales.revenue << endl
                     << endl;
                     
                sales = trans;
            }
        }
        
        //Print the last transaction
        outfile << "ISBN: " << sales.bookNo << endl
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
    
    outfile.close();
    infile.close();
    return 0;
}
