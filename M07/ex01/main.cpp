#include "iostream"
#include "iter.hpp"

template <typename T>
void print(const T & lhs) {
	std::cout << lhs << std::endl;
}

int main( void ) {
	int array[] = { 1, 2, 3 ,4, 5};

	iter(array, 5, print);
	return 0;
}