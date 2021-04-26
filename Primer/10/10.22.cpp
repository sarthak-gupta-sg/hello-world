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
	
	auto count { std::count_if( w.begin(), w.end(), std::bind( checkSize, std::placeholders::_1, sz ) ) };
	std::cout << "Number of words that fulfill criteria are: " << count << std::endl;
	return 0;
}
