#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
	public:

		Zombie();
		~Zombie();

		void	annouce(void);
		void	set_name(std::string name);
		static	void auto_zombie(void);
		static	void randomChump(std::string name);
		static	Zombie* newZombie( std::string name );
	private:
		std::string p_name;

};

#endif
