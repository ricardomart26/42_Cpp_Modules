#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	// {
	// 	try
	// 	{
	// 		Bureaucrat Ricardo("Ricardo0", 1);
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// 	try
	// 	{
	// 		Bureaucrat Ricardo("Ricardo1", 250);
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// }

	// {
	// 	try
	// 	{		
	// 		Bureaucrat Ricardo("Ricardo2", -24);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// }
	
	// {
	// 	try
	// 	{		
	// 		Bureaucrat Ricardo("Ricardo3", 1);
	// 		std::cout << Ricardo;
	// 		Ricardo.DecreaseGrade();
	// 		std::cout << "My grade is: " << Ricardo.getGrade() << '\n';
	// 		Ricardo.DecreaseGrade();
	// 		std::cout << "My grade is: " << Ricardo.getGrade() << '\n';
	// 		for (; Ricardo.getGrade() > -1; Ricardo.IncreaseGrade())
	// 			std::cout << "My grade is: " << Ricardo.getGrade() << '\n';
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// }

	// {
	// 	try
	// 	{		
	// 		Bureaucrat Ricardo("Ricardo4", 150);
	// 		Ricardo.DecreaseGrade();
	// 		std::cout << "My grade is: " << Ricardo.getGrade() << '\n';
	// 		Ricardo.DecreaseGrade();
	// 		std::cout << "My grade is: " << Ricardo.getGrade() << '\n';
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// }


	{
		try	
		{
			Form	a("1992", 50, 20);
			Bureaucrat	Ricardo("Ricardo", 20);
			// Bureaucrat	Ricardo("Ricardo", 60);

			a.beSigned(Ricardo);
			a.signForm(Ricardo);
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << "\n";
		}

		try	
		{
			Form	a("1992", -2, 30);
			Bureaucrat	Ricardo("Ricardo", 100);
			// Bureaucrat	Ricardo("Ricardo", 60);

			a.beSigned(Ricardo);
			a.signForm(Ricardo);
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << "\n";
		}


	}
	return (0);
}
