#include <iostream>

using namespace std;

static int x;

constexpr double xscale = 10;
constexpr double yscale = 0.8;

constexpr double scale(double x, double y)
{
	return (x * xscale + y * yscale);
}



int main()
{
	//Trying const and constexpr;
	int b;
	
	//This will give error - as no initialization value has been supplied
	//const int a; 
		
	const int c = b + 5;	//This is UNDEFINED as value of b on declaration (with no initialization) is RANDOM.
	cout << "Enter any integer: ";
	cin >> b;
	
	//This is ok. Variable a will be b + 5
	const int a = b + 5;
	cout << "You entered: " << b << " and a is: " << a << " and c is: " << c << " and global static x is: " << x << endl;
	
	//constexpr int x = 10, y = 10;
	int x, y;
	cout << "Enter any two integers:" << endl;
	cin >> x >> y;
	cout << "Output from constexpr function is :" << scale(x, y) << endl;
	
	return 0;
}
