#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "-- WrongCat class: Constructed --" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	std::cout << "-- WrongCat class: Copied --" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "-- WrongCat class: Deconstructed --" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &obj)
{
	if (this == &obj)
		return (*this);
	this->_type = obj._type;
	return (*this);
}

