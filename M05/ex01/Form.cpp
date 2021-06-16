#include "Form.hpp"

Form::Form(const std::string & name, int sign_grade, int execute_grade) 
: _name(name), _sign_grade(validate(sign_grade)), _execute_grade(validate(execute_grade)) {
	this->_signed = false;
}

Form::~Form() {}

Form::Form(const Form& c)
: _name(c._name), _sign_grade(validate(c._sign_grade)), _execute_grade(validate(c._execute_grade)){
	_signed = c._signed;
}

void Form::operator=(const Form& op) {
	(void)op;
}

const std::string &Form::getName() const {
	return _name;
}

bool Form::getSigned() const {
	return _signed;
}

int Form::getSignGrade() const {
	return _sign_grade;
}

int Form::getExecGrade() const {
	return _execute_grade;
}


void Form::beSigned(Bureaucrat const & bureaucrat) {
	validate(bureaucrat.getGrade());
	if (_sign_grade < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	_signed = true;
}

int Form::validate(int grade) {
	if (grade <= 0)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
	return grade;
}

Form::GradeTooHighException::GradeTooHighException() throw() {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

const char* Form::GradeTooHighException::what() const throw() {
	return ("Grade is to high.");
}

Form::GradeTooLowException::GradeTooLowException() throw() {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Grade is to low.");
}

std::ostream	&operator<<(std::ostream & out, const Form & f) {
	out << f.getName() << " is ";
	f.getSigned() ? out << "signed" : out << "unsigned";
	out << std::endl;
	return out;
}