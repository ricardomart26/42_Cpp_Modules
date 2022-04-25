#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "-- WrongAnimal class: Constructed --" << std::endl;
	_type = "";

}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "-- WrongAnimal class: Copied --" << std::endl;
	_type = copy._type;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &obj)
{
	if (this == &obj)
		return (*this);
	this->_type = obj._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "-- WrongAnimal class: Deconstructed --" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

void		WrongAnimal::makeSound(void) const
{
	if (_type.empty())
		std::cout << "Im an WrongAnimal, but you dont know which one, Loser" << std::endl;
	else
		std::cout << "This is a Wrong Animal!" << std::endl;
}

