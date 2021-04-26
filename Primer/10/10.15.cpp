#include <iostream>

int main()
{
	auto num1 { 25 };
	auto lambda { [num1] ( int const &num2 ) -> int { return num1 + num2 ; } };
	
	std::cout << lambda( 25 ) << std::endl << std::flush; 
	return 0;
}
