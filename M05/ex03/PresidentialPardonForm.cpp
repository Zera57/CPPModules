#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
: Form("PresidentialPardonForm", 25, 5, target) {

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
: Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade(), copy.getTarget()) {

}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::operator=(const PresidentialPardonForm& op) {
	if (this == &op)
		return ; 
	Form::operator=(op);
	return ;
}

void PresidentialPardonForm::beExecuted() const {
	std::cout << this->getTarget() << " was pardonned by Zafod Beeblebrox." << std::endl;
}