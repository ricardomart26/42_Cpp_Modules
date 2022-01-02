#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

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

		std::string const & getName() const = 0;
		void equip(AMateria* m) = 0;
		void unequip(int idx) = 0;
		void use(int idx, ICharacter& target) = 0;

	private:

		std::string	_name;
		AMateria*	_materia[SIZE];
};

#endif
