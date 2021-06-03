#include "Brain.hpp"

std::string	Brain::identify() {
	std::ostringstream address;
	address << (void const *)this;
	return address.str();
}
