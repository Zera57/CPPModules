#include "Character.hpp"

Character::Character(std::string const & name) {
	this->name = name;
	this->ap = 40;
	weapon = NULL;
}

Character::~Character() {
}

Character::Character(const Character& e) {
	*this = e;
}

void Character::operator=(const Character& e) {
	this->name = e.name;
	this->ap = e.ap;
	this->weapon = e.weapon;
}

std::string const &Character::getName(void) const {
	return name;
}

int Character::getAP() const {
	return this->ap;
}

AWeapon *Character::getWeapon(void) const {
	return this->weapon;
}

void Character::recoverAP() {
	ap += 10;
	if (ap > 40)
		ap = 40;
}

void Character::equip(AWeapon *weapon) {
	this->weapon = weapon;
}

void Character::attack(Enemy *enemy) {
	if (weapon != NULL && ap - weapon->getAPCost() < 0)
	{
		if (ap -= weapon->getAPCost() < 0)
			ap = 0;
		std::cout << name << " attacks " << enemy->getType() << " with a " << weapon->getName() << std::endl;
		weapon->attack();
		enemy->takeDamage(weapon->getDamage());
		if (enemy->getHP() == 0)
			delete(enemy);
	}
}

std::ostream & operator<< (std::ostream &out, Character const& c) {
	out << c.getName() << " has " << c.getAP() << " AP and";
	if (c.getWeapon())
		out << " wields a " << c.getWeapon()->getName() << std::endl;
	else
		out << " is unarmed" << std::endl;
	return out;
}
