/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hapryl <hapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:56:46 by hapryl            #+#    #+#             */
/*   Updated: 2021/05/07 14:29:34 by hapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Pony {
	std::string	name;
	int			weight;
	int			speed;

	public:
		Pony(std::string _name, int _weight, int _speed);
		~Pony();
		void Move(int hours);
};

void ponyOnTheStack();
void ponyOnTheHeap();
