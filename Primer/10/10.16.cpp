#include <iostream>
#include <vector>
#include <algorithm>

bool isShorter( std::string const & s1, std::string const & s2 )
{
	return s1.size() < s2.size() ;
}


int main()
{	
	std::vector<std::string> w { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	auto sz { 0 };
	std:: cout << "Enter required size of words to be searched in the vector: " << std::flush;
	std::cin >> sz;
		
	//Sort all elements on size
	std::stable_sort( w.begin(), w.end(), isShorter );
	std::cout << "Elements after sort:" << std::endl << std::flush;
	for( auto const & x : w  )
	{
		std::cout << x << " " ;
	}
	std::cout << std::endl << std::endl << std::flush;
	
	//Define criteria as lambda
	auto lambda { [sz]( std::string const & term ) -> bool { return term.size() >= sz ; } };

	//Find iterator to first element that fulfills criteria
	auto iter { std::find_if( w.begin(), w.end(), lambda ) };
	
	std::cout << "Number of elements that fulfill criteria are: " << w.end() - iter << std::endl << std::flush;
	std::cout << "Elements are as follows:" << std::endl << std::flush;
	for( auto x = iter; x != w.end(); ++x )
	{
		std::cout << *x << " " ;
	}
	std::cout << std::endl << std::endl << std::flush;
	
	return 0;
}
