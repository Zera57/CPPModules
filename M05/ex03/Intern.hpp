#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "iostream"
#include "map"
#include "PresidentialPardonForm.hpp"
#include "RobotmyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &i);
		void operator=(const Intern& op);

		Form *makeForm(std::string const &name, std::string const &target);
};

#endif