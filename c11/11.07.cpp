#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <vector>

int main()
{
	std::map<std::string, std::vector<std::string>> famNameChildren;
	
	//Add families
	famNameChildren["Smith"];
	famNameChildren["Gosling"];

	//Add children
	famNameChildren["Smith"] = { "One", "Two", "Three" };
	famNameChildren["Gosling"] = { "One" };
	
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
