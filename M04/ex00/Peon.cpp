#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
	std::cout  << "Some random Peon called " << _name << " just appeared!" << std::endl;
	_name = name;
}

Peon::~Peon() {
	std::cout  << "Peon " << _name << " just died for no apparent reason!" << std::endl;
}

std::ostream & Peon::operator << (std::ostream &out) {
	return out << "I'm" << _name << " and I like otters!" << std::endl;
}

void Peon::getPolymorphed() const {
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}