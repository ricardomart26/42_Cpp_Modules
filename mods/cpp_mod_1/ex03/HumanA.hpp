#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{

	public:
		HumanA();
		HumanA( const std::string& name, Weapon& weapon );

		void	atack( void );

	private:
		std::string	_name;
		Weapon&		_weapon;

};

#endif
