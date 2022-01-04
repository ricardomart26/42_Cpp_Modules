#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
	std::cout << "Constructed Ice class\n";
}

Ice::Ice(const Ice &copy) : AMateria("Ice")
{
	std::cout << "Constructed copy Ice class\n";
	*this = copy;
}

Ice::~Ice()
{
	std::cout << "Deconstructed Ice class\n";
	
}

Ice & Ice::operator=(const Ice &obj)
{
	(void)obj;
	std::cout << "Override Operator Ice class\n";
	return (*this);
}

AMateria* Ice::clone () const
{
	AMateria *icePtr = new Ice();
	return (icePtr);
}

void Ice::use(ICharacter& target)
{
	std::cout << "Shoots an ice bolt at " << target.getName() << '\n';
}

