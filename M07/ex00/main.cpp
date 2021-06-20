#include "iostream"
#include "whatever.hpp"


class Awesome {
	private:
		int _n;
	public:
		Awesome(int n) { _n = n; }
		virtual ~Awesome() {}
		bool operator>(Awesome const & op) const { return _n > op._n; }
		bool operator==(Awesome const & op) const { return _n == op._n; }
		bool operator<(Awesome const & op) const { return _n < op._n; }
		int getN() const { return _n; }
};

int main( void ) {
	int a = 2;
	int b = 3;

	Awesome a1(123);
	Awesome a2(321);

	::swap( a1, a2 );
	std::cout << "a = " << a1.getN() << ", b = " << a2.getN() << std::endl;
	std::cout << "min( a, b ) = " << ::min( a1, a2 ).getN() << std::endl;
	std::cout << "max( a, b ) = " << ::max( a1, a2 ).getN() << std::endl;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return 0;
}