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

		std::cout << '\n';
		for (int i = 0; i < SIZE; i++)
		{
			if (i == SIZE/2)
				std::cout << '\n';
			if (i < SIZE/2)
				animalPtr[i] = new Dog();
			else
				animalPtr[i] = new Cat();
		}

		for (int i = 0; i < SIZE; i++)
		{
			if (animalPtr[i]->getType().compare("Dog"))
				animalPtr[i]->makeSound();
			else if (animalPtr[i]->getType().compare("Cat"))
				animalPtr[i]->makeSound();
			
		}

		std::cout << '\n';
		std::string dog_ideas[5] = {
			"I will poop in the floor",
			"NOOOOOO, I DONT WANT TO TAKE A SHOWER",
			"Yum, smells good",
			"Should I pee, or should I wait first for them to clean?",
			"That pillow looks sexy, how you doing?"
		};


		std::string cat_ideas[5] = {
			"Something on the table? I think it's better in the ground",
			"He is not moving for a while, should I eat him now, or wait a minute?",
			"Don't touch me, or I will stab you",
			"I love pooping in the sand, it makes my but itch",
			"How high can I jump?"
		};

		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (!animalPtr[i]->getType().compare("Dog"))
					animalPtr[i]->set_idea(dog_ideas[j]);
				else if (!animalPtr[i]->getType().compare("Cat"))
					animalPtr[i]->set_idea(cat_ideas[j]);
			}
		}

		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < 5; j++)
				animalPtr[i]->print_idea(j);
			
			std::cout << std::endl;
		}

		std::cout << '\n';

		for (int i = 0; i < SIZE; i++)
			std::cout << i << "º The type is: " << animalPtr[i]->getType() << std::endl;

		std::cout << '\n';

		for (int i = 0; i < SIZE; i++)
		{
			if (i == SIZE/2)
				std::cout << '\n';
			delete animalPtr[i];
		}
		std::cout << '\n';
	}
	
	{
		/**
		 * A copy of a Cat or Dog must be "deep".
		 * Your test should show that copies are deep!
		 */
		Cat cat;
		std::cout << '\n';
		
		Dog dog;
		std::cout << '\n';
		Dog copy_dog(dog);
		std::cout << '\n';
		
		std::string dog_ideas[5] = {
			"I will poop in the floor",
			"NOOOOOO, I DONT WANT TO TAKE A SHOWER",
			"Yum, smells good",
			"Should I pee, or should I wait first for them to clean?",
			"That pillow looks sexy, how you doing?"
		};


		std::string cat_ideas[5] = {
			"Something on the table? I think it's better in the ground",
			"He is not moving for a while, should I eat him now, or wait a minute?",
			"Don't touch me, or I will stab you",
			"I love pooping in the sand, it makes my but itch",
			"How high can I jump?"
		};

		cat.print_idea(0);
		cat.print_idea(2);

        cat.set_idea(cat_ideas[3]);
		cat.print_idea(0);

		Cat copy_cat(cat);
		std::cout << '\n';

		copy_cat.print_idea(0);

		// cat.~Cat();

		// copy_cat.print_idea(0);

	}
}
