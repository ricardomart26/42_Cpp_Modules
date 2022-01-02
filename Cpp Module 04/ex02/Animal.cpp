#include "Animal.hpp"

Animal::~Animal()
{
	std::cout << "Virtual deconstructor Animal" << '\n';
}

std::string Animal::getType(void) const
{
	return (_type);
}

void		Animal::setType(std::string type)
{
	_type = type;
}
