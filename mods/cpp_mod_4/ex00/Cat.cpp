#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "-- Cat class: Constructed --" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "-- Cat class: Copied --" << std::endl;
}

Cat::~Cat()
{
	std::cout << "-- Cat class: Deconstructed --" << std::endl;
}

Cat & Cat::operator=(const Cat &obj)
{
	Animal::operator=(obj);
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Miau Miau" << std::endl;
}
