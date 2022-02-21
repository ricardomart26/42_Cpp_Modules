#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cmath>


Base	*generate(void)
{
	Base *var;

	if (rand() % 3 == 0)
		var = new A();
	else if (rand() % 3 == 1)
		var = new B();
	else
		var = new C();

	return (var);
}

int main(void)
{

}
