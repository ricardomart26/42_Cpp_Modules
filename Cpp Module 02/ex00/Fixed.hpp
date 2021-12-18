#include <iostream>

class Fixed
{
	public:
		
		Fixed() 
			: _fixedPoint(0) 
		{
			std::cout << "Default contructor called! " << std::endl;
		}
		Fixed(const Fixed&) {std::cout << "Copy constructor called! " << std::endl;}
		~Fixed() {std::cout << "Destructed Object! " << std::endl;}
		Fixed & operator = (const Fixed &a) {std::cout << "Assignemt operator called !" << std::endl;}

		int		convert_to_binary();
		int		getRawBits(void) const; // Retorna o valor raw do fixed point
		void	setRawBits(const int raw); // Define o raw value do fixed point

	private:

	int					_fixedPoint;
	const static int	_staticPoint = 8;

};
