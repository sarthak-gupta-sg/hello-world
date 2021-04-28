#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::vector<int> v1 { 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9 };
	std::list<int> v2; 
	
	//back_inserter
	std::unique_copy( v1.cbegin(), v1.cend(), std::back_inserter( v2 ) );
	std::cout << "After back_inserter and unique_copy:" << std::endl << std::flush;
	for( auto const & val : v2 )
	{
		std::cout << val << " " << std::flush;
	}
	std::cout << std::endl << std::flush;	

	return 0;
}

