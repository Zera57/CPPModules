#include "Victim.hpp"

Victim::Victim(std::string name) {
	_name = name;
	std::cout  << "Some random victim called " << _name << " just appeared!" << std::endl;
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

std::string Victim::GetName() const {
	return _name;
}

std::ostream & operator << (std::ostream &out, Victim const& v) {
	return out << "I'm " << v.GetName() << " and I like otters!" << std::endl;
}

void Victim::getPolymorphed() const {
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}