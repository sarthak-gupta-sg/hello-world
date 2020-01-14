#include <iostream>

using namespace std;

namespace X
{
	int var = 0;
	void print()
	{
		cout << "var value = " << var << endl;
		return;
	}
}		

namespace Y
{
	int var = 0;
	void print()
	{
		cout << "var value = " << var << endl;
		return;
	}
}

namespace Z
{
	int var = 0;
	void print()
	{
		cout << "var value = " << var << endl;
		return;
	}
}

int main()
{
	X::var = 7;
	X::print();
	
	using namespace Y;
	var = 9;
	print();
	
	{
		using Z::var;
		using Z::print;
		var = 11;
		print();
	}
	
	print();
	X::print();
	
	return 0;
}
	
