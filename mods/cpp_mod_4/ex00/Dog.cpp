#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog class Constructed" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog& copy) : Animal()
{
	std::cout << "Dog class Copied" << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Dog class Deconstructed" << std::endl;
}

Dog & Dog::operator=(const Dog &obj)
{
	(void)obj;
	return (*this);
}
