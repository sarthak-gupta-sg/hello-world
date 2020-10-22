#ifndef PERSON_H
#define PERSON_H

#include <string>

struct Person
{
    std::string name;
    std::string address;
    
    //Constructor
    Person(std::string const & nam, std::string const & addr) : name(nam), address(addr)
    {
    }
    
    std::string getName() const
    {
        return name;
    }

    std::string getAddress() const
    {
        return address;
    }
};

//Non Member functions
std::istream& read(std::istream & in, Person & object)
{
    in >> object.name >> object.address;
    return in;
}

std::ostream& print(std::ostream & out, Person const & object)
{
    out << "Name: " << object.getName() << std::endl
        << "Address: " << object.getAddress() << std::endl; 
    return out;
}

#endif
