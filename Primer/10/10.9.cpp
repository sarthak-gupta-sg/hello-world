#include <iostream>
#include <vector>
#include <algorithm>

void elimDups(std::vector<std::string> &words)
{
	std::sort(words.begin(), words.end());
	auto unique_end = std::unique(words.begin(), words.end());
	words.erase(unique_end, words.end());
	return;
}

int main()
{
	std::vector<std::string> w { "the", "quick", "red", "fox", "jumps", 
								 "over", "the", "slow", "red", "turtle"	};
	std::cout << "\nBefore Elim Dups\n" ;
	for(auto it = w.begin(); it != w.end(); ++it)
	{
		std::cout << *it << " ";
	}
	
	elimDups(w);
	
	std::cout << "\nAfter Elim Dups\n" ;
	for(auto it = w.begin(); it != w.end(); ++it)
	{
		std::cout << *it << " ";
	}
	return 0;
}
