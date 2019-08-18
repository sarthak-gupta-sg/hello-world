//drill5

#include "std_lib_facilities.h"

void error(string s)
{
	throw runtime_error(s);
	return;
}

int main()
{
	try
	{
		//test code
		vector<int> v;
		
		for(int i; cin >> i; )
			v.push_back(i);
		
		if(!cin)
			error("Couldn't read some int");
		
		for(int i = 0; i <= v.size(); ++i)
			cout << "v[" << i << "] == " << v.at(i) << endl;
	
		cout << "Success!" << endl;
		return 0;
	}
	catch(out_of_range)
	{
		cerr << "Out of range error" << endl;
	}
	catch(runtime_error & e)
	{
		cerr << "Runtime error:" << e.what() << endl;
	}
	catch (exception & e)
	{
		cerr << "I caught Error:" << e.what() << endl;
		return -1;
	}
	catch(...)
	{
		cerr << "Unknown Exception" << endl;
		return -2;
	}
}	
		
