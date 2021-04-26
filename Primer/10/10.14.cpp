#include <iostream>

int main()
{
	auto lambda { []( int const num1, int const num2 ) -> int { return num1 + num2; } };
	
	std::cout << lambda( 1, 2 ) << std::endl << std::flush; 
	return 0;
}
