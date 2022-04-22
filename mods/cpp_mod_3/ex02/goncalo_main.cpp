#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap clap("Clap");
	ScavTrap momma("Momma");
	FragTrap baby("Baby");

	baby.attack("Clap");
	clap.takeDamage(30);
	clap.attack("Baby");
	baby.takeDamage(30);
	baby.beRepaired(30);
	momma.attack("clap");
	clap.takeDamage(30);
	baby.highFivesGuys();
	momma.attack("Baby");
	baby.takeDamage(30);
	clap.attack("Baby");
	baby.takeDamage(30);
	momma.attack("Baby");
	baby.takeDamage(30);
	clap.attack("Baby");
	baby.takeDamage(30);
	momma.attack("Baby");
	baby.takeDamage(30);

	return (0);
}
