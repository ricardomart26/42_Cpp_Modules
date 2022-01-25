#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
	public:

		Zombie();
		Zombie(std::string name);
		~Zombie();

		void	annouce(void);
	
	private:

		std::string _name;

};

#endif
