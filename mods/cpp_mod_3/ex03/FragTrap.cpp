#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Frag trap Initialized with no name (Default contructor)" << std::endl;
	setName("Empty");
	setHit(100);
	setEnergy(100);
	setAttack(30);
}

FragTrap::FragTrap(const FragTrap &copy)
{
	this->setName(copy.getName());
	this->setHit(copy.getHit()); 
	this->setEnergy(copy.getEnergy()); 
	this->setAttack(copy.getAttack()); 
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Frag trap Initialized with " << name << " name" << std::endl;
	setName(name);
	setHit(100);
	setEnergy(100);
	setAttack(30);
}

FragTrap::~FragTrap()
{
	std::cout << "Frag Trap <" << getName() << "> destructor init" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
	std::cout << "Give me a high five you beautifull guy!" << std::endl;
}
