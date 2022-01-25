#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat class Constructed" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat& copy) : Animal()
{
	std::cout << "Cat class Copied" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Cat class Deconstructed" << std::endl;
}

Cat & Cat::operator=(const Cat &obj)
{
	(void)obj;
	return (*this);
}
