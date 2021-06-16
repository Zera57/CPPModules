#include "Character.hpp"

Character::Character(std::string const & name) {
	_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

Character::Character(const Character& c) {
	this->_name = std::string(c.getName());
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	for (int i = 0; i < 4; i++)
		if (c._inventory[i])
			this->_inventory[i] = c._inventory[i]->clone();
}

void Character::operator=(const Character& op) {
	if (this == &op)
		return ;
	this->_name = op.getName();
	
	for (int i = 0; i < 4; i++)
		if (op._inventory[i])
			this->_inventory[i] = op._inventory[i];
		else
			this->_inventory[i] = NULL;
	
	return ;
}

std::string const &	Character::getName(void) const {
	 return (this->_name);
}


void Character::equip(AMateria* m) {
	int i = 0;

	for (i = 0; i < 4 && this->_inventory[i] != NULL; i++);

	if (i < 4)
		this->_inventory[i] = m;
}


void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4)
		this->_inventory[idx]->use(target);
}