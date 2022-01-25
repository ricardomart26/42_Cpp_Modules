#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog class Constructed" << std::endl;
	setType("Dog");
	_my_brain = new Brain();
}

Dog::Dog(const Dog& copy) : Animal()
{
	std::cout << "Dog class Copied" << std::endl;
	this->_type = copy._type;
	_my_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog class Deconstructed" << std::endl;
	delete _my_brain;
}

Dog & Dog::operator=(const Dog &obj)
{
	(void)obj;
	return (*this);
}
