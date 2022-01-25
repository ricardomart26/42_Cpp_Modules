#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat class Constructed" << std::endl;
	_type = "Cat";
	_my_brain = new Brain();
}

Cat::Cat(const Cat& copy) : Animal()
{
	std::cout << "Cat class Copied" << std::endl;
	this->_type = copy._type;
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
