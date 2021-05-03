#include <iostream>
#include <set>
#include "salesData.h"

bool compareIsbn( salesData const & s1, salesData const & s2 )
{
	return s1.isbn() < s2.isbn();
}

int main()
{
	//Old standard
	//typedef bool (*compFn) ( salesData const & s1, salesData const & s2 ) ;
	
	//New C++11 standard
	using compFn = bool (*) ( salesData const & s1, salesData const & s2 );
	
	std::set<salesData, compFn> bookStore(compareIsbn);
	
	return 0;
}
