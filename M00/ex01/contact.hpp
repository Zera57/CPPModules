#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;

		
	public:
		void setDarkest_secret(std::string darkest_secret);
		
		void setUnderwear_color(std::string underwear_color);
		
		void setFavorite_meal(std::string favorite_meal);
		
		void setBirthday_date(std::string birthday_date);
		
		void setPhone_number(std::string phone_number);
		
		void setEmail_address(std::string email_address);
		
		void setPostal_address(std::string postal_address);
		
		void setLogin(std::string login);
		
		void setNickname(std::string nickname);
		
		void setLast_name(std::string last_name);
		
		void setFirst_name(std::string first_name);

		std::string getDarkest_secret();
		
		std::string getUnderwear_color();
		
		std::string getFavorite_meal();
		
		std::string getBirthday_date();
		
		std::string getPhone_number();
		
		std::string getEmail_address();
		
		std::string getPostal_address();
		
		std::string getLogin();
		
		std::string getNickname();
		
		std::string getLast_name();
		
		std::string getFirst_name();
		
		void Delete();
		bool IsEmpty();
};

#endif