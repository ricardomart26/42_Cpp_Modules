#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    // ClapTrap    ricardo("Ricardo");
    // ClapTrap    tito("Tito");
    // ClapTrap    julia("Julia");
    // ScavTrap    fred("Fred");
    // FragTrap    tito2("TITOOOOO");
    DiamondTrap Goncalo("Goncalo");

    Goncalo.attack("himself");
    Goncalo.whoAmI();
    // ricardo.attack("Tito");
    // tito.takeDamage(20);
    // julia.beRepaired(20);
    // fred.attack("julia");
    // fred.guardGate();
    // tito2.attack("ricardo");
}
