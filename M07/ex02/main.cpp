#include "iostream"
#include "Array.hpp"

int main( void ) {
	Array<int> a(5);
	for (size_t i = 0; i < a.size(); i++)
	{
		std::cout << a[i] << std::endl;
	}
	while (true)
	{
		;
	}
	return 0;
}