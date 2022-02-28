#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentionalPardonForm.hpp"
#include <cstdlib>
#include "Intern.hpp"

int main(void)
{
	// {
	// 	// Grade is good to sign but not to execute, should throw error of exec
	// 	try 
	// 	{
	// 		system("clear");
	// 		std::cout << "\n";
	// 		Bureaucrat Ricardo("Ricardo", 20);
	// 		Form *a = new PresidentialPardonForm("Hero Ricardo");
	// 		a->beSigned(Ricardo);
	// 		a->signForm(Ricardo);
	// 		a->execute(Ricardo);
	// 		delete a;
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cout << e.what() << "\n";
	// 	}

	// 	// Grade is goos to execute, but didnt sign after
	// 	try 
	// 	{
	// 		Bureaucrat Ricardo("Ricardo", 5);
	// 		Form *a = new PresidentialPardonForm("Hero Ricardo");
	// 		a->beSigned(Ricardo);
	// 		a->execute(Ricardo);
	// 		delete a;
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cout << e.what() << "\n";
	// 	}

	// 	// Everyting is fine
	// 	try 
	// 	{
	// 		Bureaucrat Ricardo("Ricardo", 5);
	// 		Form *a = new PresidentialPardonForm("Hero Ricardo");
	// 		a->beSigned(Ricardo);
	// 		a->signForm(Ricardo);
	// 		a->execute(Ricardo);
	// 		delete a;
	// 		std::cout << "\n";
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cout << e.what() << "\n";
	// 	}

		
	// }
	Intern it;
	Form *fm;
	Bureaucrat Ricardo("Ricardo", 5);
	fm = it.makeForm("PresidentialPardonForm", "Valerio");
	fm->beSigned(Ricardo);
	fm->signForm(Ricardo);
	fm->execute(Ricardo);
	return (0);
}
