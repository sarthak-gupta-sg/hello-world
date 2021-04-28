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
	
	//Read https://stackoverflow.com/questions/6610046/stdfunction-and-stdbind-what-are-they-and-when-should-they-be-used
	
	//std::count_if takes a unary predicate, so we use std::bind to create a partial application function bindFn
	//bindFn takes 1 argument, that is the string.
	//checkSize takes two arguments, string and the int
	//std::placeholders::_1 means that 1st argument of bindFn, is passed on to checkSize as 1st argument of checkSize.
	//2nd argument of checkSize is BOUND to value of sz
	auto bindFn { std::bind( checkSize, std::placeholders::_1, sz ) };
	
	auto count { std::count_if( w.begin(), w.end(), bindFn ) };
	
	std::cout << "Number of words that fulfill criteria are: " << count << std::endl;
	return 0;
}
