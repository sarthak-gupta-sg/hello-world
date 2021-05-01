#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::vector<int> source { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };
	std::list<int> dest;
	
	//Copy elements 3 to 7 in reverse
	auto begin { source.crbegin() + 2 };
	auto end { source.crbegin() + 6 + 1 };
	for( auto iter = begin; iter != end; ++iter )
	{
		dest.push_back( *iter );
	} 
	
	for( auto const & val : dest )
	{
		std::cout << val << " " << std::flush;
	}
	std::cout << std::endl << std::flush;  
	
	return 0;
}
