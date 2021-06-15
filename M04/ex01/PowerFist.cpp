#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {

}

PowerFist::~PowerFist() {

}

PowerFist::PowerFist(const PowerFist& p) : AWeapon(p) {

}

void PowerFist::operator= (const PowerFist& s) {
	AWeapon::operator=(s);
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
