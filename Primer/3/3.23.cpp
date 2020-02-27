#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> values {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	//Can't use cbegin and cend as we are modifying the sequence
	for(auto it = values.begin(); it != values.end(); ++it)
	{
		(*it) = (*it) * 2;
		cout << *it << endl;
	}
	
	//Try out const vectors
	const vector<int> a (10, 1);
	
	//Not work, Can't assign to a const vector
	//a[5] = 2;
	
	const vector<int> b;
	
	//Will not work
	b.push_back(5);
	return 0;
}
