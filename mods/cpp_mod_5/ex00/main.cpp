#include "Bureaucrat.hpp"

int main(void)
{
	{
		try
		{
			Bureaucrat Ricardo("Ricardo0", 1);
			std::cout << Ricardo;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		try
		{
			Bureaucrat Ricardo("Ricardo1", 250);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
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
		std::cout << std::endl;
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
		std::cout << std::endl;
	}
		
	{
		try
		{		
			Bureaucrat Ricardo("Ricardo3", 1);
			Bureaucrat Copy(Ricardo);
			std::cout << Copy;
			Copy.DecreaseGrade();
			std::cout << "My grade is: " << Copy.getGrade() << '\n';
			Copy.DecreaseGrade();
			std::cout << "My grade is: " << Copy.getGrade() << '\n';
			for (; Copy.getGrade() > -1; Copy.IncreaseGrade())
				std::cout << "My grade is: " << Copy.getGrade() << '\n';
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
	}

		
	{
		try
		{		
			Bureaucrat Ricardo("Ricardo3", 1);
			Bureaucrat Operator("Operador", 23);
			std::cout << "Before: ";
			std::cout << Operator;
			Operator = Ricardo;
			std::cout << "After: ";
			std::cout << Operator;
			Operator.DecreaseGrade();
			std::cout << "My grade is: " << Operator.getGrade() << '\n';
			Operator.DecreaseGrade();
			std::cout << "My grade is: " << Operator.getGrade() << '\n';
			for (; Operator.getGrade() > -1; Operator.IncreaseGrade())
				std::cout << "My grade is: " << Operator.getGrade() << '\n';
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
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
