/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hapryl <hapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 15:01:36 by hapryl            #+#    #+#             */
/*   Updated: 2021/04/19 18:15:58 by hapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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