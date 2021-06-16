#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
	_type = type;
	_xp = 0;
}

AMateria::~AMateria() {

}

AMateria::AMateria(const AMateria& c) {
	_type = c._type;
	_xp = c._xp;
}

void AMateria::operator=(const AMateria& op) {
	if (this == &op)
		return ; 
	this->_xp = op.getXP();
}

const std::string& AMateria::getType(void) const {
	return (this->_type);
}


unsigned int AMateria::getXP(void) const {
	return (this->_xp);
}


void AMateria::use(ICharacter& target) {
	(void)target;
	this->_xp += 10;
}