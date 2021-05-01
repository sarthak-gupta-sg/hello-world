// Example program
#include <iostream>
#include <string>

int main()
{
 std::string a{"Hello"};
 std::cout << a.length();
 
 char const *p {"Hello\n"};
 std::cout << *p << " " << sizeof(*p);
 
 char const pb[] {"Hello"};
 std::cout << pb << " " << sizeof(pb);
 
 char const pc[] {'H','e','l','l','o'};
 std::cout << pc << " " << sizeof(pc);
}
