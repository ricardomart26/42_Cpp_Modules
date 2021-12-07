#include "Zombie.hpp"


Zombie	*Zombie::newZombie(std::string name)
{
	Zombie *alloczombie = new Zombie;

	alloczombie->set_name(name);
	alloczombie->annouce();
	return (alloczombie);
}

// int main(void)
// {
// 	Zombie *zombie = newZombie("Allocated BraiiiiiiinnnzzzZ...");

// 	zombie->annouce();
// 	return (0);
// }
