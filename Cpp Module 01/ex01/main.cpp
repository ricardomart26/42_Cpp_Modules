#include "Zombie.hpp"

int main(void)
{
	Zombie *horde = Zombie::zombieHorde(10, "Ricardo");

	for (int i = 0; i < 10; i++)
		horde[i].annouce();
	delete[] horde;
}
