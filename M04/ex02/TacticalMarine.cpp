#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine&) {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

void TacticalMarine::operator=(const TacticalMarine& op) {
	(void)op;
}

ISpaceMarine* TacticalMarine::clone() const {
	return (new TacticalMarine());
}

void TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const {
	std::cout <<  "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with a chainsword *" << std::endl;
}