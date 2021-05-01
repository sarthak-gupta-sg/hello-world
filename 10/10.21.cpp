#include <iostream>

int main()
{
	auto num { 25 };
	auto lambda { [&] () -> bool { 
			if( num == 0 )
			{
				return true;
			}
			else
			{
				std::cout << "Current value of num is: " << num << std::endl;
				--num;
				return false;
			}
		} };
				
	while( !lambda() );
	
	//Test for additional calls
	lambda();
	std::cout << "Final value of num is: " << num << std::endl;
	
	return 0;
}
