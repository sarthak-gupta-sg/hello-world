#include <iostream>
#include <string>

using namespace std;

int main()
{
	string test("Hello World");
	
	//Use a range based for loop to change all chars to x
	for(auto & a : test)
		a = 'x';
	
	cout << test << endl;
	
	//Use a loop to change all chars to z
	for(decltype(test.size()) index = 0; index != test.size(); ++index)
		test[index] = 'z';
	
	cout << test << endl;
	
	string s;
	cout << s[0] << endl;
	return 0;
}
