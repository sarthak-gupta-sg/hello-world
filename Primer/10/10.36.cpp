#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> lst { 1, 2, 3, 4, 0, 5, 6, 0, 7, 8, 9, };
	
	//std::find last element with value 0
	auto pos { std::find( lst.crbegin(), lst.crend(), 0 ) };
	
	//Lists are not contiguous, so they DONOT SUPPORT arithmetic operations on iterators
	//std::cout << "Position of last element with value 0 is: " << lst.crbegin() - pos << std::endl << std::flush;
	
	if ( pos != lst.crend() )
	{
		//We CANNOT give position of an element in a list without carrying out full traversals
		std::cout << "Memory address of last element with value 0 is: " <<  &*pos << std::endl << std::flush;
	}
	else
	{
		std::cout << "Not Found" << std::endl << std::flush;
	}
	return 0;
}
