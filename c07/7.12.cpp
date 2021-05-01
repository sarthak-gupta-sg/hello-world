#include "salesData711.h"

int main()
{
    salesData item1;
    print(std::cout, item1) << std::endl;

    salesData item2("0-201-78345-X");
    print(std::cout, item2) << std::endl;

    salesData item3("0-201-78345-X", 3, 20.00);
    print(std::cout, item3) << std::endl;

    salesData item4(std::cin);
    print(std::cout, item4) << std::endl;
}
