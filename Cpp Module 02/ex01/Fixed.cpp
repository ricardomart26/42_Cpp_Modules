#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Constructor called!" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const int raw)
{
	std::cout << "Int Constructor called!" << std::endl;
	setRawBits(raw);
}

Fixed::Fixed(const float raw)
{
	std::cout << "Float Constructor called!" << std::endl;
	setRawBits(raw);
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called!" << std::endl;
}

Fixed::Fixed(const Fixed & copy)
{
	std::cout << "Copy constructor called!" << std::endl;
	*this = copy;
}

Fixed & Fixed::operator = (const Fixed & obj)
{
	std::cout << "Assignment constructor called" << std::endl;
	this->_fixedPoint = obj._fixedPoint;
	return (*this);
}

std::ostream & operator << (std::ostream &stream, const Fixed & obj)
{
	stream << obj.getRawBits();
	return (stream);
}

int	Fixed::getRawBits(void) const
{
	return (this->_fixedPoint);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "Set Raw bits called!" << std::endl;
	this->_fixedPoint = raw;
}

