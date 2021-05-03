#include <iostream>
#include <vector>
#include <utility>

int main()
{
	int number { 0 };
	std::string word;
	
	std::vector<std::pair<std::string, int>> dataStore;	
	
	std::cout << "Enter name followed by number with spaces in between (press enter followed by ctrl-d on Linux to finish input):" << std::endl;
	while( std::cin >> word >> number )
	{
		//Method 1
		//dataStore.push_back( std::make_pair( word, number ) );
		
		//Method 2
		dataStore.push_back( { word, number } );
	}
	
	std::cout << "Stored values:" << std::endl;
	for( auto const & element : dataStore )
	{
		std::cout << element.first << " " << element.second << std::endl;
	}
	
	return 0;
}
