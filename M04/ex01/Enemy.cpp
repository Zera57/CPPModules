#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _type(type) {
	_hp = hp;
}

Enemy::~Enemy()
{
}

Enemy::Enemy(const Enemy& e) {
	*this = e;
}

void Enemy::operator=(const Enemy& e) {
	_hp = e._hp;
}

std::string const &Enemy::getType(void) const {
	return _type;
}

int Enemy::getHP(void) const {
	return _hp;
}

void Enemy::takeDamage(int damage) {
	if (damage < 0)
		return ;
	_hp -= damage;
	if (_hp < 0)
		_hp = 0;
}
