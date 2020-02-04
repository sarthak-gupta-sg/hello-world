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
		
		if(pi == nullptr)
			cout << "Invalid pointer" << endl;
		else
			cout << "Valid pointer" << endl;
			
		pi = nullptr;
		
		if(pi == nullptr)
			cout << "Invalid pointer" << endl;
		else
			cout << "Valid pointer" << endl;

		//Will fail
		//long *lp = &i;	
	}
	
	//Check Constants -- VERY IMPORTANT
	{
		//Will fail
		//const int buf;
		
		int cnt = 0;
		const int sz = cnt;
		
		++cnt;
		
		//Will fail
		//++sz;
		
		//int &r = 42;       //is invalid
		const int &r = 42;   //is valid
		
		int i = 42, a = 43;
		double d = 3.14;
		
		
		//int &ri = d;    // invalid
		const int &ri = d;  //valid
		
		int &ri2 = i;
		
		//Try to assign ri2 to another int - WILL FAIL
		//&ri2 = a;
		
		const int b = 54;
		const int *cptr = &sz;
		cptr = &b;
		const int * const cptrb = &sz;
		
		//Will fail
		//cptrb = &b;
	}
	//Test for user defined types

	return 0;
}
