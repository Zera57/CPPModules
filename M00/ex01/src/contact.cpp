/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hapryl <hapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:56:37 by hapryl            #+#    #+#             */
/*   Updated: 2021/04/18 14:56:38 by hapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::Delete() {
	
}

bool Contact::IsEmpty() {
	if (this->first_name.length() <= 0 &&
		this->last_name.length() <= 0 &&
		this->nickname.length() <= 0)
		return (true);
	return (false);
}