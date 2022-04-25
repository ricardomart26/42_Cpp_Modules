
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void	wrong_animal_tests()
{
 	// Tests without adding virtual, function will depend on
	std::cout << std::endl;
	std::cout << "Wrong Animal tests" << std::endl;
	std::cout << std::endl;

	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();

	std::cout << std::endl;
	std::cout << "wrongmeta type is " << wrongmeta->getType() << " " << std::endl;
	std::cout << "wrongmeta sound is:" << std::endl;
	wrongmeta->makeSound();
	std::cout << std::endl;
	std::cout << "wrongcat type is " << wrongcat->getType() << " " << std::endl;
	std::cout << "wrongcat sound is:" << std::endl;
	wrongcat->makeSound();
	std::cout << "If we cast the Wrong animal pointer to wrong cat:" << std::endl;
	((const WrongCat *)wrongcat)->makeSound();

	std::cout << std::endl;
	delete wrongcat;
	delete wrongmeta;
}

void assignment_tests()
{

	std::cout << std::endl;
	std::cout << "Assignment tests" << std::endl;
	std::cout << std::endl;

	Animal* bobi1 = new Dog();
	Animal* bobi2 = new Dog();
	Animal* tom1 = new Cat();
	Animal* tom2 = new Cat();
	Animal* rand1 = new Animal();

	*bobi1 = *tom1;
	*bobi1 = *bobi2;
	*tom1 = *tom2;
	*rand1 = *bobi1;
	*rand1 = *tom1;

	bobi1->makeSound();
	std::cout << "bobi1 is " << bobi1->getType() << std::endl;
	tom1->makeSound();
	std::cout << "tom1 is " << tom1->getType() << std::endl;
	rand1->makeSound();
	std::cout << "rand1 is " << rand1->getType() << std::endl;

	delete bobi1;
	delete tom1;
	delete rand1;
	delete bobi2;
	delete tom2;

}

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	
	wrong_animal_tests();
	assignment_tests();
	return 0;
}
