#include "Data.hpp"

Data::Data()
{

}

Data::Data(const std::string &name, int age) : _name(name), _age(age)
{
    
}

Data::Data(const Data &copy) : _name(copy._name), _age(copy._age)
{
    
}


Data &Data::operator=(const Data &rhs)
{
    if (this == &rhs)
        return (*this);
    _name = rhs._name;
    _age = rhs._age;
    return (*this);
}

std::string Data::getName(void) const
{
    return (_name);
}


int Data::getAge(void) const
{
    return (_age);
}
