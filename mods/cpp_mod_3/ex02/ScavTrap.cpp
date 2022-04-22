#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "Scav trap Initialized with " << name << " name" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scav Trap <" << getName() << "> destructor init" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << getName() << " entered Gate keeper mode" << std::endl;
}

void    ScavTrap::attack(std::string const & target)
{
    if (this->getHit() <= 0)
        std::cout << "ScavTrap <" << getName() << "> is dead, cannot attack!\n";
    else if (this->getEnergy() <= 0)
        std::cout << "ScavTrap <" << getName() << "> doenst have energy points, cannot be repaired!\n";
    else
    {
        setEnergy(getEnergy() - 1);
        std::cout << "ScavTrap " << getName() << " attack " << target << ", causing " 
        << getAttack() << " points of damage!" << std::endl; 
    }
}
