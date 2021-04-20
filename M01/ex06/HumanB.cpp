/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hapryl <hapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:46:40 by hapryl            #+#    #+#             */
/*   Updated: 2021/04/20 13:59:55 by hapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	_name = name;
}

void		HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}

void		HumanB::attack() {
	std::cout << _name << " attac's with " << _weapon->getType() << std::endl;
}