#include <iostream>
#include <cmath>

#pragma once

class Fixed {

	public: 
		Fixed();
		Fixed(int value);
		Fixed(float value);
		~Fixed();
		Fixed(const Fixed &F);
		Fixed & operator = (const Fixed &F);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

	private:
		int					point;
		static const int	fractional = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & F);