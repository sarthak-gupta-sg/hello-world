#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//Implementation of exercise on page 104
	vector <int> cluster(11, 0);  //1 extra cluster to store number of cases with full marks
	int marks;
	
	cout << "Enter marks (Ctrl-D to stop): ";
	while(cin >> marks)
	{	
		//classify marks according to the range 0-9, 10-19, ... 90-99, and 100
		if(marks <= 100)
			++cluster[marks/10]; 
	}	

	for(auto x : cluster)
		cout << x << " " ;

	return 0;
}
