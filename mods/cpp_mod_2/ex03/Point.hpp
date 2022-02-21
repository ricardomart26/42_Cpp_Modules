#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{

	public:
		Point();
		Point(const float x, const float y);
		~Point();
		Point(const Point &copy);
		Point &operator = (const Point &rhs);
		const Fixed	getX() const;
		const Fixed	getY() const;


	private:
		const Fixed _x;
		const Fixed _y;

};

#endif
