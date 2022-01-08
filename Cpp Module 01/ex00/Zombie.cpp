#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "Empty";
	std::cout << "Created Zombie " << _name << "!" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Created Zombie " << _name << "!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destroyed Zombie " << _name << "!" << std::endl;
}

void	Zombie::annouce(void)
{ std::cout << "Here comes the " << _name << std::endl; }
