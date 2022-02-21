#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template < typename T >
void	iter(T *x, int length, void (*func) (T &))
{
	for (int i = 0; i < length; i++)
		(*func)(x[i]);
}

template< typename T >
void print( T const & x ) 
{ 
	std::cout << x << std::endl;
	return; 
}

class Awesome
{
	public:
	
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

#endif
