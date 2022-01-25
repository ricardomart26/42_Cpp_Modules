#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:

		Cat();
		Cat(const Cat &copy);
		~Cat();
		Cat &operator=(const Cat &obj);

	private:

		Brain *_my_brain;
};

#endif
