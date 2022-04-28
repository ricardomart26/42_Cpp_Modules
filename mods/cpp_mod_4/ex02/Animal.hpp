#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:

		virtual ~Animal();

		virtual void		makeSound(void) const = 0;
		std::string	getType(void) const;
		void		setType(std::string);
		virtual	void	set_idea(const std::string &idea) = 0;
		virtual void	print_idea(const int idx) const = 0;
	
	protected:

		std::string _type;

};

#endif
