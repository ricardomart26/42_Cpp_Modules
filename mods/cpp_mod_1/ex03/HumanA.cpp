#include "HumanA.hpp"

HumanA::HumanA( const std::string& name, Weapon &Weapon ) : _name( name ), _weapon( Weapon )
{
	std::cout << "Human A <name: "<< _name << "> and weapon <type: " << _weapon.getType() << "> constructed\n";
}

void	HumanA::atack( void )
{
	std::cout << _name << " atack with his " << _weapon.getType() << std::endl;
}

