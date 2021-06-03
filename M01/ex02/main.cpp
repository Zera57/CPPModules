#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main() {
	ZombieEvent a;

	a.setZombieType(1);
	Zombie *zoboid = a.newZombie("Boba");
	zoboid->announce();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);

	zoboid = a.randomChump();
	delete(zoboid);
	return (0);
}