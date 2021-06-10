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

void Contact::setDarkest_secret(std::string darkest_secret) {
	this->darkest_secret = darkest_secret;
}

void Contact::setUnderwear_color(std::string underwear_color) {
	this->underwear_color = underwear_color;
}

void Contact::setFavorite_meal(std::string favorite_meal) {
	this->favorite_meal = favorite_meal;
}

void Contact::setBirthday_date(std::string birthday_date) {
	this->birthday_date = birthday_date;
}

void Contact::setPhone_number(std::string phone_number) {
	this->phone_number = phone_number;
}

void Contact::setEmail_address(std::string email_address) {
	this->email_address = email_address;
}

void Contact::setPostal_address(std::string postal_address) {
	this->postal_address = postal_address;
}

void Contact::setLogin(std::string login) {
	this->login = login;
}

void Contact::setNickname(std::string nickname) {
	this->nickname = nickname;
}

void Contact::setLast_name(std::string last_name) {
	this->last_name = last_name;
}

void Contact::setFirst_name(std::string first_name) {
	this->first_name = first_name;
}

std::string Contact::getDarkest_secret() {
	return darkest_secret;
}

std::string Contact::getUnderwear_color() {
	return underwear_color;
}

std::string Contact::getFavorite_meal() {
	return favorite_meal;
}

std::string Contact::getBirthday_date() {
	return birthday_date;
}

std::string Contact::getPhone_number() {
	return phone_number;
}

std::string Contact::getEmail_address() {
	return email_address;
}

std::string Contact::getPostal_address() {
	return postal_address;
}

std::string Contact::getLogin() {
	return login;
}

std::string Contact::getNickname() {
	return nickname;
}

std::string Contact::getLast_name() {
	return last_name;
}

std::string Contact::getFirst_name() {
	return first_name;
}