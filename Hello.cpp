#include <iostream>
#include <string>

int main()
{
	std::string name;
	std::cout << "Hello Git" << std::endl << "Enter your name :";
	std:cin >> name;
	std::cout << "Hello " + name << std::endl;
	return 0;
}
