#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) {
	_name = name;
	_damage = damage;
	_apcost = apcost;
}

AWeapon::~AWeapon() {

}

AWeapon::AWeapon(const AWeapon& s) {
	this->operator=(s);
}

void AWeapon::operator = (const AWeapon& s) {
	_name = s._name;
	_damage = s._damage;
	_apcost = s._apcost;
}

std::string AWeapon::getName() const {
	return _name;
}

int AWeapon::getDamage() const {
	return _damage;
}

int AWeapon::getAPCost() const {
	return _apcost;
}