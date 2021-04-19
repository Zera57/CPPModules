/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hapryl <hapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:56:46 by hapryl            #+#    #+#             */
/*   Updated: 2021/04/19 18:16:41 by hapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie {
	private:
	
		std::string	name;
		std::string	type;

	public:
		Zombie(std::string _name, std::string _type);
		void announce();
};

class ZombieEvent {
	public:
		std::string *namesOfZombie;
		std::string *typesOfZombie;
		ZombieEvent();
		int setZombieType(int i);
		Zombie* newZombie(std::string name);
		Zombie* randomChump();

	private:
		std::string	type;
};
