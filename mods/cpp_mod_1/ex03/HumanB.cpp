#include "HumanB.hpp"

HumanB::HumanB() : _name("No name: Default constructor")
{
	std::cout << "Human B <name: "<< _name << "> constructed\n";
}

HumanB::HumanB(const std::string &name) : _name(name)
{
	std::cout << "Human B <name: "<< _name << "> constructed\n";
}

void	HumanB::atack()
{
	std::cout << this->_name << " atack with his " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
