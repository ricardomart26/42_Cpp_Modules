#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentionalPardonForm.hpp"
#include <cstdlib>
#include "Intern.hpp"

int main(void)
{
	{
		// Grade is good to sign but not to execute, should throw error of exec
		try 
		{
			system("clear");
			std::cout << "\n";
			Bureaucrat Ricardo("Ricardo", 20);
			Form *a = new PresidentialPardonForm("Hero Ricardo");
			a->beSigned(Ricardo);
			a->signForm(Ricardo);
			a->execute(Ricardo); // Erro nesta porque nao tem required grade
			delete a;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << "\n";
		}

		// Grade is good to execute, but didnt sign after
		try 
		{
			Bureaucrat Ricardo("Ricardo", 5);
			Form *a = new PresidentialPardonForm("Hero Ricardo");
			a->beSigned(Ricardo);
			a->execute(Ricardo);
			delete a;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << "\n";
		}

		// Everyting is fine
		try 
		{
			Bureaucrat Ricardo("Ricardo", 5);
			Form *a = new PresidentialPardonForm("Hero Ricardo");
			a->beSigned(Ricardo);
			a->signForm(Ricardo);
			a->execute(Ricardo);
			delete a;
			std::cout << "\n";
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << "\n";
		}

		// Everyting is fine
		try 
		{
			Bureaucrat Baunilha("Baunilha", 5);
			Form *a = new ShrubberyCreationForm("Hero Baunilha");
			a->beSigned(Baunilha);
			a->signForm(Baunilha);
			a->execute(Baunilha);
			delete a;
			std::cout << "\n";
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << "\n";
		}


		try 
		{
			Bureaucrat Baunilha("Baunilha", 5);
			Form *a = new RobotomyRequestForm("Hero Baunilha");
			a->beSigned(Baunilha);
			a->signForm(Baunilha);
			a->execute(Baunilha);
			Baunilha.executeForm(*a);
			delete a;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << "\n";
		}
		std::cout << "\n";

		
	}
	std::cout << "\n\n\n\n";
	{
		try {

			Intern it;
			Form *fm;
			Bureaucrat Ricardo("Ricardo", 5);

			std::cout << "\nPresidential test\n" << std::endl;
			fm = it.makeForm("presidential request", "Valerio");
			fm->beSigned(Ricardo);
			fm->signForm(Ricardo);
			fm->execute(Ricardo);
			delete fm;
			std::cout << "\nShrubbery test\n" << std::endl;
			fm = it.makeForm("shrubbery request", "Fred");
			fm->beSigned(Ricardo);
			fm->signForm(Ricardo);
			fm->execute(Ricardo);
			std::cout << "\nRobotomy test\n" << std::endl;
			fm = it.makeForm("robotomy request", "Goncalo");
			fm->beSigned(Ricardo);
			fm->signForm(Ricardo);
			fm->execute(Ricardo);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
