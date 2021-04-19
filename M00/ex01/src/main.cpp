/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hapryl <hapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:01:27 by hapryl            #+#    #+#             */
/*   Updated: 2021/04/18 15:23:58 by hapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "contact.hpp"

void ft_space(std::string str)
{
	for (size_t i = 10; i > str.length(); i--)
	{
		std::cout << " ";
	}
	if (str.length() > 10)
	{
		std::cout << str.substr(0, 9);
		std::cout << ".";
	}
	else
		std::cout << str;
	std::cout << "|";
}

int     main() {
	
	Contact     list[8];
	int         i = 0;
	std::string str;
	do
	{
		std::cout << "Input command: " << std::endl;
		if (!getline(std::cin, str))
			break;
		if (!str.compare("ADD"))
		{
			std::cout << "Input first_name: " << std::endl;
			std::getline(std::cin, list[i].first_name);
			std::cout << "Input last_name: " << std::endl;
			std::getline(std::cin, list[i].last_name);
			std::cout << "Input nickname: " << std::endl;
			std::getline(std::cin, list[i].nickname);
			std::cout << "Input login: " << std::endl;
			std::getline(std::cin, list[i].login);
			std::cout << "Input postal_address: " << std::endl;
			std::getline(std::cin, list[i].postal_address);
			std::cout << "Input email_address: " << std::endl;
			std::getline(std::cin, list[i].email_address);
			std::cout << "Input phone_number: " << std::endl;
			std::getline(std::cin, list[i].phone_number);
			std::cout << "Input birthday_date: " << std::endl;
			std::getline(std::cin, list[i].birthday_date);
			std::cout << "Input favorite_meal: " << std::endl;
			std::getline(std::cin, list[i].favorite_meal);
			std::cout << "Input underwear_color: " << std::endl;
			std::getline(std::cin, list[i].underwear_color);
			std::cout << "Input darkest_secret: " << std::endl;
			std::getline(std::cin, list[i].darkest_secret);
			if (i < 8)
				i++;
		}
		else if (!str.compare("SEARCH"))
		{
			for (size_t g = 0; g < 8; g++)
			{
				if (!list[g].IsEmpty())
				{
					std::cout << "         " << g + 1 << "|";
					ft_space(list[g].first_name);
					ft_space(list[g].last_name);
					ft_space(list[g].nickname);
					std::cout << std::endl;
				}
			}
			std::string index;
			int			j;
			if (!std::getline(std::cin, index))
				break;
			try {	j = stoi(index) - 1;	}
			catch (std::invalid_argument)
			{
				std::cout << "Invalid argument"<< std::endl;
				continue;
			}
			if (j > i - 1 || j < 0)
				continue;
			std::cout << "first_name:\t\t" << list[j].first_name << std::endl;
			std::cout << "last_name:\t\t" << list[j].last_name << std::endl;
			std::cout << "nickname:\t\t" << list[j].nickname << std::endl;
			std::cout << "login:\t\t\t" << list[j].login << std::endl;
			std::cout << "postal_address:\t\t" << list[j].postal_address << std::endl;
			std::cout << "email_address:\t\t" << list[j].email_address << std::endl;
			std::cout << "phone_number:\t\t" << list[j].phone_number << std::endl;
			std::cout << "birthday_date:\t\t" << list[j].birthday_date << std::endl;
			std::cout << "favorite_meal:\t\t" << list[j].favorite_meal << std::endl;
			std::cout << "underwear_color:\t" << list[j].underwear_color << std::endl;
			std::cout << "darkest_secret:\t\t" << list[j].darkest_secret << std::endl;
		}
	} while (str.compare("EXIT") && str.find_first_of('\0') == std::string::npos);
	
	return 0;
}
