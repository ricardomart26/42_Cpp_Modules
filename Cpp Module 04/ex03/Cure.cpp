#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{
	std::cout << "Constructed Cure class\n";
}

Cure::Cure(const Cure &copy) : AMateria("cure")
{
	std::cout << "Constructed copy Cure class\n";
	*this = copy;
}

Cure::~Cure()
{
	std::cout << "Deconstructed Cure class\n";
}

Cure & Cure::operator=(const Cure &obj)
{
	(void)obj;
	std::cout << "Override Operator Cure class\n";
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria *CurePtr = new Cure();
	return (CurePtr);
}

void Cure::use(ICharacter& target)
{
	std::cout << "Heals " << target.getName() << " wounds.\n";
}

