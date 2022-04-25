#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "-- Animal class: Constructed --" << std::endl;
	_type = "";

}

Animal::Animal(const Animal& copy)
{
	std::cout << "-- Animal class: Copied --" << std::endl;
	this->_type = copy._type;
}

Animal::~Animal()
{
	std::cout << "-- Animal class: Deconstructed --" << std::endl;
}

Animal & Animal::operator=(const Animal &obj)
{
	std::cout << "-- Animal class: Assignment operator init --" << std::endl;
	if (this == &obj)
		return (*this);
	this->_type = obj._type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (_type);
}

void Animal::makeSound(void) const
{
}
