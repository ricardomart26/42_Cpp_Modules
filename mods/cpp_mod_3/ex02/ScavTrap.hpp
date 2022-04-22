#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{

    public:

        ScavTrap(); 
        ScavTrap(std::string name); 
        ~ScavTrap();

        void    attack(std::string const & target);
        void    guardGate();

};

#endif
