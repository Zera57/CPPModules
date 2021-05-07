#include "Fixed.hpp"

	Fixed::Fixed() {
		std::cout << "Default constructor called" << std::endl;
		this->point = 0;
	}
	Fixed::Fixed(int value) {
		std::cout << "Int constructor called" << std::endl;
		this->point = roundf(value * (1 << 8));
	}
	Fixed::Fixed(float value) {
		std::cout << "Float constructor called" << std::endl;
		this->point = roundf(value * (1 << 8));
	}
	Fixed::~Fixed() {
		std::cout << "Destructor called" << std::endl;
		;
	}
	Fixed::Fixed(const Fixed &F) {
		std::cout << "Copy constructor called" << std::endl;
		this->operator=(F);
	}
	Fixed & Fixed::operator = (const Fixed &F) {
		std::cout << "Assignation operator called" << std::endl;
		this->point = F.point;
		return (*this);
	}
	std::ostream & operator<<( std::ostream & o, Fixed const & F) {
		o << F.toFloat();
		return (o);
	}
	int Fixed::getRawBits( void ) const {
		std::cout << "getRawBits member function called" << std::endl;
		return (this->point);
	}
	void Fixed::setRawBits( int const raw ) {
		std::cout << "setRawBits member function called" << std::endl;
		this->point = raw;
	}
	float Fixed::toFloat( void ) const {
		return ((float)this->point / (1 << 8));
	}
	int Fixed::toInt( void ) const {
		return (this->point / (1 << 8));
	}
