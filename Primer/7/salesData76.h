#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

struct salesData
{
    std::string bookNo;
    unsigned int unitsSold = 0;
    double revenue = 0.0;
    
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
    
    void add()
    {
        return;
    }
    
    std::istream& read(std::istream & in)
    {
        in >> bookNo >> unitsSold >> revenue;
        return in;
    }
    
    std::ostream& print(std::ostream & out)
    {
        out << "ISBN: " << bookNo << std::endl
            << "Units sold: " << unitsSold << std::endl
            << "Total revenue: " << revenue << std::endl; 
        return out;
    }
};

#endif
