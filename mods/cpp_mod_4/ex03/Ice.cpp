#include "Ice.hpp"

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
	std::cout << "Override Operator Ice class\n";
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << '\n';
}

