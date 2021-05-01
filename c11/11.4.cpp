#include <iostream>
#include <map>
#include <algorithm>
#include <cctype>

//Old Style
void methodOne( std::string & word )
{
	//Lowercase full word
	for( auto & c : word )
	{
		c = std::tolower(c);
	}
		
	//Check punctuation at end
	if( *( word.end() - 1 ) == ',' || *( word.end() - 1 ) == '.' )
	{
		word.erase( word.end() - 1 );
	}
	
	return;
}

//Using C++ erase remove idiom
//https://en.wikipedia.org/wiki/Erase%E2%80%93remove_idiom
void methodTwo( std::string & word )
{
	//Lowercase full word
	std::transform( word.begin(), word.end(), word.begin(), tolower );

	//std::ispunct only takes unsigned char (strictly) so as a template we need to ensure we are providing unsigned char to it
	//See https://en.cppreference.com/w/cpp/string/byte/ispunct
	auto iter = std::remove_if( word.begin(), word.end(), []( unsigned char c ) -> bool { return std::ispunct( c ); } );

	//Other way is to use ispunct() from C library (i.e. without std::)
	//auto iter = std::remove_if( word.begin(), word.end(), ispunct );	
	
	word.erase( iter, word.end() );
	
	return;
}

int main()
{
	std::string word;
	std::map<std::string, unsigned int> wordCnt;
	
	//Press return followed by ctrl-d in Linux to invalidate input stream
	while(std::cin >> word)
	{
		//methodOne( word );
		
		methodTwo( word );
		
		//Add to map
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
