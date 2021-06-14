#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
	_name = name;
	std::cout  << "Zog zog." << std::endl;
}

Peon::~Peon() {
	std::cout  << "Bleuark..." << std::endl;
}

std::string Peon::GetName() const {
	return _name;
}

std::ostream & operator<< (std::ostream &out, Peon const& p) {
	return out << "I'm " << p.GetName() << " and I like otters!" << std::endl;
}

void Peon::getPolymorphed() const {
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}