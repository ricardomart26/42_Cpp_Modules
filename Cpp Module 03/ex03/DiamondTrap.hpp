#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{

    public:

    DiamondTrap(std::string name);

    void whoAmI();

    private:

        std::string _name;
};

#endif