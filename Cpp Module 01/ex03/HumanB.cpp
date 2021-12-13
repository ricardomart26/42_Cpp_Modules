#include "HumanB.hpp"

void	HumanB::atack()
{
	std::cout << this->_name << " atack with his " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
