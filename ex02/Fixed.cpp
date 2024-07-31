#include "Fixed.h"

Fixed::Fixed()
{
	this->n = 0;
	return ;
}

Fixed::~Fixed() {
	return ;
}

Fixed::Fixed( Fixed const & s )
{
	this->n = s.n;
	return ;
}

Fixed::Fixed( int const i )
{
	this->n = i << this->fractional;
	return ;
}

Fixed::Fixed( float const f )
{
	this->n = roundf(f * (1 << this->fractional));
	return ;
}

Fixed & Fixed::operator=( Fixed const & thing )
{
	this->n = thing.n;
	return *this;
}

Fixed & Fixed::operator+( Fixed const & thing )
{
	this->n = roundf((this->toFloat() + thing.toFloat()) * (1 << this->fractional));
	return *this;
}

Fixed & Fixed::operator-( Fixed const & thing )
{
	this->n = roundf((this->toFloat() - thing.toFloat()) * (1 << this->fractional));
	return *this;
}

Fixed & Fixed::operator*( Fixed const & thing )
{
	Fixed	res;

	this->n = roundf((this->toFloat() * thing.toFloat()) * (1 << this->fractional));
	return *this;
}

Fixed & Fixed::operator/( Fixed const & thing )
{
	Fixed	res;

	this->n = roundf((this->toFloat() / thing.toFloat()) * (1 << this->fractional));
	return *this;
}

Fixed Fixed::operator++( int )
{
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed & Fixed::operator++( void )
{
	n++;
	return *this;
}

Fixed Fixed::operator--( int )
{
	Fixed temp = *this;
	--*this;
	return temp;
}

Fixed & Fixed::operator--( void )
{
	n--;
	return *this;
}

bool Fixed::operator>( Fixed const & thing )
{
	return (this->n > thing.n);
}

bool Fixed::operator<( Fixed const & thing )
{
	return (this->n < thing.n);
}

bool Fixed::operator>=( Fixed const & thing )
{
	return (this->n >= thing.n);
}

bool Fixed::operator<=( Fixed const & thing )
{
	return (this->n <= thing.n);
}

bool Fixed::operator==( Fixed const & thing )
{
	return (this->n == thing.n);
}

bool Fixed::operator!=( Fixed const & thing )
{
	return (this->n != thing.n);
}

Fixed & Fixed::min(Fixed & n1, Fixed & n2)
{
	if (n1.getRawBits() > n2.getRawBits())
		return n2;
	else
		return n1;
}

const Fixed & Fixed::min(Fixed const & n1, Fixed const & n2)
{
	if (n1.getRawBits() > n2.getRawBits())
		return n2;
	else
		return n1;
}

Fixed & Fixed::max(Fixed & n1, Fixed & n2)
{
	if (n1.getRawBits() < n2.getRawBits())
		return n2;
	else
		return n1;
}
	
const Fixed & Fixed::max(Fixed const & n1, Fixed const & n2)
{
	if (n1.getRawBits() < n2.getRawBits())
		return n2;
	else
		return n1;
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