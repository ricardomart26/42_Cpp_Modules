#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
    public:

        ClapTrap();
        ClapTrap(const std::string &name, int hit, int energy, int Damage);
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap& copy);
        ClapTrap &operator=(const ClapTrap &rhs);

        void                attack(std::string const & target);
        void                takeDamage(unsigned int amount);
        void                beRepaired(unsigned int amount);
        void                setName(const std::string &name);
        void                setHit(int life);
        void                setEnergy(int energy);
        void                setAttack(int attack);
        const std::string   &getName() const;
        int                 getHit() const;
        int                 getEnergy() const;
        int                 getAttack() const;

    private:
        
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;

};

#endif
