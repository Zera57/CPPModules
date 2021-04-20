/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hapryl <hapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 15:21:23 by hapryl            #+#    #+#             */
/*   Updated: 2021/04/20 15:24:25 by hapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	_type = type;
}
		
std::string	Weapon::getType() {
	return _type;
}
void		Weapon::setType(std::string type) {
	_type = type;
}