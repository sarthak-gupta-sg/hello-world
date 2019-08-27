#include <iostream>

using namespace std;

static int x;

int main()
{
	//Trying const and constexpr;
	int b;
	
	//This will give error - as no initialization value has been supplied
	//const int a; 
		
	const int c = b + 5;	//This is UNDEFINED as value of b on declaration (with no initialization) is RANDOM.
	cout << "Enter any integer: ";
	cin >> b;
	
	//This is ok. Variable a will be b + 5
	const int a = b + 5;
	cout << "You entered: " << b << " and a is: " << a << " and c is: " << c << " and global static x is: " << x << endl;
	
	return 0;
}
