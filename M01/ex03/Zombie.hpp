/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hapryl <hapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:56:46 by hapryl            #+#    #+#             */
/*   Updated: 2021/04/19 18:17:26 by hapryl           ###   ########.fr       */
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
