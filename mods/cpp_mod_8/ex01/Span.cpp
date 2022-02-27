#include "Span.hpp"

Span::Span( int size ) : _n( 0 ), _maxSize( size )
{
    _arr = new int[ size ];
}

Span::Span( const Span &copy )
{
    this->_n = copy._n;
    this->_maxSize = copy._maxSize;
    this->_arr = new int[ this->_maxSize ];
    for ( int i = 0; i < this->_maxSize; i++ )
        this->_arr[ i ] = copy._arr[ i ];
}

Span::~Span()
{
    delete ( _arr );
}

Span   &Span::operator = ( const Span &rhs )
{
    if ( this == &rhs )
        return ( *this );
    if ( this->_arr )
        delete ( this->_arr );
    this->_n = rhs._n;
    this->_maxSize = rhs._maxSize;
    this->_arr = new int[ this->_maxSize ];
    for ( int i = 0; i < this->_maxSize; i++ )
        this->_arr[ i ] = rhs._arr[ i ];
    return ( *this );
}

void    Span::addNumber(int number)
{
    try 
    {
        if ( _n >= _maxSize )
        {
            throw ( noSpaceInArray() );
        }
        _arr[ _n ] = number;
        _n++;
    } catch ( const std::exception &e )
    {
        std::cout << e.what() << std::endl;
    }
}

int    Span::shortestSpan()
{
    try 
    {
        if (_n < 2)
            throw ( needsMoreElem() );
        int diff = abs( _arr[ 0 ] - _arr[ 1 ] );
        for ( int i = 0; i < _n; i++ )
        {
            for ( int x = i + 1; x < _n; x++ )
            {
                std::cout << " i: arr["<<i<<"]: " << _arr[i];
                std::cout << " x: arr["<<x<<"]: " << _arr[x];
                if ( _arr[ i ] == _arr[ x ] )
                {
                    std::cout << " diff: " << diff << std::endl;
                    continue ; 
                }
                if ( diff > abs( _arr[ i ] - _arr [ x ] ) )
                    diff = abs( _arr[ i ] - _arr [ x ] );
                if ( diff == 1 )
                    return ( diff );
                std::cout << " diff: " << diff << std::endl;
            }
        }
        return ( diff );
    } catch ( const std::exception &e)
    {
        std::cout << e.what() << std::endl;
        return ( -1 );
    }
    return ( 0 );
}

int    Span::longestSpan()
{
    try
    {
        if ( _n < 2 )
            throw ( needsMoreElem() );
        int min = _arr[ 0 ];
        int max = _arr[ 0 ];
        for ( int i = 1; i < _n; i++ )
        {
            if ( _arr[ i ] > max )
                max = _arr[ i ];
            else if ( _arr[ i ] < min )
                min = _arr[ i ];
        }
        return ( max - min );
    } catch ( const std::exception &e)
    {
        std::cout << e.what() << std::endl;
        return ( -1 );
    }
    return ( 0 );
}

const char *Span::noSpaceInArray::what() const throw()
{
    return ( "Exceeded Array capacity" );
}

const char *Span::needsMoreElem::what() const throw()
{
    return ( "Only one or none elements to find longest/smallest Span" );
}
