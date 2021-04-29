#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v { 1, 2, 3, 4, 5, 6, 7, 8, 9, };
	
	//Print in reverse using ordinary iterators
	for( auto iter = v.cend() - 1; iter != v.cbegin() - 1 ; --iter )
	{
		std::cout << *iter << " " << std::flush;
	}
	std::cout << std::endl << std::flush;  
	
	return 0;
}
