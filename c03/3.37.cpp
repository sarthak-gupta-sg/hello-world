#include <iostream>

using namespace std;

int main()
{
    const char ca[] = { 'h', 'e', 'l', 'l', 'o'};
    const char * cp = ca;  //Pointer to a const object
    
    //char * cp = ca; //INVALID because this is a pointer to Non constant object whereas ca is constant as declared above
    //char * const cp = ca; //INVALID because this is a pointer which is a const and we are doing ++cp later
    
    while(*cp)
    {
        cout << endl << *cp ;
        ++cp;
        cout << " " << *cp ;
    }
    return 0;
}
