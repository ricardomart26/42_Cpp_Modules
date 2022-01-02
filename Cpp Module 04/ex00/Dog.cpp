#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog class Constructed" << std::endl;
	setType("Dog");
}

Dog::Dog(const Dog& copy) : Animal()
{
	std::cout << "Dog class Copied" << std::endl;
	setType(copy.getType());
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
