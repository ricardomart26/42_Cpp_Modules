#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat class Constructed" << std::endl;
	setType("Cat");
	_my_brain = new Brain();
}

Cat::Cat(const Cat& copy) : Animal()
{
	std::cout << "Cat class Copied" << std::endl;
	setType(copy.getType());
	_my_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat class Deconstructed" << std::endl;
	delete _my_brain;
}

Cat & Cat::operator=(const Cat &obj)
{
	(void)obj;
	return (*this);
}
