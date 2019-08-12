#include "std_lib_facilities.h"

int main()
{
	int num = 0;
	cout << "Enter an integer:"; 
	cin >> num;
	cout << "The square root of a number is:" << sqrt(num) << std::endl;

	string name1, name2;
	cout << "Enter two strings:"; 
	cin >> name1 >> name2;

	if ( name1 == name2)
		cout << "Both strings are same" << endl;
	else if(name1 > name2)
		cout << name1 << " is lexicographically greater than " << name2 << endl;
	else
		cout << name1 << " is lexicographically smaller than " << name2 << endl;

	cout << "Press any key to continue:" ;
	keep_window_open();
	return 0;
}
