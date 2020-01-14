#include "std_lib_facilities.h"

int main()
{	
	/*
	double a {0}, b {0};
	while(cin >> a && cin >> b)
	{		
		bool almost_equal = false;
		if (a < b)
		{
			cout << "Smaller is " << a << " and larger is " << b << endl;
			if ( b - a < 0.01) 
			{
				cout << b - a << endl;
				almost_equal = true;
			}	
						
		}
		else if (a > b)
		{
			cout << "Smaller is " << b << " and larger is " << a << endl;
			if ( a - b < 0.01) 
			{
				cout << a - b << endl;
				almost_equal = true;
			}	
		}
		else
		{
			cout << "The numbers are equal" << endl;
		}
		
		if (almost_equal)
			cout << "The numbers are almost equal" << endl;
	}
	*/
	
	double val {0.0}, smallest {0.0}, largest {0.0}, sum {0.0};
	string unit;
	
	int loop_count {0};
	
	vector<double> store;
	
	while(cout << "Enter value followed by unit :" && cin >> val >> unit)
	{
		
		if (unit == "cm" || unit == "in" || unit == "m" || unit == "ft")
		{
			cout << "You entered :" << val << unit << endl;
		}
		else
		{
			cout << "invalid unit" << endl;
		}
		
		
		
		//initialization
		if(loop_count == 0)
		{
			largest = smallest = val;			
		}
		
		cout << "You entered " << val << endl;
		if( val < smallest)
		{
			smallest = val;
			cout << "The smallest so far." << endl;
		}
		
		if( val > largest )
		{
			largest = val;
			cout << "The largest so far." << endl; 
		}
		
		loop_count++;
		
		//convert all to meters before summing
		if (unit == "cm") val *= 0.01;
		else if (unit == "in") val *= 0.0254;
		else if (unit == "ft") val *= 0.3048;		
		
		sum += val;
		store.push_back(val);
		
	}
	
	cout << "Largest is : " << largest << endl
		 << "Smallest is : " << smallest << endl
		 << "Loop Count is : " << loop_count << endl
		 << "Sum of values (in meters) is : " << sum << endl;
		 
	sort(store.begin(), store.end());
	for(auto i : store)
			cout << i << endl;
	
	return 0; 
}
