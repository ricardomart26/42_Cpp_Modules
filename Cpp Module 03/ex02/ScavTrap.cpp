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
