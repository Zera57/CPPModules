#include "Pony.hpp"

Pony::Pony(std::string _name, int _weight, int _speed)
{
	std::cout << "Pony " << _name << " rodilsya" << std::endl;
	name = _name;
	weight = _weight;
	speed = _speed;
};

Pony::~Pony() {
	std::cout << "Pony " << this->name << " sdoh" << std::endl;
};

void Pony::Move(int hours) {
	std::cout << "Walked " << this->speed * hours << std::endl;
}

void ponyOnTheHeap()
{
	Pony a("Applejack", 100, 30);
	a.Move(5);
}

void ponyOnTheStack()
{
	Pony *b = new Pony("Fluttershy", 90, 31);
	b->Move(5);
	delete(b);
}
