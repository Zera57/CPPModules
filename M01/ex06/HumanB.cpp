#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	_name = name;
}

void		HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}

void		HumanB::attack() {
	std::cout << _name << " attac's with " << _weapon->getType() << std::endl;
}