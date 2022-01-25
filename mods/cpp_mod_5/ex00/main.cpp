#include "Bureaucrat.hpp"

int main(void)
{
	{
		try
		{
			Bureaucrat Ricardo("Ricardo0", 1);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			Bureaucrat Ricardo("Ricardo1", 250);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		try
		{		
			Bureaucrat Ricardo("Ricardo2", -24);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	{
		try
		{		
			Bureaucrat Ricardo("Ricardo3", 1);
			std::cout << Ricardo;
			Ricardo.DecreaseGrade();
			std::cout << "My grade is: " << Ricardo.getGrade() << '\n';
			Ricardo.DecreaseGrade();
			std::cout << "My grade is: " << Ricardo.getGrade() << '\n';
			for (; Ricardo.getGrade() > -1; Ricardo.IncreaseGrade())
				std::cout << "My grade is: " << Ricardo.getGrade() << '\n';
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		try
		{		
			Bureaucrat Ricardo("Ricardo4", 150);
			Ricardo.DecreaseGrade();
			std::cout << "My grade is: " << Ricardo.getGrade() << '\n';
			Ricardo.DecreaseGrade();
			std::cout << "My grade is: " << Ricardo.getGrade() << '\n';
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	return (0);
}
