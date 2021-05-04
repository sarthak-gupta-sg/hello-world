#include <iostream>
#include <map>

int main()
{
	std::string word;
	std::map<std::string, unsigned int> wordCnt;
	
	//Press enter followed by ctrl-d in Linux to invalidate input stream
	while(std::cin >> word)
	{
		auto ref { wordCnt.insert( { word, 1 } ) };
		if( !ref.second )
		{
			//Word already exists, increment count
			++(ref.first->second);
		}
	}
	
	std::cout << "Word count is:" << std::endl;
	//element is of type std::pair
	for(auto const & element : wordCnt)
	{
		std::cout << element.first << " " << element.second << std::endl;
	}
	
	return 0;
}
