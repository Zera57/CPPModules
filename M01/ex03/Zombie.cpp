/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hapryl <hapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:56:23 by hapryl            #+#    #+#             */
/*   Updated: 2021/04/19 18:17:21 by hapryl           ###   ########.fr       */
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
