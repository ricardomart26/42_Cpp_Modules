#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "-- Dog class: Constructed --" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "-- Dog class: Copied --" << std::endl;
}

Dog::~Dog()
{
	std::cout << "-- Dog class: Deconstructed --" << std::endl;
}

Dog & Dog::operator=(const Dog &obj)
{
	Animal::operator=(obj);
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Ão Ão" << std::endl;
}
