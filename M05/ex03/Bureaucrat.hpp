#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat;

#include "Form.hpp"

class Bureaucrat {

	private:
		std::string const _name;
		int _grade;

	public:
		Bureaucrat(const std::string & name, int grade);
		virtual ~Bureaucrat();
		Bureaucrat(const Bureaucrat&);
		void operator=(const Bureaucrat& op);

		const std::string &getName() const;
		int getGrade() const;
		void upGrade();
		void downGrade();
		void signForm(Form &form);
		void executeForm(Form &form);

		class GradeTooHighException : public std::exception
			{
				public:
					GradeTooHighException () throw();
					virtual ~GradeTooHighException() throw();
					virtual const char* what() const throw();
			};

			class GradeTooLowException : public std::exception
			{
				public:
					GradeTooLowException () throw();
					virtual ~GradeTooLowException() throw();
					virtual const char* what() const throw();
			};
};

std::ostream &operator<<(std::ostream & out, const Bureaucrat & bureaucrat);

# endif