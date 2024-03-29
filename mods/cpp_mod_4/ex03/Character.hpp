#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

#define SIZE 4

/**
 * Has a limit of 4 materias
 */

class Character : public ICharacter
{

	public:

		Character();
		Character(const std::string &name);
		Character(const Character &copy);
		~Character();
		Character & operator=(const Character &obj);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria *getMateriaAddress(int idx) const;

	private:

		std::string	_name;
		AMateria*	_materia[SIZE];

};

#endif
