#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
	public:

		Zombie(std::string zombie_name)
			: name(zombie_name)
		{
			std::cout << "Created " << name << " Zombie!" << std::endl; 
		}

		~Zombie()
		{
			std::cout << "Destroyed " << name << std::endl; 
		}

		void	annouce()
		{
			std::cout << "My name is " << name  << std::endl; 
		}
	private:
		std::string name;

};

void	auto_zombie(void);
Zombie* zombieHorde( int N, std::string name );

#endif
