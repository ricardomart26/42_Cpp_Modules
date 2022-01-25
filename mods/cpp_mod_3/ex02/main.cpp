#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/**
 * TODO: Check if Destructor is reverse order in ScavTrap and FragTrap
 * ! Already Done, Nice work
 * 
 */ 

int main(void)
{
    ClapTrap    ricardo("Ricardo");
    ClapTrap    tito("Tito");
    ClapTrap    julia("Julia");
    ScavTrap    fred("Fred");
    FragTrap    tito2("TITOOOOO");

    ricardo.attack("Tito");
    tito.takeDamage(20);
    julia.beRepaired(20);
    fred.attack("julia");
    fred.guardGate();
    tito2.attack("ricardo");
}
