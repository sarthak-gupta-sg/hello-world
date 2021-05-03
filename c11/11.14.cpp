#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <vector>
#include <utility>

int main()
{
	std::map<std::string, std::vector< std::pair<std::string, std::string> > > famNameChildren;
	
	//Add families
	famNameChildren["Smith"];
	famNameChildren["Gosling"];

	//Add children
	famNameChildren["Smith"] = { 
									{ "One", "01-01-2002" }, 
									{ "Two", "01-01-2004" }, 
									{ "Three", "01-01-2006" }, 
							  };
	famNameChildren["Gosling"] = { 
									{ "Four", "01-01-2007" }, 
									{ "Five", "01-01-2009" }, 
									{ "Six", "01-01-2011" }, 
							  };
	
	for( auto const & element : famNameChildren )
	{
		std::cout << element.first << std::flush << std::endl; 
		for( auto const & children : element.second )
		{
			std::cout << "+" << children.first << " " << children.second << std::flush << std::endl;
		}
	}
	 
	return 0;
}
