#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA : public Weapon
{
	public:
		HumanA(std::string name, Weapon weapon)
			: p_name(name), p_weapon(weapon)
		{
		}
		void	atack()
		{
			std::cout << p_name << " atack with his " << getType() << std::endl;
		}

	private:
		std::string	p_name;
		Weapon		p_weapon;
};

#endif
