#include "Fixed.h"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->n = 0;
	return ;
}

Fixed::Fixed( Fixed const & s )
{
	std::cout << "Copy constructor called" << std::endl;
	this->n = s.n;
	return ;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
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
	std::cout << "getRawBits member function called" << std::endl;
	return (this->n);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->n = raw;
}