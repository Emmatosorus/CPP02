#include "Fixed.h"
#include <iostream>

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Fixed::bar(const char c) const {
	std::cout << "char is " << c << std::endl;
	return ;
}

void	Fixed::bar(const int i) const {
	std::cout << "int is " << i << std::endl;
	return ;
}

void	Fixed::bar(const float f) const {
	std::cout << "float is " << f << std::endl;
	return ;
}

void	Fixed::bar(const Fixed & s) const {
	std::cout << "Sample is sample XD" << std::endl;
	return ;
}