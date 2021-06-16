#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {

}

Ice::~Ice() {

}

Ice::Ice(const Ice& copy) : AMateria(copy) {

}

void Ice::operator=(const Ice& op) {
	if (this == &op)
		return ;
	AMateria::operator=(op);
	return ;
}

AMateria* Ice::clone(void) const {
	return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}