#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		void beExecuted() const;
	public:
		ShrubberyCreationForm(std::string const & target);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm&);
		void operator=(const ShrubberyCreationForm& op);
};

#endif