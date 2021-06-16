#include "Bureaucrat.hpp"

int main() {
	Bureaucrat b = Bureaucrat("Bobby", 50);
	Form f1 = Form("Report", 10, 2);
	Form f2 = Form("Approve employee", 55, 50);

	try
	{
		Form f3 = Form("rap", 0, 40);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Cannot initialize f3, because " << e.what() << '\n';
	}

	std::cout << b;
	std::cout << f1 << f2;

	b.signForm(f1);
	b.signForm(f2);

	std::cout << f1 << f2;
	return 0;
}