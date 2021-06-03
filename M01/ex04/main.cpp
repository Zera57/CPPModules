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