#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal class Constructed" << std::endl;
	_type = "";

}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal class Copied" << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Animal class Deconstructed" << std::endl;
}

Animal & Animal::operator=(const Animal &obj)
{
	(void)obj;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (_type);
}

void Animal::makeSound(void) const
{
	if (_type.empty())
		std::cout << "Im an Animal, but you dont know which one, Loser" << std::endl;
	else if (_type.compare("Dog"))
		std::cout << "Ão Ão" << std::endl;
	else if (_type.compare("Cat"))
		std::cout << "Miau" << std::endl;
}
