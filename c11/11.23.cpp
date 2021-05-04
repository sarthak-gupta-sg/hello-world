#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <vector>

int main()
{
	std::multimap<std::string, std::vector<std::string>> famNameChildren;
	
	//Add families and children
	//We cannot subscript a multimap or unordered_multimap 
	famNameChildren.insert( { "Smith", { "One", "Two", "Three" } } );
	famNameChildren.insert( { "Gosling", { "One" } } );
	famNameChildren.insert( { "Smith", { "Four", "Five" } } );
	
	for( auto const & element : famNameChildren )
	{
		std::cout << element.first << std::flush << std::endl; 
		for( auto const & children : element.second )
		{
			std::cout << "+" << children << std::flush << std::endl;
		}
	}
	 
	return 0;
}
