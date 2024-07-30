#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {

	public:
		Fixed( void );
		Fixed( Fixed const & s );
		Fixed( int const i );
		Fixed( float const f );
		~Fixed( void );

		Fixed & operator=( Fixed const & thing);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void) const;
		int		toInt( void) const;

	private:
		int n;
		static const int fractional = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

#endif
