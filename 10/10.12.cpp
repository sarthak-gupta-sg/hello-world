#include <iostream>
#include <vector>
#include <algorithm>

#include "salesData.h"

bool compareIsbn( salesData const & sd1, salesData const & sd2 )
{
	return sd1.isbn() < sd2.isbn();
}

int main()
{
	std::vector <salesData> sdVec { 
									{ "2", 1, 100.0 },
									{ "1", 1, 100.0 },
									{ "8", 1, 100.0 },
									{ "4", 1, 100.0 },
								 };
	
	std::cout << "Before sorting:\n" ;
	for( auto it = sdVec.begin(); it != sdVec.end(); ++it )
	{
		std::cout << (*it).isbn() << " ";
	}
	std::cout << std::endl << std::endl << std::flush;
	
	//Perform stable sort
	std::stable_sort( sdVec.begin(), sdVec.end(), compareIsbn );
	
	std::cout << "After stable sort:\n" ;
	for( auto it = sdVec.begin(); it != sdVec.end(); ++it )
	{
		std::cout << (*it).isbn() << " ";
	}
	std::cout << std::endl << std::endl << std::flush;
	return 0;
}
