#include "Zombie.hpp"


int main(void)
{
	Zombie *allocZombie;

	/* 
		Vai criar uma variavel automatica que vai ser destruida
		dentro da scope da função
	*/
	auto_zombie();

	allocZombie = Zombie::newZombie("Allocated BraiiiiiiinnnnzzzzZ...");

	allocZombie->annouce();
	delete allocZombie;

	Zombie::randomChump("teste");
}
