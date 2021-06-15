#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout <<  "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& e) : Enemy(e) {
}

void RadScorpion::operator=(const RadScorpion& e) {
	Enemy::operator=(e);
}

void RadScorpion::takeDamage(int damage) {
	Enemy::takeDamage(damage);
}
