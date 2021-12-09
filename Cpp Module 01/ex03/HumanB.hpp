#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB : public Weapon
{
	public:
		HumanB(std::string name)
		:	p_name(name)
		{
		}
		void	atack()
		{
			std::cout << p_name << " atack with his " << getType() << std::endl;
		}
		void	setWeapon(Weapon weapon)
		{
			p_weapon = weapon;
		}

	private:
		std::string	p_name;
		Weapon		p_weapon;
};

#endif
