#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(const std::string name)
		:	_name(name) {}
		void	atack();
		void	setWeapon(Weapon &weapon);

	private:

		std::string		_name;
		Weapon*	_weapon;

};

#endif
