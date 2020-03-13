#include "std_lib_facilities.h"

int main()
{
	string previous, current;
	cout << "Enter string:"; 

	while(cin >> current)
	{
		if ( current == previous )
			cout << "Repeat detected" << endl;
		previous = current;

	}
	cout << "Press any key to continue:" ;
	keep_window_open();
	return 0;
}
