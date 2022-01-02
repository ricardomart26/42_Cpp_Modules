#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
		Character();
		Character(const Character &copy);
		~Character();
		Character & operator=(const Character &obj);

		std::string const & getName() const = 0;
		void equip(AMateria* m) = 0;
		void unequip(int idx) = 0;
		void use(int idx, ICharacter& target) = 0;

};

#endif
