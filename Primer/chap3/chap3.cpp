#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string test("Hello World");
	
	//Use a range based for loop to change all chars to x
	for(auto & a : test)
		a = 'x';
	
	cout << test << endl;
	
	//Use a for loop to change all chars to z
	for(decltype(test.size()) index = 0; index != test.size(); ++index)
		test[index] = 'z';
	
	cout << test << endl;
	
	//Use a for loop to change all chars to z
	decltype(test.size()) index = 0;
	while( index != test.size() )
	{
		test[index] = 'k';
		++index;
	}
	cout << test << endl;
	
	string s;
	cout << s[0] << endl;
	
	cout << "\nEnter any string with punctuation symbols: " ; 
	getline(cin, s);
	for(auto a : s)
		if(!ispunct(a))
			cout << a;
	
	//Check Copy initialization
	string s2 = test;
	
	test[5] = 'H';
	cout << test << " " << s2 << endl;
	
	vector<vector<int>> name { {1, 2, 3}, {4, 5, 6} } ;
	
	//Vector Initialization
	vector<int> v1, v2(10), v3(10, 42), v4 {10}, v5{10, 42};
	vector<string> v6{10}, v7{10, "hi"};
	
	cout << v1.size() << " " 
		 << v2.size() << " " 
		 << v3.size() << " " 
		 << v4.size() << " " 
		 << v5.size() << " " 
		 << v6.size() << " " 
		 << v7.size() << " " 
		 << endl;
	
	cout << v2[0] << " " 
		 << v3[0] << " " 
		 << v4[0] << " " 
		 << v5[0] << " " 
		 << v6[0] << " " 
		 << v7[0] << " " 
		 << endl;
	return 0;
}
