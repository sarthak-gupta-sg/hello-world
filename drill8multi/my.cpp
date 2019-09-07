#include "my.h"
#include <iostream>

using namespace std;

extern int foo;

void print_foo()
{
	cout << "foo is : " << foo << endl;
	return;
}

void print(int i)
{
	cout << "i is : " << i << endl;
	return;
}
