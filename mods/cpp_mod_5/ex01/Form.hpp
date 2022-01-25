#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{

	public:
		Form();
		Form(std::string name, int requiredGrade, int executionGrade);
		~Form();
		Form(const Form &copy);
		Form &operator=(const Form &rhs);

		void				signForm(Bureaucrat &b);
		const std::string	&getName();
		void				beSigned(Bureaucrat &b);
		int					getGradeRequired();
		int					getGradeExecute();
		bool				getSigned();


		class GradeTooHighException: public std::exception
		{
			const char	*what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			const char	*what() const throw();
		};

	private:
		const std::string	_nameForm;
		bool				_signed;
		const int			_gradeRequired;
		const int			_gradeExecute;
};

void	operator<<(std::ostream &os, Form &rhs);

#endif
