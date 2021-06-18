#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotmyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
	Intern intern;
	Bureaucrat b = Bureaucrat("Bobby", 1);
	Form *f1 = intern.makeForm("PresidentialPardonForm", "Azat");
	Form *f2 = intern.makeForm("RobotmyRequestForm", "Robotani");
	Form *f3 = intern.makeForm("ShrubberyCreationForm", "Tree");

	std::cout << b;
	std::cout << *f1 << *f2 << *f3 << std::endl;

	b.signForm(*f1);
	b.signForm(*f2);
	b.signForm(*f3);

	std::cout << std::endl;
	
	try
	{
		b.executeForm(*f1);
		b.executeForm(*f2);
		b.executeForm(*f3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}