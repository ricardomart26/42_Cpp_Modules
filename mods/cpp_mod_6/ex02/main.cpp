#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base	*generate(void)
{
	std::string arr[3];

	arr[0] = "I'm A class\n";
	arr[1] = "I'm B class\n";
	arr[2] = "I'm C class\n";
	srand(time(NULL));
	int random = rand() % 3;

	std::cout << arr[random];
	if (random == 0)
		return new A;
	else if (random == 1)
		return new B;
	else
		return new C;
}

void identify(Base* p)
{
	std::cout << "Pointer one\n";
	if (dynamic_cast<A*>(p))
		std::cout << "I'm A class\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "I'm B class\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "I'm C class\n";
	else
		std::cout << "I'm Base class\n";
}

void identify(Base& p)
{
	std::cout << "Ref one\n";
	try {

		Base &r = dynamic_cast<A&>(p);
		std::cout << "I'm A class\n";
		(void)r;
		return ;
	} catch (const std::exception &e) {

	}
	try {
		Base &r = dynamic_cast<B&>(p);
		std::cout << "I'm B class\n";
		(void)r;
		return ;
	} catch (const std::exception &e) {
		
	}
	try {
		Base &r = dynamic_cast<C&>(p);
		std::cout << "I'm C class\n";
		(void)r;
		return ;
	} catch (const std::exception &e) {

	}
	std::cout << "I'm Base class\n";

}

int main(void)
{
	Base *gen = generate();
	std::cout << "\n";


	identify(gen);
	std::cout << "\n";

	identify(new Base);
	std::cout << "\n";

	Base &ref_gen = *gen;

	identify(ref_gen);
	std::cout << "\n";

	delete gen;
	return (0);
}
