#include "Fixed.hpp"

int main( void ) 
{
	{
		// MEUS TESTES
		int i = 0;
		std::cout << i++ << "\n"; // 0
		std::cout << ++i << "\n"; // 2
		std::cout << i << "\n\n\n"; // 2
		
	}

	{
		Fixed a;
		Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
		Fixed const c( Fixed( 5.5f ) + Fixed( 2 ) );
		Fixed const d( Fixed( 5.5f ) - Fixed( 2 ) );
		Fixed const e( Fixed( 5.0f ) / Fixed( 2 ) );
		Fixed const f(5.005f);

		a = b + c;

		std::cout << f << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		std::cout << b + c <<  " = " << a << std::endl;
		std::cout << a / a << std::endl;
		std::cout << a + b << std::endl;
		std::cout << d << std::endl;
		std::cout << e << std::endl;
		std::cout << "Valor atual de a: " << a << "\n";
		std::cout << "pre-inc: " << ++a << std::endl;
		std::cout << "pos-inc: (Deve ser o mesmo)" << a++ << " resultado depois: " << a << std::endl;
		// std::cout << ++a << std::endl;
		// std::cout << a++ << std::endl;
		// std::cout << a << std::endl;
		// std::cout << b << std::endl;
		// std::cout << Fixed::max( a, b ) << std::endl;
	}
	return 0;
}

