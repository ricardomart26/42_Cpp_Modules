#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Created Zombie " << p_name << "!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destroyed Zombie " << p_name << "!" << std::endl;
}

void	Zombie::set_name(std::string name)
{ p_name = name; }

void	Zombie::annouce(void)
{ std::cout << "Here comes the " << p_name << std::endl; }

void	auto_zombie(void)
{
	Zombie zombie;

	zombie.set_name("BraiiiiinnnzzZ...");
	zombie.annouce();
}
