#include "Fixed.hpp"

// int	convert_to_binary()
// {
// 	int	bits;
// 	int temp = _fixedPoint;
// 	int	size = _staticPoint;

// 	while (size-- > 0)
// 	{
// 		bits = temp % 2;
// 		temp /= 2;
// 		bits *= 10;
// 	}
// 	std::cout << "ret: " << temp << std::endl;
// 	return (bits);
// }

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits called!" << std::endl;
	return _fixedPoint;
}
