#ifndef ARRAY_HPP
#define ARRAY_HPP

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

		int	size( void ) const;
		T	*getArray( void );
		class indexOutOfRange : public std::exception
		{
			virtual const char *what() const throw();
		};

	private:

		T				*_arr;
		unsigned int	_size;

};

// Constructors, Destructers and copy Constructor

template <class T>
Array<T>::Array()
{
	_arr = new T[0]();
}

template <class T>
Array<T>::Array(unsigned int n) : _size( n )
{
	_arr = new T[n]();

}

template <class T>
Array<T>::~Array()
{
	delete[] _arr;
}

template <class T>
Array<T>::Array(const Array &copy)
{
	_size = copy._size;
	_arr = new T[copy._size];
	for (size_t i = 0; i < copy._size; i++)
		_arr[i] = copy._arr[i];
}

template <class T>
Array<T>	&Array<T>::operator = (const Array &rhs)
{
	if (this == &rhs)
		return ( *this );
	delete[]	_arr;
	_arr = new T[rhs._size];
	for (unsigned int i = 0; i < rhs._size; i++)
		_arr[i] = rhs._arr[i];
	_size = rhs._size;
	return ( *this );
}

template <class T>
T	&Array<T>::operator[] (const int loc)
{
	if ( loc >= (int)_size || loc < 0 )
		throw indexOutOfRange();
	return ( _arr[loc] );
}


template <class T>
int	Array<T>::size( void ) const
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
	return ( "Exception: Index Out of Range" );
}

#endif
