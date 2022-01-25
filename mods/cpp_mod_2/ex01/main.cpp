#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const test( 100.5f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	return 0;
}

// const int SHIFT_MASK = (1 << SHIFT_AMOUT) - 1;

/**
 * Isto significa que vamos usar 8 bits como lsb (least significant bits)
 * 
 * Integer MSB (Most significant bits) 24 bits       Fraction LSB 8 bits
 * 			00000000 00000000 00000000 				   	  00000000
 * 
 */

// int main(void)
// {
// 	int price = 500 << SHIFT_AMOUT;

// 	std::cout << price << "\n";
// 	std::cout << SHIFT_MASK << "\n";
// 	std::cout << (price & SHIFT_MASK) << "\n";


// 	return (0);
// }
