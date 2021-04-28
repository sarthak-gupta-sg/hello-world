#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::vector<int> v1 { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::list<int> v2; 
	std::vector<int> v3;
	std::vector<int> v4;
	
	//front_inserter
	std::copy( v1.cbegin(), v1.cend(), std::front_inserter( v2 ) );
	std::cout << "After front_inserter:" << std::endl << std::flush;
	for( auto const & val : v2 )
	{
		std::cout << val << " " << std::flush;
	}
	std::cout << std::endl << std::flush;
	
	//back_inserter
	std::copy( v1.cbegin(), v1.cend(), std::back_inserter( v3 ) );
	std::cout << "After back_inserter:" << std::endl << std::flush;
	for( auto const & val : v3 )
	{
		std::cout << val << " " << std::flush;
	}
	std::cout << std::endl << std::flush;
		
	//inserter
	std::copy( v1.cbegin(), v1.cend(), std::inserter( v4, v4.begin() ) );
	std::cout << "After inserter:" << std::endl << std::flush;
	for( auto const & val : v4 )
	{
		std::cout << val << " " << std::flush;
	}
	std::cout << std::endl << std::flush;
	

	return 0;
}

