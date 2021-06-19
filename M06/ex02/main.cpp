#include "Base.hpp"

Base * generate(void) {
	switch (rand() % 3) {
		case 0:
		return (new A());
		break;
		case 1:
		return (new B());
		break;
		case 2:
		return (new C());
		break;
	}
	return (new A());
}

void identify_from_pointer(Base * p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference( Base & p) {
	try {
		dynamic_cast<A&>(p).~A();
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e) {
		e.what();
	}
	try {
		dynamic_cast<B&>(p).~B();
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e) {
		e.what();
	}
	try {
		dynamic_cast<C&>(p).~C();
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e) {
		e.what();
	}
}

int main () {
	srand(time(0));
	identify_from_pointer(generate());
	identify_from_reference(*generate());
	return 0;
}