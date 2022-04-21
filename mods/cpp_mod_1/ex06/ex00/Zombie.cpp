#include "Zombie.hpp"

Zombie::Zombie() : _name("NoName")
{
	std::cout << "Created Zombie " << _name << "!\n";
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Created Zombie " << _name << "!\n";
}

Zombie::~Zombie()
{
	std::cout << "Destroyed Zombie " << _name << "!\n";
}

void	Zombie::annouce( void )
{ 
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}
