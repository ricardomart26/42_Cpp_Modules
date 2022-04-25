#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{

	public:

		Brain();
		Brain(const Brain &copy);
		~Brain();
		Brain &operator=(const Brain &obj);
		
		void	make_idea(const std::string &idea);
		const std::string	&get_idea(const int idx) const;
	
	private:

		size_t		_size;
		std::string ideas[100];

};

#endif
