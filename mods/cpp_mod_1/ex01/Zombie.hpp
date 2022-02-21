#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

	public:
		Zombie();
		Zombie( std::string name );
		~Zombie();

		void	annouce( void );
		void	set_name( const std::string& name );
		Zombie* zombieHorde( int N, std::string name );

	private:
		std::string	_name;

};


#endif
