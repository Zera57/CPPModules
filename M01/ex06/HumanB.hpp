/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hapryl <hapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:46:38 by hapryl            #+#    #+#             */
/*   Updated: 2021/04/20 15:31:08 by hapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#pragma once

class HumanB {

	public: 
		HumanB(std::string name);

		void		setWeapon(Weapon& weapon);
		void		attack();

	private:
		std::string	_name;
		Weapon		*_weapon;
};
