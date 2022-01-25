#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int main(void)
{
	Zombie *allocZombie = newZombie("Allocated BraiiiiiiinnnnzzzzZ...");
	allocZombie->annouce();
	delete allocZombie;

	Zombie stackZombie("teste stack");

	stackZombie.annouce();
	randomChump("teste");
}

