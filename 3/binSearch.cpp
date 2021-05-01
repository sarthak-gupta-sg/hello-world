#include <iostream>
#include <vector>

using namespace std;

int main()
{
	bool found = false;
	const vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	auto beg = v.begin(),
		 end = v.end();
	auto mid = beg + ( end - beg )/ 2;
	
	int element;
	cout << "Enter element to search:";
	cin >> element;

	while(mid != end)
	{
		cout << "Middle one is: " << *mid << endl;
		if( *mid == element )
		{
			auto index = std::distance(v.begin(), mid);
			cout << "Found at " << index << endl;
			found = true;
			break;
		}
		else if( *mid < element )
		{
			beg = mid + 1; 
		}
		else
		{
			end = mid;
		}
		mid = beg + ( end - beg )/ 2;
	}
	
	if(!found)
	{
		cout << "Not Found" << endl;
	}
	return 0;
}
