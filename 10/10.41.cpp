#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::vector<int> source { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::vector<int> dest;
	
	//algorithm replace on predicate
	std::replace_copy_if( source.begin(), source.end(), std::back_inserter( dest ), []( int const val ) -> bool { return val % 2 == 0; }, 55 );
	
	for( auto const & val : dest )
	{
		std::cout << val << " " << std::flush;
	}
	std::cout << std::endl << std::flush;
	return 0;
}
