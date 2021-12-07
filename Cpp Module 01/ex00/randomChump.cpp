#include "Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie randomZombie;

	randomZombie.set_name(name);
	randomZombie.annouce();
}
