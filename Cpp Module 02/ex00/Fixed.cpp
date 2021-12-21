#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Constructor called!" << std::endl;
	setRawBits(0);
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
	std::cout << "operator constructor called" << std::endl;
	this->_fixedPoint = obj._fixedPoint;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "Get raw bits called!" << std::endl;
	return (this->_fixedPoint);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "Set Raw bits called!" << std::endl;
	this->_fixedPoint = raw;
}

