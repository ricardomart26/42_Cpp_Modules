#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define SIZE 6

int main()
{
	{
		Animal	*animalPtr[SIZE];
		int		i;

		std::cout << '\n';
		i = -1;
		while (++i < SIZE)
		{
			if (i == SIZE/2)
				std::cout << '\n';
			if (i < SIZE/2)
				animalPtr[i] = new Dog();
			else
				animalPtr[i] = new Cat();
			
		}

		std::cout << '\n';

		i = -1;
		while (++i < SIZE)
			std::cout << i << "º The type is: " << animalPtr[i]->getType() << std::endl;

		std::cout << '\n';

		i = -1;
		while (++i < SIZE)
		{
			if (i == SIZE/2)
				std::cout << '\n';
			delete animalPtr[i];
		}
		std::cout << '\n';
		
		{
			/**
			 * A copy of a Cat or Dog must be "deep".
			 * Your test should show that copies are deep!
			 */
			Cat cat;
			std::cout << '\n';
			Cat copy(cat);
			std::cout << '\n';
	
		}

	}
	

}
