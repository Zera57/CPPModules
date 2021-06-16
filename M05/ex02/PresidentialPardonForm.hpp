#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		void beExecuted() const;

	public:
		PresidentialPardonForm(std::string const & target);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm&);
		void operator=(const PresidentialPardonForm& op);
};

#endif