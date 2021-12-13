#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string t)
			: _type(t) {}
		~Weapon() {}

		const std::string&	getType();
		void				setType(const std::string type);

	private:
		std::string _type;
};

#endif
