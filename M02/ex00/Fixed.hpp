#include <iostream>

#pragma once

class Fixed {

	public: 
		Fixed();
		~Fixed();
		Fixed(const Fixed &F);
		void operator = (const Fixed &F);
		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		int					point;
		static const int	fractional = 8;
};