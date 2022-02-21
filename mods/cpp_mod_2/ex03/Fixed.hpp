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

		Fixed	&operator=( const Fixed &a );
		//prefix one
		Fixed	&operator++();
		Fixed	operator++( int );
		Fixed	operator*( const Fixed &rhs ) const;
		Fixed	operator+( const Fixed &rhs ) const;
		Fixed	operator-( const Fixed &rhs ) const;
		Fixed	operator/( const Fixed &rhs ) const;

		int		getRawBits( void ) const; // Retorna o valor raw do fixed point
		void	setRawBits( const int raw ); // Define o raw value do fixed point
		float	toFloat( void ) const;
		int		toInt( void ) const;
		static Fixed		&min( Fixed &lhs, Fixed &rhs);
		static const Fixed	&min( const Fixed &lhs, const Fixed &rhs );
		static Fixed		&max( Fixed &lhs, Fixed &rhs );
		static const Fixed	&max( const Fixed &lhs, const Fixed &rhs );

	private:

		int					_fixedPoint;
		const static int	_staticPoint = 8;

};

bool	operator<=( const Fixed &lhs, const Fixed &rhs );
bool	operator<( const Fixed &lhs, const Fixed &rhs );
bool	operator>=( const Fixed &lhs, const Fixed &rhs );
bool	operator>( const Fixed &lhs, const Fixed &rhs );
bool	operator==( const Fixed &lhs, const Fixed &rhs );
bool	operator!=( const Fixed &lhs, const Fixed &rhs );

std::ostream	&operator<<( std::ostream &stream, const Fixed &obj );

#endif
