#ifndef FIXED_H
#define FIXED_H


class Fixed {

	public:
		Fixed( void );
		Fixed( Fixed const & s );
		~Fixed( void );

		Fixed & operator=( Fixed const & thing);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
		int n;
		static const int eight = 8;
};


#endif
