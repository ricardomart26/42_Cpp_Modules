#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat Ricardo("Ricardo", 1);
	Bureaucrat Vanessa("Vanessa", 250);
	
	std::cout << "Saiu?\n";
	Ricardo.DecreaseGrade();
	std::cout << "My grade is: " << Ricardo.getGrade() << '\n';
	Ricardo.DecreaseGrade();
	std::cout << "My grade is: " << Ricardo.getGrade() << '\n';
	return (0);
}
