#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) {
	_name = name;
	_title = title;
	std::cout  << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout  << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& s) {
	this->operator=(s);
}

void Sorcerer::operator = (const Sorcerer& s) {
	_name = s._name;
	_title = s._title;
}

std::string Sorcerer::GetName() const {
	return _name;
}

std::string Sorcerer::GetTitle() const {
	return _title;
}

std::ostream & operator<< (std::ostream &out, Sorcerer const& s) {
	return out << "I am " << s.GetName() << ", " << s.GetTitle() << ", and I like ponies!" << std::endl;
}

void Sorcerer::polymorph(Victim const & v) const {
	v.getPolymorphed();
}
