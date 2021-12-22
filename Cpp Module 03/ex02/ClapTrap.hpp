#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
    public:

        ClapTrap();
        ClapTrap(const std::string &name, int hit, int energy, int Damage);
        ~ClapTrap();
        ClapTrap(const ClapTrap& copy);
        ClapTrap(std::string name);

        void        attack(std::string const & target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        std::string getName();

    private:
        
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;

};

#endif
