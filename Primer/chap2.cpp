#include <iostream>

using namespace std;

int main()
{
	//Check identifiers
	{
		cout << "Checking for identifiers" << endl;
		int _ = 5;
		double Double = 67.0;	
		cout << _ << " " << Double << endl;
		
		int i = 100, sum = 0;
		for (int i = 0; i != 10; ++i)
		{
			sum += i;
			cout << sum << endl;
		}
		
		cout << i << " " << sum << endl;
	}
	//Checking references
	{
		cout << endl;
		cout << "Checking for references" << endl;
		
		int ival = 1.01, &rval = ival;
		
		cout << "ival = " << ival << " rval = " << rval << endl;
		
		int ai, &ri = ai;
		cout << "BEFORE INITIALIZATION -> ai = " << ai << " r = " << ri << endl;
		ai = 5; ri = 10;
		cout << "AFTER INITIALIZATION -> ai = " << ai << " r = " << ri << endl;
		
		int bi = 0, &r1 = bi;
		double d = 0, &r2 = d;
		
		r2 = 3.14;
		bi = r2;
		
		//Will work
		r2 = r1;
		r1 = d;
		
		cout << "bi = " << bi << " d = " << d << " r2 = " << r2 << " r1 = " << r1 << endl;
	}
	
	//Check Pointers
	{
		int i = 5, &ri = i;
		
		//Will fail - CANNOT INITIALIZE POINTER WITH A REFERENCE OR ADDRESS OF A REFERENCE
		//int *pi = ri;
		//int *pi = &ri;
		
		//Will work
		int *pi = nullptr;
		pi = &i;
		
		cout << "*pi = " << *pi << endl;
		
		*pi = *pi * *pi;
		cout << "i = " << i << endl;
		
		//Will fail
		//double *dp = &i;
	}

	return 0;
}
