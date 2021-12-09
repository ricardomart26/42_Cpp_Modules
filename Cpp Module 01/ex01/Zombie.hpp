#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
	public:

		Zombie();
		~Zombie();

		void	annouce(void);
		void	set_name(std::string name);
		static	Zombie* zombieHorde( int N, std::string name);
	private:
		std::string p_name;

};


#endif
