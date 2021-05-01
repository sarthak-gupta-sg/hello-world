#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

bool checkSize( std::string const & word, int const & sz ) 
{
	return word.size() >= sz; 
}  

int main()
{	
	std::vector<std::string> w { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	auto sz { 0 };
	std:: cout << "Enter required size of words to be searched in the vector: " << std::flush;
	std::cin >> sz;
	
	auto bindFn { std::bind( checkSize, std::placeholders::_1, sz ) };
	
	auto iter { std::partition( w.begin(), w.end(), bindFn ) };
	
	std::cout << "Number of elements that fulfill criteria are: " << iter - w.begin() << std::endl << std::flush;
	std::cout << "Elements are as follows:" << std::endl << std::flush;
	for( auto x = w.begin(); x != iter; ++x )
	{
		std::cout << *x << "\n" ;
	}
	std::cout << std::endl << std::endl << std::flush;
		
	
	return 0;
}
