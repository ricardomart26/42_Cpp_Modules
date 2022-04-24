#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	// {
	// 	try
	// 	{
	// 		Bureaucrat Ricardo("Ricardo0", 1);
	// 		std::cout << Ricardo;
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// 	std::cout << std::endl;
	// 	try
	// 	{
	// 		Bureaucrat Ricardo("Ricardo1", 250);
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// 	std::cout << std::endl;
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
	// 	std::cout << std::endl;
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
	// 	std::cout << std::endl;
	// }
		
	// {
	// 	try
	// 	{		
	// 		Bureaucrat Ricardo("Ricardo3", 1);
	// 		Bureaucrat Copy(Ricardo);
	// 		std::cout << Copy;
	// 		Copy.DecreaseGrade();
	// 		std::cout << "My grade is: " << Copy.getGrade() << '\n';
	// 		Copy.DecreaseGrade();
	// 		std::cout << "My grade is: " << Copy.getGrade() << '\n';
	// 		for (; Copy.getGrade() > -1; Copy.IncreaseGrade())
	// 			std::cout << "My grade is: " << Copy.getGrade() << '\n';
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// 	std::cout << std::endl;
	// }

		
	// {
	// 	try
	// 	{		
	// 		Bureaucrat Ricardo("Ricardo3", 1);
	// 		Bureaucrat Operator("Operador", 23);
	// 		std::cout << "Before: ";
	// 		std::cout << Operator;
	// 		Operator = Ricardo;
	// 		std::cout << "After: ";
	// 		std::cout << Operator;
	// 		Operator.DecreaseGrade();
	// 		std::cout << "My grade is: " << Operator.getGrade() << '\n';
	// 		Operator.DecreaseGrade();
	// 		std::cout << "My grade is: " << Operator.getGrade() << '\n';
	// 		for (; Operator.getGrade() > -1; Operator.IncreaseGrade())
	// 			std::cout << "My grade is: " << Operator.getGrade() << '\n';
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// 	std::cout << std::endl;
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
		std::cout << std::endl;
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
		std::cout << std::endl;
		try	
		{
			Form	a("1992", 10, 5);
			Form	abc("abc", 120, 80);
			Bureaucrat	Ricardo("Ricardo", 100);
			Bureaucrat	Milfolhas("Milfolhas", 10);
			Bureaucrat	Pastel("Pastel de nata", 9);

			a.beSigned(Milfolhas);
			a.signForm(Ricardo);
			// a.beSigned(Ricardo);
			
			a.signForm(Pastel);
			a.beSigned(Pastel);
			a.signForm(Pastel);

			abc.beSigned(Ricardo);
			abc.signForm(Ricardo);
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << "\n";
		}
		std::cout << std::endl;
		try	
		{
			Form	a("1992", 10, 5);
			Form	a_copy(a);
			Bureaucrat	Pastel("Pastel de nata", 9);
			Bureaucrat	Copy(Pastel);
			a_copy.beSigned(Copy);
			a_copy.signForm(Copy);
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << "\n";
		}
		std::cout << std::endl;
		try	
		{
			Form	a("1992", 10, 5);
			Form	a_op("Random one", 100, 50);
			Bureaucrat	Pastel("Pastel de nata", 9);
			Bureaucrat	Milfolhas_op("1000folhas", 23);

			std::cout << "Before: ";
			std::cout << Milfolhas_op;
			Milfolhas_op = Pastel;
			std::cout << "After: ";
			std::cout << Milfolhas_op;

			std::cout << "Before: ";
			std::cout << a_op;
			a_op = a;
			std::cout << "After: ";
			std::cout << a_op;

			a_op.beSigned(Milfolhas_op);
			a_op.signForm(Milfolhas_op);


		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << "\n";
		}


	}
	return (0);
}
