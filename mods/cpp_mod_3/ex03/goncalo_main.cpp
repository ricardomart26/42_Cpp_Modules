#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap baby("Baby");
	DiamondTrap jeff;

	baby.attack("jeff");
	jeff.takeDamage(30);
	jeff.beRepaired(30);
	jeff.attack("Baby");
	baby.highFivesGuys();
	baby.guardGate();
	baby.whoAmI();
	jeff.attack("Baby");
	baby.takeDamage(30);
	baby.takeDamage(30);
	jeff.attack("Baby");
	baby.takeDamage(30);
	baby.takeDamage(30);
	jeff.attack("Baby");
	baby.takeDamage(30);
	baby = jeff;
	baby.whoAmI();
	baby.beRepaired(100);

	return (0);
}
