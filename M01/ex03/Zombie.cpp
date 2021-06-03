#include "Zombie.hpp"

Zombie::Zombie(std::string _name, std::string _type)
{
	name = _name;
	type = _type;
};

void	Zombie::announce() {
	std::cout << this->name + "(" + this->type + ")" + " Braiiiiiiinnnssss..."<< std::endl;
}
