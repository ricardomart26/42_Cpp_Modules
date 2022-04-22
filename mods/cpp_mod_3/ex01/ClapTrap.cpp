#include "ClapTrap.hpp"

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

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
    if (this == &rhs)
        return (*this);
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;

    return (*this);
}

void    ClapTrap::attack(std::string const & target)
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
        std::cout << "ClapTrap <" << _name << "> is dead, cannot be repaired!";
    else if (_energyPoints <= 0)
        std::cout << "ClapTrap <" << _name << "> doenst have energy points, cannot be repaired!";
    else
    {
        _energyPoints--;
        _hitPoints += amount;
        std::cout << "Claptrap " << _name << " repaired damage, received " 
        << amount << " points of life, has now " << _hitPoints << "!" << std::endl; 
    }
}

const std::string &ClapTrap::getName(void) const
{
    return _name;
}

int ClapTrap::getHit() const
{
    return _hitPoints;
}

int ClapTrap::getEnergy() const
{
    return _energyPoints;
}

int ClapTrap::getAttack() const
{
    return _attackDamage;
}


void    ClapTrap::setName(const std::string &name)
{
    _name = name;
}

void    ClapTrap::setHit(int life)
{
    _hitPoints = life;
}

void    ClapTrap::setEnergy(int energy)
{
    _energyPoints = energy;
}

void    ClapTrap::setAttack(int attack)
{
    _attackDamage = attack;
}
