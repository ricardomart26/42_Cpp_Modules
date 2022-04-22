#include "DiamondTrap.hpp"

/**
 *  ANCHOR: Diamond Problem explained 
 * 
 * @whatis: 
 * * The Diamond Problem occurs when to superclasses of a class have a
 * * common base class. 
 * 
 * @example:
 * * If we have 2 classes (Student, Faculty) que herdam as duas os atributos da
 * * base class (Person), se tivermos outra classe que vai herdar das mesmas duas
 * * classes (Student, Faculty) vamos ter duas copias de todos os atributos da
 * * classe (Person).
 * 
 * @solucao:
 * * The solution to this problem is using the keyword 'virtual', we make the subclasses
 * * (Faculty and Student), como classes virtuais para eviar duas copias do classe
 * * (Person) 
 */

DiamondTrap::DiamondTrap()
{
	std::cout << "Diamond Trap initialized!" << std::endl;
	setHit(FragTrap::getHit());
	setEnergy(ScavTrap::getEnergy());
	ClapTrap::setName("random_clap_name");
	// setName(name);
	_name = "random";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	std::cout << "Diamond Trap initialized!" << std::endl;
	setHit(FragTrap::getHit());
	setEnergy(ScavTrap::getEnergy());
	ClapTrap::setName(name + "_clap_name");
	// setName(name);
	_name = name;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	_name = copy._name;
	setHit(copy.getHit()); 
	setEnergy(copy.getEnergy()); 
	setAttack(copy.getAttack());
	ClapTrap::setName(copy.ClapTrap::getName());
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond Trap deconstructed!" << std::endl;
}
/**
 * TODO: Get ClapTrap Name!
 */

void	DiamondTrap::whoAmI()
{
	std::cout << "My name <" << _name << "> and my Claptrap name is " << ClapTrap::getName() << ".\n"; 
}

void		DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}
