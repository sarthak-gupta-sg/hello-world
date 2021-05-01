#include <iostream>
#include <algorithm>
#include <list>

int main()
{
	std::list<std::string> lst { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	
	//sort
	lst.sort();
	
	//uniqie
	lst.unique();
	
	//print
	for( auto const & val : lst )
	{
		std::cout << val << " " << std::flush;
	}
	std::cout << std::endl << std::flush;
	
	return 0;
}
