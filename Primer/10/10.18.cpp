#include <iostream>
#include <vector>
#include <algorithm>

int main()
{	
	std::vector<std::string> w { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	auto sz { 0 };
	std:: cout << "Enter required size of word to be searched in the vector: " << std::flush;
	std::cin >> sz;
	
	auto lambda { [sz]( std::string const & term ) -> bool { return term.size() >= sz ; } };
	
	auto iter { std::partition( w.begin(), w.end(), lambda ) };
	//Exercise 10.19
	//auto iter { std::stable_partition( w.begin(), w.end(), lambda ) };
	
	std::cout << "Number of elements that fulfill criteria are: " << iter - w.begin() << std::endl << std::flush;
	std::cout << "Elements are as follows:" << std::endl << std::flush;
	for( auto x = w.begin(); x != iter; ++x )
	{
		std::cout << *x << "\n" ;
	}
	std::cout << std::endl << std::endl << std::flush;
	
	return 0;
}
