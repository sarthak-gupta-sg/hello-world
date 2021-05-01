#include <iostream>
#include <map>

int main()
{
	std::string word;
	std::map<std::string, unsigned int> wordCnt;
	
	//Press ctrl-d (twice) in Linux to invalidate input stream
	while(std::cin >> word)
	{
		word[0] = std::tolower(word[0]);
		
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
