#include "Claptrap.hpp"

int main(void)
{
    ClapTrap ricardo("Ricardo");
    ClapTrap tito("Tito");
    ClapTrap julia("Julia");

    ricardo.attack("Tito");
    tito.takeDamage(20);
    julia.beRepaired(20);

}
