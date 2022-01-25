#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "Frag trap Initialized with " << name << " name" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Frag Trap <" << getName() << "> destructor init" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "Give me a high five you beautifull guy!" << std::endl;
}
