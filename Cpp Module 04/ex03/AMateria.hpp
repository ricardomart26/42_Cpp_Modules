#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{

	public:
		
		// AMateria();
		// AMateria(const AMateria &copy);
		// ~AMateria();
		// AMateria & operator=(const AMateria &obj);
		AMateria(std::string const & type);
		virtual ~AMateria();

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	
	protected:

		std::string _type;

};

#endif
