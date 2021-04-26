#include <iostream>
#include <vector>
#include <algorithm>

int main()
{	
	std::vector<std::string> w { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	auto sz { 0 };
	std:: cout << "Enter required size of words to be searched in the vector: " << std::flush;
	std::cin >> sz;
	
	auto lambda { [sz] ( std::string const & word ) -> bool { return word.size() >= sz; }  };
	
	auto count { std::count_if( w.begin(), w.end(), lambda ) };
	std::cout << "Number of words that fulfill criteria are: " << count << std::endl;
	return 0;
}
