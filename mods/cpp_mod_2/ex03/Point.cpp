#include "Point.hpp"

Point::Point() : _x( 0 ), _y( 0 )
{

}

Point::Point( const float x, const float y ) : _x( x ), _y( y )
{
	
}

Point::~Point()
{

}

Point::Point( const Point &copy ) : _x( copy._x ), _y( copy._x )
{

}

Point	&Point::operator = ( const Point &rhs )
{
	if (this == &rhs)
		return ( *this );
	const_cast<Fixed&>(_x) = rhs._x;
	const_cast<Fixed&>(_y) = rhs._y;
	return ( *this );
}

const Fixed	Point::getX() const
{
	return ( _x );
}

const Fixed	Point::getY() const
{
	return ( _y );
}
