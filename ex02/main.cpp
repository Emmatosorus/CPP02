#include "Fixed.h"

int main( void )
{
	{
		Fixed a;

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << b << std::endl;

		std::cout << Fixed::max( a, b ) << std::endl;
	}
	std::cout << std::endl;
	{
		Fixed a;
		Fixed b( 42 );

		std::cout << "Smallest between " << a << " and " << b << " is " << Fixed::min( a, b ) << std::endl;
		std::cout << "Biggest between " << a << " and " << b << " is " << Fixed::max( a, b ) << std::endl;
	}
	std::cout << std::endl;
	{
		Fixed a(7);
		Fixed b(6);
		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
		a = a * b;
		std::cout << "a * b = " << a << std::endl;
		a = a / 7;
		std::cout << "42 / 7 = " << a << std::endl;
		a = a + 36;
		std::cout << "6 + 36 = " << a << std::endl;
	}
	std::cout << std::endl;
	{
		Fixed x(42.0f);
		{
			Fixed y(42);

			std::cout << "x = " << x << " and y = " << y << std::endl;
			if (x == y)
				std::cout << "x and y are equal" << std::endl;
			else
				std::cout << "x and y aren't equal" << std::endl;
		}
		std::cout << std::endl;
		{
			Fixed z(42.01f);

			std::cout << "x = " << x << " and z = " << z << std::endl;
			if (x == z)
				std::cout << "x and z are equal" << std::endl;
			else
				std::cout << "x and z aren't equal" << std::endl;
		}
		std::cout << std::endl;
		{
			Fixed w(84);

			std::cout << "x = " << x << " and w = " << w << std::endl;
			if (x > w)
				std::cout << "x is bigger than w" << std::endl;
			else
				std::cout << "w is bigger than x" << std::endl;
		}
		std::cout << std::endl;
		{
			Fixed m(43);
			bool	once = false;

			std::cout << "m = " << m << std::endl;
			while (x < m)
			{
				m--;
				if (m >= 42.97f || m <= 42.03f)
					std::cout << "m = " << m << std::endl;
				else if (!once)
				{
					once = true;
					std::cout << "[...]" << std::endl;
				}
			}
		}

	}
	return 0;
}