#include <iostream>

class Fixed
{
	public:
		
		Fixed() {std::cout << "Default contructor called! " << std::endl;}
		Fixed(const Fixed&) {std::cout << "Copy constructor called! " << std::endl;}
		~Fixed() {std::cout << "Destructed Object! " << std::endl;}
		Fixed & operator = (const Fixed &a) {std::cout << "Assignemt operator called !" << std::endl;}

		int		getRawBits(void) const; // Retorna o valor raw do fixed point
		void	setRawBits(const int raw); // Define o raw value do fixed point

	private:

	int					_fixedPoint;
	const static int	_staticPoint;

};
