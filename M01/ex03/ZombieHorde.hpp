#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {
	public: 
		Zombie **horde;

		ZombieHorde(int N);
		void announce();
	private:
		int		count;

		Zombie* randomChump();
		std::string *namesOfZombie;
		std::string *typesOfZombie;
};

#endif