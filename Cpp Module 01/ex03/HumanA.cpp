#include "HumanA.hpp"
#include "Weapon.hpp"

void	HumanA::atack()
{
	std::cout << _name << " atack with his " << _weapon.getType() << std::endl;
}

