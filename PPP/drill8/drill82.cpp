#include <iostream>

using namespace std;

void swap_v(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	return;	
}
		
void swap_r(int & a, int & b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	return;	
}

/* This will not compile since we are trying to change constant references
void swap_cr(const int & a, const int & b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	return;	
}
*/
int main()
{
	int x = 7, y = 9;
	
	swap_v(x, y);
	cout << "After swap_v(), x is : " << x << " and y is : " << y << endl;
	
	swap_r(x, y);
	cout << "After swap_r(), x is : " << x << " and y is : " << y << endl;
	
	//swap_cr(x, y);
	//cout << "After swap_cr(), x is : " << x << " and y is : " << y << endl;

	swap_v(7, 9);
	cout << "After swap_v(), x is : " << x << " and y is : " << y << endl;
	
	//swap_r(7, 9); //Will not compile due to literals being passed to (references to variables)
	//cout << "After swap_r(), x is : " << x << " and y is : " << y << endl;
	
	//swap_cr(7, 9);
	//cout << "After swap_cr(), x is : " << x << " and y is : " << y << endl;
	
	const int cx = 7, cy = 9;
	
	swap_v(cx, cy);
	cout << "After swap_v(), cx is : " << cx << " and cy is : " << cy << endl;
	
	//Will not compile since "binding reference of type ‘int&’ to ‘const int’ discards qualifiers"
	//swap_r(cx, cy);
	//cout << "After swap_r(), cx is : " << cx << " and cy is : " << cy << endl;
		
	
	double dx = 7.7, dy = 9.9;
	
	swap_v(dx, dy);
	cout << "After swap_v(), dx is : " << dx << " and dy is : " << dy << endl;
	
	//Will not compile since we are trying to set reference of int to double
	//swap_r(dx, dy);
	//cout << "After swap_r(), dx is : " << dx << " and dy is : " << dy << endl;
	return 0;
}
