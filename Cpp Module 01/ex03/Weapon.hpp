#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string t)
			: p_type(t)
		{

		}
		const std::string	&getType()
		{
			return p_type;
		}
		void	setType(std::string type)
		{
			p_type = type;
		}

	private:
		std::string p_type;
};

#endif
