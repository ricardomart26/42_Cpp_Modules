#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat class Constructed" << std::endl;
	setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal()
{
	std::cout << "WrongCat class Copied" << std::endl;
	setType(copy.getType());
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

