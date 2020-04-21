//Checking default constructors
//https://stackoverflow.com/questions/19574696/so-can-a-class-have-two-default-constructors

#include <iostream>

class X
{
    int a, b;
public:
    X(std::istream &is = std::cin) {};
    X(int a = 1) {};
};

int main()
{
    X x(std::cin);  //OK
    X y(5); //Also OK
    //X z;  //Ambiguous - Which default constructor to call - Won't compile
    return 0;
}

