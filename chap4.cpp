#include "std_lib_facilities.h"

int main()
{
	constexpr double inch_to_cm  {2.54};
	double val;
	char unit;
	cout << "Enter an number with unit (as i or c):"; 
	cin >> val >> unit;
		
	if ( unit == 'i')
		cout << "Value in centimeter is: " << (val * inch_to_cm) << endl;
	else if(unit == 'c')
		cout << "Value in inches is: " << (val / inch_to_cm) << endl;
	else
		cout << "Entered unit is unrecognised" << endl;

	cout << "Press any key to continue:" ;
	keep_window_open();
	return 0;
}
