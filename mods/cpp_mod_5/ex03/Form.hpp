#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{

	public:
		Form();
		Form(std::string name, int reqGrade, int execGrade);
		virtual ~Form();
		Form(const Form &copy);
		Form &operator=(const Form &rhs);

		/**
		 * @description: if _signed(member var) is true sign
		 * Form(_nameForm) 
		 */
		void		signForm(Bureaucrat &b);
		
		/**
		 * @description: if _grade(member var) of bureaucrat is
		 * Better or equal than the Required grade, _signed is true
		 */
		void		beSigned(Bureaucrat &b);
		const std::string	&getNameForm() const;
		bool				getCanSign() const;
		void				setCanSign(bool goodGrade);
		bool				getIsSigned() const;
		void				setIsSigned(bool goodGrade);
		int					getGradeRequired() const;
		int					getGradeExecute() const;
		
		virtual void		execute(const Bureaucrat &exec) const = 0;

		class GradeTooHighException: public std::exception
		{
			const char	*what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			const char	*what() const throw();
		};
		class CannotExecuteGrade: public std::exception
		{
			const char	*what() const throw();
		};
		class CannotExecuteSign: public std::exception
		{
			const char	*what() const throw();
		};

	private:

		const std::string	_nameForm;
		bool				_canSign;
		bool				_isSigned;
		const int			_gradeRequired;
		const int			_gradeExecute;

};

void	operator<<(std::ostream &os, const Form &rhs);

#endif
