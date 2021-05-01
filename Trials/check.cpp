#include <iostream>

int main()
{
    int n = 5;
    void *p = &n;
    int *pi = static_cast<int*>(p);
    ++*pi;
    std::cout << *pi << std::endl;
    
    //Checking ref to const
    std::string const &s = "9-99-999-9999";
    std::cout << s << std::endl;
    
    return 0;
}
    
