#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {

}

Cure::~Cure() {

}

Cure::Cure(const Cure& copy) : AMateria(copy) {

}

void Cure::operator=(const Cure& op) {
	if (this == &op)
		return ;
	AMateria::operator=(op);
	return ;
}

AMateria* Cure::clone(void) const {
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}