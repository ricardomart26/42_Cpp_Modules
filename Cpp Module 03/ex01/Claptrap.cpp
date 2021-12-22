#include "Claptrap.hpp"

ClapTrap::ClapTrap(const std::string &name)
    :   _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Clap Trap <" << name << "> Contructor init" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name, int hit, int energy, int Damage)
    :   _name(name), _hitPoints(hit), _energyPoints(energy), _attackDamage(Damage)
{
    std::cout << "Clap Trap <" << name << "> Contructor init" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Clap Trap <" << getName() << "> Destructor init" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Clap Trap <" << getName() << "> Copy init" << std::endl;
    *this = copy;
}

void    ClapTrap::attack(std::string const & target)
{
    std::cout << "Claptrap " << this->_name << " attack " << target << ", causing " 
    << this->_attackDamage << " points of damage!" << std::endl; 
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "Claptrap " << this->_name << " took Damage, received " 
    << amount << " points of damage!" << std::endl; 
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "Claptrap " << this->_name << " repaired damage, received " 
    << amount << " points of life!" << std::endl; 
}

std::string ClapTrap::getName()
{
    return _name;
}
