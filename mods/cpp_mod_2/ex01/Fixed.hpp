#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		
		Fixed();
		Fixed(const int raw);
		Fixed(const float raw);
		Fixed(const Fixed& copy);
		~Fixed();
		Fixed	&operator=(const Fixed &a);

		int		getRawBits(void) const; // Retorna o valor raw do fixed point
		void	setRawBits(const int raw); // Define o raw value do fixed point
		float	toFloat(void) const;
		int		toInt(void) const;


	private:

		int					_fixedPoint;
		const static int	_staticPoint = 8;

};

std::ostream	&operator<<(std::ostream &stream, const Fixed & obj);

#endif
