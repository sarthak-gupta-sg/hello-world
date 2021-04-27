#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>


bool checkSize( std::string const & word, int const & sz ) 
{
	return word.size() >= sz; 
}  

bool invert( std::string const & word, int const & sz ) 
{
	return !checkSize( word, sz ) ;
}

int main()
{	
	std::vector<int> w { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::string word;
	std:: cout << "Enter word to be tested: " << std::flush;
	std::cin >> word;
	
	//std::count_if takes a unary predicate, so we use std::bind to create a partial application function bindFn
	//bindFn takes 1 argument, that is the string.
	//checkSize takes two arguments, string and the int
	//std::placeholders::_1 means that 1st argument of bindFn, is passed on to checkSize as 1st argument of checkSize.
	//2nd argument of checkSize is BOUND to value of sz
	auto invert2 { std::bind( invert, word, std::placeholders::_1 ) };
	
	auto pos { std::find_if( w.begin(), w.end(), invert2 ) };
	
	std::cout << "First element in the vector that fulfills criteria is: " << *pos << std::endl;
	return 0;
}
