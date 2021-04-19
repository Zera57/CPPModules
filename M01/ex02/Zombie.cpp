/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hapryl <hapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:56:23 by hapryl            #+#    #+#             */
/*   Updated: 2021/04/19 18:16:38 by hapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string _name, std::string _type)
{
	name = _name;
	type = _type;
};

void	Zombie::announce() {
	std::cout << this->name + "(" + this->type + ")" + " Braiiiiiiinnnssss..."<< std::endl;
}

ZombieEvent::ZombieEvent() {
	namesOfZombie = new std::string[4];
	namesOfZombie[0] = "Azat";
	namesOfZombie[1] = "Garry";
	namesOfZombie[2] = "Lenny";
	namesOfZombie[3] = "Bob";
	typesOfZombie = new std::string[4];
	typesOfZombie[0] = "STUPID";
	typesOfZombie[1] = "SILLY";
	typesOfZombie[2] = "Tank";
	typesOfZombie[3] = "Lox";
	srand( time(0) );
}

int		ZombieEvent::setZombieType(int i) {
	if (i < 0 || i > 3)
		return (-1);
	this->type = typesOfZombie[i];
	return (0);
}

Zombie*	ZombieEvent::newZombie(std::string name) {
	return (new Zombie(name, this->type));
}

Zombie* ZombieEvent::randomChump() {
	Zombie *zomb = new Zombie(namesOfZombie[rand() % 4], typesOfZombie[rand() % 3]);
	zomb->announce();
	return (zomb);
}

