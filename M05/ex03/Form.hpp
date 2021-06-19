#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Form;

# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const _name;
		bool _signed;
		int const _sign_grade;
		int const _execute_grade;
		std::string const _target;
		int validate(int grade);
		virtual void beExecuted() const = 0;

	public:
		Form(const std::string &name, int sign_grade, int execute_grade, const std::string &target);
		virtual ~Form();
		Form(const Form &c);
		void operator=(const Form& op);

		const std::string & getName() const;
		bool getSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;
		const std::string & getTarget() const;
		void beSigned(Bureaucrat const & bureaucrat);
		void execute(Bureaucrat const & executor);

		
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

		class FormIsUnsignedException : public std::exception
		{
			public:
				FormIsUnsignedException () throw();
				virtual ~FormIsUnsignedException() throw();
				virtual const char* what() const throw();
		};
};

std::ostream    &operator<<(std::ostream & out, const Form & form);

#endif