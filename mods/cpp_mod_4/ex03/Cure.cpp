#include "Cure.hpp"

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
	std::cout << "Override Operator Cure class\n";
	_type = obj._type;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* Heals " << target.getName() << "'s wounds. *\n";
}

