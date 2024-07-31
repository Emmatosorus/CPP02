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
		Fixed & operator+( Fixed const & thing);
		Fixed & operator-( Fixed const & thing);
		Fixed & operator*( Fixed const & thing);
		Fixed & operator/( Fixed const & thing);

		Fixed operator++(int);
		Fixed & operator++();
		Fixed operator--(int);
		Fixed & operator--();
	
		bool	operator<(Fixed const & thing);
		bool	operator>(Fixed const & thing);
		bool	operator>=(Fixed const & thing);
		bool	operator<=(Fixed const & thing);
		bool	operator==(Fixed const & thing);
		bool	operator!=(Fixed const & thing);

		static Fixed & min(Fixed & n1, Fixed & n2);
		static const Fixed & min(Fixed const & n1, Fixed const & n2);
		static Fixed & max(Fixed & n1, Fixed & n2);
		static const Fixed & max(Fixed const & n1, Fixed const & n2);

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
