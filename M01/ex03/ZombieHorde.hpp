#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

enum ZombieTypes {
	STUPID,
	SILLY,
	Strong,
	Tank
};

class ZombieHorde {
	public: 
		Zombie **horde;

		ZombieHorde(int N);
		~ZombieHorde();
		void announce();
	private:
		int		count;

		Zombie* newZombie(std::string name);
		Zombie* randomChump();
		std::string *namesOfZombie;
		std::string *typesOfZombie;
};

#endif