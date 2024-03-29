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

Animal & Animal::operator=(const Animal &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this); 
}

std::string Animal::getType(void) const
{
	return (_type);
}

void Animal::makeSound(void) const
{
}

void Animal::set_idea(const std::string &idea)
{
	(void)idea;
}

void Animal::print_idea(int idx) const
{
	(void)idx;
}
