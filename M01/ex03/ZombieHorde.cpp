/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hapryl <hapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:46:40 by hapryl            #+#    #+#             */
/*   Updated: 2021/04/19 16:38:29 by hapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) {
	srand( time(0) );
	namesOfZombie = new std::string[4];
	namesOfZombie[0] = "Azat";
	namesOfZombie[1] = "Garry";
	namesOfZombie[2] = "Lenny";
	namesOfZombie[3] = "Bob";
	typesOfZombie = new std::string[4];
	typesOfZombie[0] = "STUPID";
	typesOfZombie[1] = "SILLY";
	typesOfZombie[2] = "Strong";
	typesOfZombie[3] = "Tank";
	horde = (Zombie **)operator new(N * sizeof(Zombie));
	for (int i = 0; i < N; i++)
		horde[i] = this->randomChump();
	count = N;
}

Zombie* ZombieHorde::randomChump() {
	return (new Zombie(namesOfZombie[rand() % 4], typesOfZombie[rand() % 4]));
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < count; i++)
		horde[i]->announce();
}
