/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hapryl <hapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:08:43 by hapryl            #+#    #+#             */
/*   Updated: 2021/04/19 18:25:14 by hapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string a = "HI THIS IS BRAIN";
	std::string &ref = a;
	std::string *point = &a;
	std::cout << ref;
	std::cout << point;
	return 0;
}