#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	public:

		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat &operator=(const Bureaucrat& obj);

		const std::string	getName();
		int					getGrade();
		void				GradeTooHighException();
		void				GradeTooLowException();
		void				IncreaseGrade();
		void				DecreaseGrade();

	private:

		int					_grade;
		const std::string	_name;

};


#endif
