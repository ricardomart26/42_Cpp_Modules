#include "Point.hpp"

/**
 * @links: https://www.geeksforgeeks.org/area-of-a-polygon-with-given-n-ordered-vertices/
 * https://www.geeksforgeeks.org/check-whether-triangle-is-valid-or-not-if-three-points-are-given/
 */

 
// Como saber se é um triangulo ?
bool	isTriangle(Point const a, Point const b, Point const c)
{
	Fixed	area = a.getX() * (b.getY() - c.getY())
				+ b.getX() * (c.getY() - a.getY())
				+ c.getX() * (a.getY() - b.getY());
	if (area == 0)
		return ( false );
	return ( true );
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (!isTriangle(a, b, c))
		return ( false );
	// Como saber se o ponto está dentro do triangulo ?
}
