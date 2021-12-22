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

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name), ClapTrap(name)
{
}

/**
 * TODO: Get ClapTrap Name!
 */

void    DiamondTrap::whoAmI()
{
    std::cout << "My name <" << _name << "> and my Claptrap name <>." << std::endl; 
}