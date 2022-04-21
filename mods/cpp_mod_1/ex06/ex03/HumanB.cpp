#include "HumanB.hpp"

HumanB::HumanB() : _name("No name: Default constructor")
{
	std::cout << "Human B <name: "<< _name << "> constructed\n";
}

HumanB::HumanB( const std::string &name ) : _name( name )
{
	std::cout << "Human B <name: "<< _name << "> constructed\n";
}

HumanB::~HumanB()
{
}

void	HumanB::atack( void )
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	_weapon = &weapon;
}
