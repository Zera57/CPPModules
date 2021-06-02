#include "Victim.hpp"

Victim::Victim(std::string name) {
	std::cout  << "Some random victim called " << _name << " just appeared!" << std::endl;
	_name = name;
}

Victim::~Victim() {
	std::cout  << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim& v) {
	this->operator=(v);
}

void Victim::operator = (const Victim& v) {
	_name = v._name;
}

std::ostream & Victim::operator << (std::ostream &out) {
	return out << "I'm" << _name << " and I like otters!" << std::endl;
}

void Victim::getPolymorphed() const {
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}