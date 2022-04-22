#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Random", 100, 100, 30)
{
    std::cout << "Frag trap Initialized with " << getName() << " name" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "Frag trap Initialized with " << getName() << " name" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Frag Trap <" << getName() << "> destructor init" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "Give me a high five you beautifull guy!" << std::endl;
}

void    FragTrap::attack(std::string const & target)
{
    if (this->getHit() <= 0)
        std::cout << "FragTrap <" << getName() << "> is dead, cannot attack!\n";
    else if (this->getEnergy() <= 0)
        std::cout << "FragTrap <" << getName() << "> doenst have energy points, cannot be repaired!\n";
    else
    {
        setEnergy(getEnergy() - 1);
        std::cout << "FragTrap " << getName() << " attack " << target << ", causing " 
        << getAttack() << " points of damage!" << std::endl; 
    }
}
