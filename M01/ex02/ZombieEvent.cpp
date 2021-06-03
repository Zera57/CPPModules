#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
	namesOfZombie = new std::string[4];
	namesOfZombie[0] = "Azat";
	namesOfZombie[1] = "Garry";
	namesOfZombie[2] = "Lenny";
	namesOfZombie[3] = "Bob";
	typesOfZombie = new std::string[4];
	typesOfZombie[0] = "STUPID";
	typesOfZombie[1] = "SILLY";
	typesOfZombie[2] = "Tank";
	typesOfZombie[3] = "Lox";
	srand( time(0) );
}

int		ZombieEvent::setZombieType(int i) {
	if (i < 0 || i > 3)
		return (-1);
	this->type = typesOfZombie[i];
	return (0);
}

Zombie*	ZombieEvent::newZombie(std::string name) {
	return (new Zombie(name, this->type));
}

Zombie* ZombieEvent::randomChump() {
	Zombie *zomb = new Zombie(namesOfZombie[rand() % 4], typesOfZombie[rand() % 3]);
	zomb->announce();
	return (zomb);
}
