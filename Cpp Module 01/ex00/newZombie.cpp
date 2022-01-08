#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *alloczombie = new Zombie(name);

	return (alloczombie);
}
