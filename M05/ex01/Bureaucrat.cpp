#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string & name, int grade) : _name(name) {
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat& c) : _name(c._name){
	if (c.getGrade() <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (c.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = c.getGrade();
}

void Bureaucrat::operator=(const Bureaucrat& op) {
	if (this == &op)
		return ;
	this->_grade = op.getGrade();
	return ;
}

const std::string &Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}


void Bureaucrat::upGrade(void) {
	if (this->_grade - 1 <= 0)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
}

void Bureaucrat::downGrade(void) {
	if (this->_grade + 1 >= 151)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

void Bureaucrat::signForm(Form &form) {
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
		return ;
	}
	std::cout << _name << " signs " << form.getName() << std::endl;

}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is to high.");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is to low.");
}

std::ostream	&operator<<(std::ostream & out, const Bureaucrat & bureaucrat) {
	return out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
}