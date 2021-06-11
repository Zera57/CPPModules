#include "Brain.hpp"

Brain::Brain() {
	srand( time(0) );
	iq = rand() % 200;
}

std::string	Brain::identify() {
	std::ostringstream address;
	address << (void const *)this;
	return address.str();
}
