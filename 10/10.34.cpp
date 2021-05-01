#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v { 1, 2, 3, 4, 5, 6, 7, 8, 9, };
	
	//Print in reverse using reverse_iterators
	for( auto iter { v.crbegin() }; iter != v.crend() ; ++iter )
	{
		std::cout << *iter << " " << std::flush;
	}
	std::cout << std::endl << std::flush;  
	
	return 0;
}
