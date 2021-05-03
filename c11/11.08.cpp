#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main()
{
	std::string word;
	std::map<std::string, unsigned int> wordMap;
	std::vector<std::string> exclude { "The", "But", "And", "Or", "An", "A", "the", "but", "and", "or", "an", "a", };
	
	while( std::cin >> word )
	{
		if( std::find( exclude.begin(), exclude.end(), word ) == exclude.end() )
		{
			++wordMap[word];
		}
	}
	
	std::cout << "Word count is:" << std::endl;
	for( auto const & element : wordMap )
	{
		std::cout << element.first << " " << element.second << std::endl << std::flush;
	}
	return 0;
}

