#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Frag trap Initialized with " << name << " name" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Frag Trap <" << getName() << "> destructor init" << std::endl;
}
