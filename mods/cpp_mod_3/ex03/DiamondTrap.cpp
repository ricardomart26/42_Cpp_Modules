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

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "Diamond Trap initialized!" << std::endl;
	setName(name);
	setHit(FragTrap::getHit());
	setEnergy(ScavTrap::getEnergy());
	setAttack(FragTrap::getAttack());
	ClapTrap::setName("Claptrap OBJ");
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	this->setName(copy.getName());
	this->setHit(copy.getHit()); 
	this->setEnergy(copy.getEnergy()); 
	this->setAttack(copy.getAttack());
	this->ClapTrap::setName(copy.ClapTrap::getName());

}

/**
 * TODO: Get ClapTrap Name!
 */

void	DiamondTrap::whoAmI()
{
	std::cout << "My name <" << _name << "> and my Claptrap name <>." << std::endl; 
}

void		DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}
