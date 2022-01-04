#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	{	
		const Animal* meta = new Animal();
		const Animal* dogPtr = new Dog();
		const Animal* catPtr = new Cat();

		/**
		 * When a pointer of base class (Animal) points to a Derived
		 * Class (Dog/Cat), we can't use the methods inside of the 
		 * Derived Class, because the pointer type is the base class
		 */

		std::cout << "type of dogPtr: " << dogPtr->getType() << " " << std::endl;
		std::cout << "type of catPtr: " << catPtr->getType() << " " << std::endl;

		dogPtr->makeSound(); // will output the dog sound!
		catPtr->makeSound(); // will output the cat sound!

		meta->makeSound();

		delete meta;

		/**
		 * To delete dogPtr or catPtr, we have to add a virtual deconstrutor in
		 * Animal class, since dogPtr is a Base class pointing to a derived object
		 * deleting them has undefined behaviour.
		 * When we call the destructor of the base class pointer, we only call the 
		 * base destructor (witch results in leaks), because we only can acess the
		 * methods of the base class.
		 */
		delete dogPtr;
		delete catPtr;
	}
	{
		WrongAnimal* WrongCatPtr = new WrongCat();

		std::cout << WrongCatPtr->getType() << " " << std::endl;
		WrongCatPtr->makeSound();

		delete WrongCatPtr;
	}
}
