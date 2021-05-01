#include <iostream>
#include <map>

int main()
{
	std::string word;
	std::map<std::string, unsigned int> wordCnt;
	
	//Press return followed by ctrl-d in Linux to invalidate input stream
	while(std::cin >> word)
	{
		//Lowercase full word
		std::replace( word.begin(), word.end(), []( char c ) -> char { return std::tolower( c ); } );
		
		/*
		for( auto c : word )
		{
			c = std::tolower(c);
		}
		*/ 
		
		++wordCnt[word];
	}
	
	
	
	
	std::cout << "Word count is:" << std::endl;
	//element is of type std::pair
	for(auto const & element : wordCnt)
	{
		std::cout << element.first << " " << element.second << std::endl;
	}
	
	return 0;
}
