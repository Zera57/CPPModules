#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotmyRequestForm : public Form
{
	private:
		void beExecuted() const;

	public:
		RobotmyRequestForm(std::string const & target);
		virtual ~RobotmyRequestForm();
		RobotmyRequestForm(const RobotmyRequestForm&);
		void operator=(const RobotmyRequestForm& op);
};

#endif