#include <iostream>
#include "contact.hpp"

void ft_space(std::string str) {
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

std::string ft_getString() {
	std::string input;
	std::getline(std::cin, input);
	while (input.length() == 0 && !std::cin.eof())
	{
		std::cout << "Empty line is invalid" << std::endl;
		std::getline(std::cin, input);
	}
	return input;
}

int     main() {
	
	Contact *    list[8];
	int         i = 0;
	std::string str;
	for (size_t a = 0; a < 8; a++)
	{
		list[a] = NULL;
	}
	
	do
	{
		std::cout << "Input command: ";
		if (!getline(std::cin, str))
			break;
		if (!str.compare("ADD"))
		{
			list[i] = new Contact();
			std::cout << "Input first_name: ";
			list[i]->setFirst_name(ft_getString());
			std::cout << "Input last_name: ";
			list[i]->setLast_name(ft_getString());
			std::cout << "Input nickname: ";
			list[i]->setNickname(ft_getString());
			std::cout << "Input login: ";
			list[i]->setLogin(ft_getString());
			std::cout << "Input postal_address: ";
			list[i]->setPostal_address(ft_getString());
			std::cout << "Input email_address: ";
			list[i]->setEmail_address(ft_getString());
			std::cout << "Input phone_number: ";
			list[i]->setPhone_number(ft_getString());
			std::cout << "Input birthday_date: ";
			list[i]->setBirthday_date(ft_getString());
			std::cout << "Input favorite_meal: ";
			list[i]->setFavorite_meal(ft_getString());
			std::cout << "Input underwear_color: ";
			list[i]->setUnderwear_color(ft_getString());
			std::cout << "Input darkest_secret: ";
			list[i]->setDarkest_secret(ft_getString());
			if (i < 7)
				i++;
		}
		else if (!str.compare("SEARCH"))
		{
			for (size_t g = 0; g < 8; g++)
			{
				if (list[g] && !list[g]->IsEmpty())
				{
					std::cout << "         " << g + 1 << "|";
					ft_space(list[g]->getFirst_name());
					ft_space(list[g]->getLast_name());
					ft_space(list[g]->getNickname());
					std::cout << std::endl;
				}
			}
			std::cout << "Input index of element: ";
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
			if (j > i || j < 0 || !list[j])
			{
				std::cout << "Index out of range"<< std::endl;
				continue;
			}
			std::cout << "first_name:\t\t" << list[j]->getFirst_name() << std::endl;
			std::cout << "last_name:\t\t" << list[j]->getLast_name() << std::endl;
			std::cout << "nickname:\t\t" << list[j]->getNickname() << std::endl;
			std::cout << "login:\t\t\t" << list[j]->getLogin() << std::endl;
			std::cout << "postal_address:\t\t" << list[j]->getPostal_address() << std::endl;
			std::cout << "email_address:\t\t" << list[j]->getEmail_address() << std::endl;
			std::cout << "phone_number:\t\t" << list[j]->getPhone_number() << std::endl;
			std::cout << "birthday_date:\t\t" << list[j]->getBirthday_date() << std::endl;
			std::cout << "favorite_meal:\t\t" << list[j]->getFavorite_meal() << std::endl;
			std::cout << "underwear_color:\t" << list[j]->getUnderwear_color() << std::endl;
			std::cout << "darkest_secret:\t\t" << list[j]->getDarkest_secret() << std::endl;
		}
	} while (str.compare("EXIT") && str.find_first_of('\0') == std::string::npos);
	
	return 0;
}
