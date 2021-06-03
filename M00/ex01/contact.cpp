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