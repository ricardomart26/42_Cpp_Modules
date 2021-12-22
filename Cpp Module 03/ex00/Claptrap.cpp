#include "Claptrap.hpp"

ClapTrap::ClapTrap(std::string name)
    :   _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Contructor init" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor init" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Copy init" << std::endl;
    *this = copy;
}

void    ClapTrap::attack(std::string const & target)
{
    std::cout << "Claptrap " << _name << " attack " << target << ", causing " 
    << _attackDamage << " points of damage!" << std::endl; 
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_energyPoints - amount <= 0)
    {
        std::cout << "ClapTrap <" << _name << "> his dead!";
        return ;
    }
    _energyPoints -= amount;
    std::cout << "Claptrap <" << _name << "> took Damage, received " 
    << amount << " points of damage, has now " << _energyPoints << "!" << std::endl; 
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints < 0)
    {
        std::cout << "ClapTrap <" << _name << "> his dead, cannot be repaired!";
        return ;
    }
    _energyPoints += amount;
    std::cout << "Claptrap " << _name << " repaired damage, received " 
    << amount << " points of life, has now " << _energyPoints << "!" << std::endl; 
}
