#include "RobotmyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm(std::string const & target)
: Form("RobotmyRequestForm", 72, 45, target) {
	srand(time(0));
}

RobotmyRequestForm::~RobotmyRequestForm() {}

RobotmyRequestForm::RobotmyRequestForm(const RobotmyRequestForm& copy)
: Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade(), copy.getTarget()) {
	srand(time(0));
}

void RobotmyRequestForm::operator=(const RobotmyRequestForm& op)
{
	if (this == &op)
		return ; 
	Form::operator=(op);
	return ;
}

void RobotmyRequestForm::beExecuted() const
{
	std::cout << "Dddrrrrriiiiilllliiiiiinnnnggg noises: Brrrrr.........." << std::endl;
	if(((rand() % 2)) == 1)
		std::cout << this->getTarget() << " has been robotomized!" << std::endl;
	else
		std::cout << "The robotization failed" << std::endl;
}