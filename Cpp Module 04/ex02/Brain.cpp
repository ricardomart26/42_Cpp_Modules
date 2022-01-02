#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain class constructed!" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain class copied!" << std::endl;
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain class Deconstructed!" << std::endl;
}

Brain & Brain::operator=(const Brain &obj)
{
	(void)obj;
	std::cout << "Brain class operator!" << std::endl;
	return (*this);
}
