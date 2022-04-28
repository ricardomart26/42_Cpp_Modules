#ifndef AMATERIA_HPP
#define AMATERIA_HPP

// #include "ICharacter.hpp"
class ICharacter;
#include <iostream>


// Do copy and assignment operator
class AMateria
{
	public:

		AMateria();
		AMateria(std::string const & type);
		virtual ~AMateria();

		std::string const & getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter& target) = 0;

	protected:

		std::string _type;

};

#endif
