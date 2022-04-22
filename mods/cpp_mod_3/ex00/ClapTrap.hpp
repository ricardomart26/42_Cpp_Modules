#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
    public:

        ClapTrap();
        ~ClapTrap();
        ClapTrap(const ClapTrap& copy);
        ClapTrap(std::string name);
        ClapTrap &operator=(const ClapTrap &rhs);

        void    attack(const std::string & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

    private:
        
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;

};

#endif
