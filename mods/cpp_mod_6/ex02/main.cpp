#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cmath>

Base	*generate(void)
{
	Base *var;

	srand(time(NULL));
	if (rand() % 3 == 0)
		return new A;
	else if (rand() % 3 == 1)
		return new B;
	else
		return new C;
}

int main(void)
{

}
