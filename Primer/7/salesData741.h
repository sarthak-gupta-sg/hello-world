//DELEGATE CONSTRUCTORS

#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

class salesData;
std::istream& read(std::istream & in, salesData & sales);

class salesData
{
    std::string bookNo;
    unsigned int unitsSold = 0;
    double revenue = 0.0;
    
    inline double avg_price() const
    {
        return unitsSold ? (revenue / unitsSold) : 0;
    }
    
public:
    //Default constructor
    //salesData() = default; //Will be ambiguous
    
    //All paramters filled
    salesData(std::string s, unsigned n, double r) : bookNo(s), unitsSold(n), revenue(r) 
    {
        std::cout << "Received string: " << s << " Delegate constructor " ;
    }
    
    //One paramter filled
    salesData(std::string s) : salesData(s, 0, 0) 
    {
        std::cout << "string constructor " ;
    }
        
    salesData() : salesData("", 0, 0) 
    {
        std::cout << "Default constructor " ;
    }
    
    //Using istream
    salesData(std::istream & in) : salesData()
    {
        read(in, *this);
        std::cout << "Read Returned " ;
    }
    
    std::string isbn() const
    {
        return bookNo;
    }
    
    void combine(salesData object)
    {
        this->unitsSold += object.unitsSold;
        this->revenue += object.revenue;
        return;
    }

friend std::istream& read(std::istream & in, salesData & sales);
friend std::ostream& print(std::ostream & out, salesData const & sales);
};

//Non Member friend functions
std::istream& read(std::istream & in, salesData & sales)
{
    in >> sales.bookNo >> sales.unitsSold >> sales.revenue;
    return in;
}

std::ostream& print(std::ostream & out, salesData const & sales)
{
    out << "ISBN: " << sales.isbn() << std::endl
        << "Units sold: " << sales.unitsSold << std::endl
        << "Total revenue: " << sales.revenue << std::endl; 
    return out;
}

//Non Member functions
//Not declared as friend since it doesn't access private members of salesData directly
salesData add(salesData lhs, salesData rhs)
{
    salesData sum {lhs};
    sum.combine(rhs);
    return sum;
}

#endif
