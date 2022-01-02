#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	:   _name("Empty"), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << "Clap trap Initialized with no name (Default contructor)" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	:   _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
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
	this->setName(copy.getName());
	this->setHit(copy.getHit()); 
	this->setEnergy(copy.getEnergy()); 
	this->setAttack(copy.getAttack()); 
}

void		ClapTrap::attack(std::string const & target)
{
	std::cout << "Claptrap " << this->_name << " attack " << target << ", causing " 
	<< this->_attackDamage << " points of damage!" << std::endl; 
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Claptrap " << this->_name << " took Damage, received " 
	<< amount << " points of damage!" << std::endl; 
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Claptrap " << this->_name << " repaired damage, received " 
	<< amount << " points of life!" << std::endl; 
}

std::string	ClapTrap::getName() const
{
	return _name;
}

int			ClapTrap::getHit() const
{
	return _hitPoints;
}

int			ClapTrap::getAttack() const
{
	return _attackDamage;
}

int			ClapTrap::getEnergy() const
{
	return _energyPoints;
}

void		ClapTrap::setName(std::string name)
{
	_name = name;
}

void		ClapTrap::setHit(int hit)
{
	_hitPoints = hit;
}

void		ClapTrap::setAttack(int damage)
{
	_attackDamage = damage;
}

void		ClapTrap::setEnergy(int energy)
{
	_energyPoints = energy;
}

