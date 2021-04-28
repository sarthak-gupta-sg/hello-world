#include <iostream>
#include <vector>
#include <algorithm>

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
	
	return 0;
}
