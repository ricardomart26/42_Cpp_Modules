#include "Fixed.hpp"

// Porque os meus floats tem uma precisão de um numero? Em vez de 17.5894 fica 17.6

Fixed::Fixed()
{
	std::cout << "Constructor called!" << std::endl;
	setRawBits(0);
}

Fixed::Fixed( const int raw )
{
	if (raw > (INT_MAX >> _staticPoint) || raw < (INT_MIN >> _staticPoint))
	{
		setRawBits(0);
		std::cout << "Number out of limits!" << std::endl;
	}
	else
		_fixedPoint = (raw << _staticPoint);
}

Fixed::Fixed( const float raw )
{
	if (raw > (INT_MAX >> _staticPoint) || raw < (INT_MIN >> _staticPoint))
	{
		std::cout << "Number out of limits!" << std::endl;
		setRawBits(0);
	}
	else
		_fixedPoint = (int)(raw * std::pow(2, _staticPoint));
}

Fixed::~Fixed()
{
	// std::cout << "Deconstructor called!" << std::endl;
}

Fixed::Fixed( const Fixed &copy )
{
	std::cout << "Copy constructor called!" << std::endl;
	this->_fixedPoint = copy._fixedPoint;
}

void	Fixed::setRawBits( const int raw )
{
	std::cout << "Set Raw bits called!" << std::endl;
	_fixedPoint = raw;
}

int	Fixed::getRawBits( void ) const
{
	return ( _fixedPoint );
}

float	Fixed::toFloat( void ) const
{
	return ( (float)(_fixedPoint / std::pow(2, _staticPoint)) );
}

int	Fixed::toInt( void ) const
{
	return ( (int)_fixedPoint >> _staticPoint );
}

Fixed	&Fixed::min( Fixed &lhs, Fixed &rhs )
{
	return ( lhs < rhs ? lhs : rhs );
}

const Fixed	&Fixed::min( const Fixed &lhs, const Fixed &rhs)
{
	return ( lhs < rhs ? lhs : rhs );
}

Fixed	&Fixed::max( Fixed &lhs, Fixed &rhs )
{
	return ( lhs > rhs ? lhs : rhs );
}

const Fixed	&Fixed::max( const Fixed &lhs, const Fixed &rhs )
{
	return ( lhs > rhs ? lhs : rhs );
}

Fixed &Fixed::operator = ( const Fixed &rhs )
{
	std::cout << "Assignment constructor called" << std::endl;
	if (this == &rhs)
		return ( *this );
	_fixedPoint = rhs._fixedPoint;
	return ( *this );
}

Fixed	Fixed::operator * ( const Fixed &rhs ) const
{
	return ( this->toFloat() * rhs.toFloat() );
}

Fixed	Fixed::operator - ( const Fixed &rhs ) const
{
	return ( this->toFloat() - rhs.toFloat() );
}

Fixed	Fixed::operator + ( const Fixed &rhs ) const
{
	return ( this->toFloat() + rhs.toFloat() );
}

Fixed	Fixed::operator / ( const Fixed &rhs ) const
{
	if (rhs.toFloat() == 0)
		return ( 0 ); // Como se tivesse a passar default Fixed()
	return ( this->toFloat() / rhs.toFloat() ); // Como se tivesse a passar Fixed(valor somado)
}

bool	operator < ( const Fixed &lhs, const Fixed &rhs )
{
	return ( lhs.getRawBits() < rhs.getRawBits() );
}

bool	operator > ( const Fixed &lhs, const Fixed &rhs )
{
	return ( lhs.getRawBits() > rhs.getRawBits() );
}

bool	operator <= ( const Fixed &lhs, const Fixed &rhs )
{
	return ( lhs.getRawBits() <= rhs.getRawBits() );
}

bool	operator >= ( const Fixed &lhs, const Fixed &rhs )
{
	return ( lhs.getRawBits() >= rhs.getRawBits() );
}

bool	operator == ( const Fixed &lhs, const Fixed &rhs )
{
	return ( lhs.getRawBits() == rhs.getRawBits() );
}

bool	operator != ( const Fixed &lhs, const Fixed &rhs )
{
	return ( lhs.getRawBits() != rhs.getRawBits() );
}

Fixed	&Fixed::operator++( void )
{
	this->_fixedPoint += 1;
	return ( *this );
}

Fixed	Fixed::operator++( int )
{
	Fixed temp(toFloat());
	this->_fixedPoint += 1;
	return ( temp );
}

std::ostream	&operator << ( std::ostream &os, const Fixed &rhs )
{
	os << rhs.toFloat();
	return ( os );
}
