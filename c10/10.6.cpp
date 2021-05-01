#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    std::vector<int> values;
    
    //Reserve some storeage area
    values.reserve(10);
    
    //Will give size as 0
    //reserve() only reserves memory doesn't actually resizes the vector
    std::cout << "Size after reserve: " << values.size() << "\n";
    
    //Set to 0 - UNDEFINED
    //std::fill_n(values.begin(), 10, 0);
    //OR
    std::fill_n(std::back_inserter(values), 10, 0);
    
    //Print
    for(auto val : values)
    {
        std::cout << val << " " ;
    }
    
    //resize() will resize and default init the container
    values.resize(10);
    std::cout << "Size after resize: " << values.size() << "\n";
    
    //Set to 0
    std::fill_n(values.begin(), 10, 0);
    
    //Print
    for(auto val : values)
    {
        std::cout << val << " " ;
    }

    return 0;
}
