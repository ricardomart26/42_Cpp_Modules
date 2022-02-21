#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <exception>

template <class T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& copy);
		Array	&operator= (const Array& rhs);
		T	&operator[] (const int loc);
		~Array();

		int	getSize( void );
		T	*getArray( void );
		class indexOutOfRange : public std::exception
		{
			virtual const char *what() const throw();
		};

	private:

		T				*_arr;
		unsigned int	_size;

};


template <class T>
Array<T>::Array() : _size( 0 )
{
	_arr = new T[0];
}

template <class T>
Array<T>::Array(unsigned int n) : _size( n )
{
	_arr = new T[n];
	for (unsigned int i = 0; i < n; i++)
		_arr[i] = 0;
}

template <class T>
Array<T>::~Array()
{
	delete[]	_arr;
}

template <class T>
Array<T>::Array(const Array &copy)
{
	_size = copy._size;
	_arr = new T[copy._size];
	for (int i = 0; i < copy._size; i++)
		_arr[i] = copy->_arr[i];
}

template <class T>
Array<T>	&Array<T>::operator= (const Array &rhs)
{
	if (this == &rhs)
		return ( *this );
	delete[]	_arr;
	_arr = new T[rhs._size];
	for (unsigned int i = 0; i < rhs._size; i++)
		_arr[i] = rhs._arr[i];
	return ( *this );
}

template <class T>
T	&Array<T>::operator[] (const int loc)
{
	if ( loc >= (int)_size || loc < 0 )
		throw Array<T>::indexOutOfRange();
	return ( _arr[loc] );
}

template <class T>
int	Array<T>::getSize( void )
{
	return	( _size );
}

template <class T>
T	*Array<T>::getArray( void )
{
	return	( _arr );
}

template <class T>
const char	*Array<T>::indexOutOfRange::what() const throw()
{
	return ( "Index Out of Range" );
}

#endif
