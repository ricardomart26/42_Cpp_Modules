#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"
#include <fstream>

/**
 * @sign: 145
 * @exec: 137 
 * Cria um ficheiro chamado <target>_shrebbery e escrever ASCII
 * trees dentro, na diretoria atual 
 */
class ShrubberyCreationForm: public Form
{

	public:

		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

		void	execute(const Bureaucrat &executor) const;
		void	AsciiTree() const;

	private:

		std::string _target;
};

#endif
