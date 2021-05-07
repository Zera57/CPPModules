#include "Fixed.hpp"

		Fixed::Fixed() {
			std::cout << "Default constructor called" << std::endl;
			this->point = 0;
		}
		Fixed::~Fixed() {
			std::cout << "Destructor called" << std::endl;
			;
		}
		Fixed::Fixed(const Fixed &F) {
			std::cout << "Copy constructor called" << std::endl;
			this->operator=(F);
		}
		void Fixed::operator = (const Fixed &F) {
			std::cout << "Assignation operator called" << std::endl;
			this->point = F.getRawBits();
		}
		int Fixed::getRawBits( void ) const {
			std::cout << "getRawBits member function called" << std::endl;
			return (this->point);
		}
		void Fixed::setRawBits( int const raw ) {
			std::cout << "setRawBits member function called" << std::endl;
			this->point = raw;
		}
