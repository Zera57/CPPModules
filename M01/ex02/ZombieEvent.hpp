#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

enum ZombieTypes {
	STUPID,
	SILLY,
	Strong,
	Tank
};

class ZombieEvent {
	public:
		std::string *namesOfZombie;
		std::string *typesOfZombie;
		ZombieEvent();
		int setZombieType(int i);
		Zombie* newZombie(std::string name);
		Zombie* randomChump();

	private:
		std::string	type;
};

#endif