/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hapryl <hapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:46:38 by hapryl            #+#    #+#             */
/*   Updated: 2021/04/20 14:00:01 by hapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

class Human {

	public: 
		std::string	name;


		std::string	identify();
		Brain&		getBrain();

	private:
		Brain		_brain;
};
