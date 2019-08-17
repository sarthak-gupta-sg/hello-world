#include "std_lib_facilities.h"

int main()
{
	constexpr double inch_to_cm  {2.54}; //Prevents narrowing
	double val;
	char unit;
	cout << "Enter an number with unit (as i or c):"; 
	cin >> val >> unit;
		
	if ( unit == 'i')
		cout << "Value in centimeter is: " << (val * inch_to_cm) << " cm" << endl;
	else if(unit == 'c')
		cout << "Value in inches is: " << (val / inch_to_cm) << " in" << endl;
	else
		cout << "Entered unit is unrecognised" << endl;

	//Same thing as a switch statement
	switch(unit)
	{
		case 'i' : cout << "Value in centimeter is: " << (val * inch_to_cm) << " cm" << endl;
					break;
		case 'c' : cout << "Value in inches is: " << (val / inch_to_cm) << " in" << endl;
					break;			
		default : cout << "Entered unit is unrecognised" << endl;	 
	}
	
	//Print out a table for characters
	auto i = 0;
	auto v = 'A';
	while( i < 26 )
	{
		cout << v << " " << int {v} << endl;
		v++;
		i++;
	}
	
	cout << "Press any key to continue:" << endl ; //Needed only on Windows
	//keep_window_open();
	return 0;
}
