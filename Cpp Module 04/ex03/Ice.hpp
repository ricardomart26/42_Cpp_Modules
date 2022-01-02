#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{

	public:

		Ice();
		Ice(const Ice &copy);
		~Ice();
		Ice & operator=(const Ice &obj);

		AMateria *clone() const;

};

#endif
