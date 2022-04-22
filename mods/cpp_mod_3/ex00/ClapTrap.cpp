#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    :   _name("Chad"), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
    std::cout << "Default init" << std::endl;
}


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
    _name = copy._name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;

}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
    if (this == &rhs)
        return (*this);
    _name = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
    return (*this);
}

void    ClapTrap::attack(const std::string & target)
{
    if (_hitPoints <= 0)
        std::cout << "ClapTrap <" << _name << "> is dead, cannot attack!\n";
    else if (_energyPoints <= 0)
        std::cout << "ClapTrap <" << _name << "> doenst have energy points, cannot be repaired!\n";
    else
    {
        _energyPoints--;
        std::cout << "Claptrap " << _name << " attack " << target << ", causing " 
        << _attackDamage << " points of damage!" << std::endl; 
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= 0)
        std::cout << "ClapTrap <" << _name << "> is dead, cannot be repaired!\n";
    else if (_energyPoints <= 0)
        std::cout << "ClapTrap <" << _name << "> doenst have energy points, cannot be repaired!\n";
    else
    {
        _hitPoints -= amount;
        std::cout << "Claptrap <" << _name << "> took Damage, received " 
        << amount << " points of damage !" << std::endl; 
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints <= 0)
        std::cout << "ClapTrap <" << _name << "> is dead, cannot be repaired!" << std::endl;
    else if (_energyPoints <= 0)
        std::cout << "ClapTrap <" << _name << "> doenst have energy points, cannot be repaired!" << std::endl;
    else
    {
        _energyPoints--;
        _hitPoints += amount;
        std::cout << "Claptrap " << _name << " repaired damage, received " 
        << amount << " points of life, has now " << _hitPoints << "!" << std::endl; 
    }
}
