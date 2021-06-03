#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony {
	std::string	name;
	int			weight;
	int			speed;

	public:
		Pony(std::string _name, int _weight, int _speed);
		~Pony();
		void Move(int hours);
};

void ponyOnTheStack();
void ponyOnTheHeap();

#endif