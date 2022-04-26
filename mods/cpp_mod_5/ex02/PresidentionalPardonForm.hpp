#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

/**
 * @sign: 25
 * @exec: 5
 * Diz que o <target> foi perdoado por Zafod Beeblebrox
 */
class PresidentialPardonForm: public Form
{

	public:

		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm& rhs);

		void	execute(const Bureaucrat &exec) const;

	private:
		std::string _target;

};

#endif
