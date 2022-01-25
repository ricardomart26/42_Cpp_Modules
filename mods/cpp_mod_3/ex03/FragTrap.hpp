#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap
{
	public:

		FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap(std::string name);
		~FragTrap();

		void	highFivesGuys(void);

};

#endif
