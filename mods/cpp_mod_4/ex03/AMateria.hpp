#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
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
		virtual void use(ICharacter& target);

	protected:

		std::string _type;

};

#endif
