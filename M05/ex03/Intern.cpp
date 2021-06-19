#include "Intern.hpp"

Intern::Intern() {

}

Intern::~Intern() {

}

Intern::Intern(const Intern &i) {
	(void)i;
}

void Intern::operator=(const Intern& op) {
	(void)op;
}

Form *makePresidentialPardonForm(std::string const &target) {
	return new PresidentialPardonForm(target);
}

Form *makeRobotmyRequestForm(std::string const &target) {
	return new RobotmyRequestForm(target);
}

Form *makeShrubberyCreationForm(std::string const &target) {
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeForm(std::string const &name, std::string const &target) {
	Form *(*_makeForm[3])(std::string const &) = {
		&makePresidentialPardonForm,
		&makeRobotmyRequestForm,
		&makeShrubberyCreationForm
	};
	std::string _forms[3] = {
		"PresidentialPardonForm",
		"RobotmyRequestForm",
		"ShrubberyCreationForm"
	};
	for (size_t i = 0; i < 3; i++)
	{
		if (_forms[i] == name)
		{
			std::cout << "Intern creates" << _forms[i] << std::endl;
			return _makeForm[i](target);
		}
	}
	return nullptr;
}