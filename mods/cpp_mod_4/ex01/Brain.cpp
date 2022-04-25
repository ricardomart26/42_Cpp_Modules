#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "-- Brain class: constructed! --" << std::endl;
	_size = 0;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "-- Brain class: copied! --" << std::endl;
	_size = copy._size;
	for (size_t i = 0; i < _size; i++)
		ideas[i] = copy.ideas[i];
}

Brain::~Brain()
{
	std::cout << "-- Brain class: Deconstructed! --" << std::endl;
}

Brain & Brain::operator=(const Brain &obj)
{
	std::cout << "-- Brain class: Assignment operator! --" << std::endl;
	_size = obj._size;
	for (size_t i = 0; i < _size; i++)
		ideas[i] = obj.ideas[i];
	return (*this);
}

void	Brain::make_idea(const std::string &idea)
{
	ideas[_size++ % 100] = idea;
}

const std::string	&Brain::get_idea(const int idx) const
{
	return (ideas[idx]);
}

