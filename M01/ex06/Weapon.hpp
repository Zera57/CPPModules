/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hapryl <hapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 14:19:31 by hapryl            #+#    #+#             */
/*   Updated: 2021/04/20 15:23:36 by hapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#pragma once

class Weapon {
	
	public:
		Weapon(std::string type);
		
		std::string	getType();
		void		setType(std::string type);
	
	private:
		std::string	_type;
};
