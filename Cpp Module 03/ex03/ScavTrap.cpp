#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Scav trap Initialized with no name (Default contructor)" << std::endl;
	setName("Empty");
	setHit(100);
	setEnergy(50);
	setAttack(20);
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	this->setName(copy.getName());
	this->setHit(copy.getHit()); 
	this->setEnergy(copy.getEnergy()); 
	this->setAttack(copy.getAttack()); 
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Scav trap Initialized with " << name << " name" << std::endl;
	setName(name);
	setHit(100);
	setEnergy(50);
	setAttack(20);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav Trap <" << getName() << "> destructor init" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << getName() << " entered Gate keeper mode" << std::endl;
}
