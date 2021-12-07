#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
	public:

		Zombie();
		~Zombie();

		void	annouce(void);
		void	set_name(std::string name);
		void	randomChump(std::string name);
		Zombie* newZombie( std::string name );
	private:
		std::string p_name;

};

void	auto_zombie(void);



#endif
