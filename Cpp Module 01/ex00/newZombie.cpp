#include "Zombie.hpp"

Zombie	*Zombie::newZombie(std::string name)
{
	Zombie *alloczombie = new Zombie;

	alloczombie->set_name(name);
	alloczombie->annouce();
	return (alloczombie);
}
