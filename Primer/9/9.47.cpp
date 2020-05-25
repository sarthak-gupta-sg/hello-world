#include <iostream>
#include <string>

using namespace std;

int main()
{
    string data("ab2c3d7R4E6"), domain_one("0123456789"), domain_two("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    
    //1. USING find_first_of
    
    //find numbers
    string::size_type pos = 0;
    
    /* This loop will not work if data[0] = 0
     * Because then LHS will evaluate to 0 which is false in C++
     * Value of an assignment expression is the LHS of assignment
     */ 
    /*
    while((pos = data.find_first_of(domain_one, pos)) && pos != string::npos)
    {
        ;
        cout << data[pos] << " found at: " << pos << endl;
        pos++;
    }
    */
    
    while((pos = data.find_first_of(domain_one, pos)) != string::npos)
    {
        cout << data[pos] << " found at: " << pos << endl;
        pos++;
    }
    
    //find alphabets
    pos = 0;
    while((pos = data.find_first_of(domain_two, pos)) != string::npos)
    {
        cout << data[pos] << " found at: " << pos << endl;
        pos++;
    }
    
    
    //2. USING find_first_not_of
    //find numbers
    pos = 0;
    while((pos = data.find_first_not_of(domain_two, pos)) != string::npos)
    {
        cout << data[pos] << " found at: " << pos << endl;
        pos++;
    }
    
    //find alphabets
    pos = 0;
    while((pos = data.find_first_not_of(domain_one, pos)) != string::npos)
    {
        cout << data[pos] << " found at: " << pos << endl;
        pos++;
    }

    return 0;
}
