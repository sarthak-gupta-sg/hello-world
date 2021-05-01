#include <iostream>
#include <vector>
#include <algorithm>

bool hasFiveChar( std::string const & s )
{
	return ( s.size() >= 5 ) ? 1 : 0 ;
}

int main()
{
	std::vector<std::string> w { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	
	auto iter { std::partition( w.begin(), w.end(), hasFiveChar ) };
	
	for( auto it = w.begin(); it != iter; ++it )
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl << std::endl << std::flush;
	
	return 0;
}
