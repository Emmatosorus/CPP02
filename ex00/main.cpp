#include <iostream>
#include "Fixed.h"

//int main( void ) {
//	Fixed a;
//	Fixed b( a );
//	Fixed c;
//	c = b;
//	std::cout << a.getRawBits() << std::endl;
//	std::cout << b.getRawBits() << std::endl;
//	std::cout << c.getRawBits() << std::endl;
//	return 0;
//}

int main( void ) {
	Fixed a;
	Fixed b;

	a.bar('a');
	a.bar(42);
	a.bar(3.14);
	a.bar(b);
	return 0;
}