#include <iostream>
#include <vector>
#include <algorithm>

void elimDups( std::vector<std::string> &words )
{
	std::sort( words.begin(), words.end() );
	auto unique_end = std::unique( words.begin(), words.end() );
	words.erase( unique_end, words.end() );
	return;
}

bool isShorter( std::string word1, std::string word2 )
{
	if( word1.size() < word2.size() )
	{
		return true;
	}
	return false;
}

int main()
{
	std::vector<std::string> w { "the", "quick", "red", "fox", "jumps", 
								 "over", "the", "slow", "red", "turtle"	};
	std::cout << "Before Elim Dups\n" ;
	for( auto it = w.begin(); it != w.end(); ++it )
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl << std::flush;
	
	//Eliminate duplicates from vector
	elimDups( w );
	
	std::cout << "After Elim Dups\n" ;
	for( auto it = w.begin(); it != w.end(); ++it )
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl << std::flush;
	
	//Perform stable sort
	std::stable_sort( w.begin(), w.end(), isShorter );
	
	std::cout << "After Stable Sort\n" ;
	for( auto it = w.begin(); it != w.end(); ++it )
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl << std::flush;

	return 0;
}
