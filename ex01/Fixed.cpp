#include "Fixed.h"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->n = 0;
	return ;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & s )
{
	std::cout << "Copy constructor called" << std::endl;
	this->n = s.n;
	return ;
}

Fixed::Fixed( int const i )
{
	std::cout << "Int constructor called" << std::endl;
	this->n = i << this->fractional;
	return ;
}

Fixed::Fixed( float const f )
{
	std::cout << "Float constructor called" << std::endl;
	this->n = roundf(f * (1 << this->fractional));
	return ;
}

Fixed & Fixed::operator=( Fixed const & thing )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->n = thing.n;
	return *this;
}

int	Fixed::getRawBits( void ) const
{
	return (this->n);
}

void	Fixed::setRawBits( int const raw )
{
	this->n = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->n / (float)(2 << (this->fractional - 1)));
}

int	Fixed::toInt( void ) const
{
	return (this->n / (1 << this->fractional));
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}