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
	return 0;
}
