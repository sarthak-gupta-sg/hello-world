#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

struct salesData
{
    std::string bookNo;
    unsigned int unitsSold = 0;
    double revenue = 0.0;
    
    //Default constructor
    salesData() = default;
    
    //All paramters filled
    salesData(std::string s, unsigned n, double r) : bookNo(s), unitsSold(n), revenue(r) {}
    
    //One paramter filled
    salesData(std::string s) : bookNo(s) {}
    
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
};

//Non Member functions
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

salesData add(salesData lhs, salesData rhs)
{
    salesData sum {lhs};
    sum.combine(rhs);
    return sum;
}

#endif
