#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

//Original unchanged function 
//This is to be used as it is (as mentioned in problem statement)
bool checkSize( std::string const & word, int const & sz ) 
{
	return word.size() >= sz; 
}  

//We need to invert result from checkSize (Better to use '<' in checkSize for this particular problem)
bool checkSizeInvert( std::string const & word, int const & sz ) 
{
	return !checkSize( word, sz ) ;
}

int main()
{	
	std::vector<int> w { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::string word;
	std:: cout << "Enter word to be tested: " << std::flush;
	std::cin >> word;
	
	//std::find_if takes a unary predicate, so we use std::bind to create a partial application function bindFn
	//bindFn takes 1 argument, that is the integer.
	//checkSizeInvert takes two arguments, string and the int
	//std::placeholders::_1 means that 1st argument of bindFn, is passed on to checkSize as IInd argument of checkSizeInvert.
	//Ist argument of checkSizeInvert is BOUND to value of word
	auto bindFn { std::bind( checkSizeInvert, word, std::placeholders::_1 ) };
	
	auto pos { std::find_if( w.begin(), w.end(), bindFn ) };
	
	std::cout << "First element in the vector that fulfills criteria is: " << *pos << std::endl;
	return 0;
}
