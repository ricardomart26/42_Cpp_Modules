#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap    ricardo("Ricardo");
    ClapTrap    tito("Tito");
    ClapTrap    julia("Julia");
    ScavTrap    fred("Fred");

    ricardo.attack("Tito");
    tito.takeDamage(20);
    julia.beRepaired(20);
    fred.attack("julia");
    fred.guardGate();

}
