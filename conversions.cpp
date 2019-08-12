#include "std_lib_facilities.h"

int main()
{	
	//Very simple int to char conversions -- safe conversion
	char c = 'x';
	int i1 = c;
	int i2 = 'x';
	char c2 = i1;

	cout << c << " " << i1 << " " << i2 << " " << c2 << endl;
	
	//unsafe conversions
	int a { 10000 };
	char uc { a };
	int b = uc;
	
	cout << a << " " << b << " " << uc << endl;
		
	cout << "Press any key to continue:" ;
	keep_window_open();
	return 0;
}
