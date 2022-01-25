#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat class Constructed" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal()
{
	std::cout << "WrongCat class Copied" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat class Deconstructed" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &obj)
{
	(void)obj;
	return (*this);
}

