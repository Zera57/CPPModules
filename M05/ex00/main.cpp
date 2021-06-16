#include "Bureaucrat.hpp"

int main() {
	Bureaucrat b = Bureaucrat("Bobby", 1);
	std::cout << b;
	try
	{
		b.upGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		for (size_t i = 0; i < 150; i++)
		{
			b.downGrade();
		}
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << b;
	return 0;
}