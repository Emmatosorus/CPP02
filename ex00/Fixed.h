#ifndef FIXED_H
#define FIXED_H


class Fixed {

	public:
		Fixed();
		~Fixed();

		void	bar( char const c ) const;
		void	bar( int const i ) const;
		void	bar( float const f ) const;
		void	bar( Fixed const & s ) const;
};


#endif
