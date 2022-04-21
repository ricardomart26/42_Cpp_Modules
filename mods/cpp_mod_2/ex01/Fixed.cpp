#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Constructor called!" << std::endl;
	setRawBits(0);
}

Fixed::Fixed( const int raw )
{
	if (raw > (INT_MAX >> _staticPoint) || raw < (INT_MIN >> _staticPoint))
	{
		std::cout << "Number out of limits!" << std::endl;
		setRawBits(0);
	}
	else
	{
		std::cout << "Int Constructor called!" << std::endl;
		_fixedPoint = raw << _staticPoint;
	}
	
}

Fixed::Fixed( const float raw )
{
	if (raw > (INT_MAX >> _staticPoint) || raw < (INT_MIN >> _staticPoint))
	{
		std::cout << "Number out of limits!" << std::endl;
		setRawBits(0);
	}
	else
	{
		std::cout << "Float Constructor called! raw: " << raw << std::endl;
		_fixedPoint = (int)(raw * std::pow(2, _staticPoint));
	}
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called!" << std::endl;
}

Fixed::Fixed( const Fixed &copy )
{
	std::cout << "Copy constructor called!" << std::endl;
	_fixedPoint = copy._fixedPoint;
}

Fixed & Fixed::operator = ( const Fixed & rhs )
{
	std::cout << "Assignment constructor called" << std::endl;
	if (this == &rhs)
		return (*this);
	_fixedPoint = rhs._fixedPoint;
	return ( *this );
}

int	Fixed::getRawBits( void ) const
{
	return ( _fixedPoint );
}

float	Fixed::toFloat( void ) const
{
	return ( (float)_fixedPoint / std::pow(2, _staticPoint) );
}

int	Fixed::toInt( void ) const
{
	return ( (int)_fixedPoint >> _staticPoint );
}

void	Fixed::setRawBits( const int raw )
{
	std::cout << "Set Raw bits called!" << std::endl;
	_fixedPoint = raw;
}

std::ostream	&operator << ( std::ostream &os, const Fixed &rhs )
{
	os << rhs.toFloat();
	return (os);
}
