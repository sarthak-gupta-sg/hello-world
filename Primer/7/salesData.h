#ifndef SALES_DATA_H
#defice SALES_DATA_H

#include <string>

struct salesData
{
    std::string bookNo;
    unsigned int unitsSold = 0;
    double revenue = 0.0;
}

#endif
