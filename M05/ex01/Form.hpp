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
		int validate(int grade);

	public:
		Form(const std::string & name, int sign_grade, int execute_grade);
		virtual ~Form();
		Form(const Form &c);
		void operator=(const Form& op);

		const std::string & getName() const;
		bool getSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;
		void beSigned(Bureaucrat const & bureaucrat);

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

std::ostream    &operator<<(std::ostream & out, const Form & form);

#endif