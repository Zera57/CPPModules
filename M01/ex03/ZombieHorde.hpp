/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hapryl <hapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:46:38 by hapryl            #+#    #+#             */
/*   Updated: 2021/04/19 17:50:18 by hapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class ZombieHorde {
	public: 
		Zombie **horde;

		ZombieHorde(int N);
		void announce();
	private:
		int		count;

		Zombie* randomChump();
		std::string *namesOfZombie;
		std::string *typesOfZombie;
};
