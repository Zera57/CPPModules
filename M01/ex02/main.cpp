#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main() {
	ZombieEvent a;
	Zombie *zoboid;

	a.setZombieType(SILLY);
	zoboid = a.newZombie("Boba");
	zoboid->announce();
	delete(zoboid);

	for (size_t i = 0; i < 5; i++) {
		zoboid = a.randomChump();
		delete(zoboid);
	}
	return (0);
}