#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : protected AMateria
{

	public:

		Cure();
		Cure(const Cure &copy);
		~Cure();
		Cure & operator=(const Cure &obj);

		AMateria *clone() const;
		void use(ICharacter& target);

};


#endif
